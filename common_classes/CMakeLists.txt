add_library(common SHARED
    # HUD.cpp
    # HUD.h
    OpenGLWindow.cpp
    OpenGLWindow.h
    # flyingCamera.cpp
    # flyingCamera.h
    # freeTypeFont.cpp
    # freeTypeFont.h
    # freeTypeFontManager.cpp
    # freeTypeFontManager.h
    # gldebug.h
    # matrixManager.cpp
    # matrixManager.h
    # ostreamUtils.h
    # sampler.cpp
    # sampler.h
    # samplerManager.cpp
    # samplerManager.h
    shader.cpp
    shader.h
    # shaderManager.cpp
    # shaderManager.h
    shaderProgram.cpp
    shaderProgram.h
    # shaderProgramManager.cpp
    # shaderProgramManager.h
    # shader_structs
    # simpleWalkingCamera.cpp
    # simpleWalkingCamera.h
    # staticGeometry.cpp
    # staticGeometry.h
    # stringUtils.h
    # texture.cpp
    # texture.h
    # textureManager.cpp
    # textureManager.h
    uniform.cpp
    uniform.h
    vertexBufferObject.cpp
    vertexBufferObject.h
    # static_meshes_2D
    # static_meshes_3D
    # static_meshes_2D/primitives/quad.cpp
    # static_meshes_2D/primitives/quad.h
)

target_include_directories(common PUBLIC ${GLAD_INCLUDE_DIR})
