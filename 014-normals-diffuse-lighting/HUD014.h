#pragma once

#include <string>

#include "../common_classes/OpenGLWindow.h"
#include "../common_classes/HUD.h"
#include "../common_classes/texture.h"

#include "../common_classes/shader_structs/ambientLight.h"
#include "../common_classes/shader_structs/diffuseLight.h"

/**
  HUD for tutorial 014.
  */
class HUD014 : public HUD
{
  public:
    HUD014(const OpenGLWindow& window);

    /** \brief  Renders HUD. */
    void renderHUD() const override {} // Don't need this, but had to override, so that class is not abstract
    void renderHUD(const shader_structs::AmbientLight& ambientLight, const shader_structs::DiffuseLight& diffuseLight) const;
};
