#include <mutex>

#include "freeTypeFontManager.h"

FreeTypeFontManager& FreeTypeFontManager::getInstance()
{
  static FreeTypeFontManager fm;
  return fm;
}

void FreeTypeFontManager::loadFreeTypeFontFromFile(const std::string& key, const std::string &filePath, const int pixelSize)
{
  if (containsFreeTypeFont(key))
  {
    const auto msg = "FreeType font with key '" + key + "' already exists!";
    throw std::runtime_error(msg.c_str());
  }

  auto freeTypeFont = std::make_unique<FreeTypeFont>();
  if (!freeTypeFont->loadFont(filePath, pixelSize))
  {
    const auto msg = "Could not load FreeType font'" + filePath + "'!";
    throw std::runtime_error(msg);
  }

  _freeTypeFontCache[key] = std::move(freeTypeFont);
}

void FreeTypeFontManager::loadSystemFreeTypeFont(const std::string& key, const std::string& fontName, const int pixelSize)
{
  // loadFreeTypeFontFromFile(key, getSystemFontDirectory()+fontName, pixelSize);

  // TODO: use fontconfig to find matched font
  //// using fc-list, fc-match or programmatically
  //// https://stackoverflow.com/a/14634033/1664572
  //// https://github.com/alexschrod/freedink-lua/blob/88ff3c183b0891abad221c3326a8f24544fb7ba4/test/fontconfig.c#L8
  //// https://github.com/kpeterr/openage/blob/5c5f68c0806452645116b97331954c73e442f8da/libopenage/renderer/font/font_manager.cpp#L13

  const auto path = "./data/NotoSans-Regular.ttf";
  loadFreeTypeFontFromFile(key, path, pixelSize);
}

FreeTypeFont& FreeTypeFontManager::getFreeTypeFont(const std::string& key) const
{
  if (!containsFreeTypeFont(key))
  {
    const auto msg = "Attempting to get non-existing FreeType font with key '" + key + "'!";
    throw std::runtime_error(msg.c_str());
  }

  return *_freeTypeFontCache.at(key);
}

void FreeTypeFontManager::clearFreeTypeFontCache()
{
  _freeTypeFontCache.clear();
}

bool FreeTypeFontManager::containsFreeTypeFont(const std::string& key) const
{
  return _freeTypeFontCache.count(key) > 0;
}

const std::string& FreeTypeFontManager::getSystemFontDirectory()
{
  static std::string systemFontsDirectory;
  static std::once_flag prepareOnceFlag;

  std::call_once(prepareOnceFlag, []()
      {
#ifdef _WIN32
      char buffer[512]; GetWindowsDirectory(buffer, 512);
      systemFontsDirectory = buffer;
      systemFontsDirectory += "\\Fonts\\";
#else
      // TODO: check if this works
      systemFontsDirectory = "/usr/share/fonts/";
#endif
      });

  return systemFontsDirectory;
}
