add_executable(
  012
  012-freetype-fonts-pt1.cpp
  HUD012.h
  HUD012.cpp
  main_windows.cpp
)

target_include_directories(012 PUBLIC ${GLAD_INCLUDE_DIR})

target_link_libraries(012 common)
