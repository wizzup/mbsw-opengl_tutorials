cmake_minimum_required(VERSION 3.0)

project(hello)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(GLAD_INCLUDE_DIR "${PROJECT_SOURCE_DIR}/dependencies/glad/include")
set(STB_DIR "${PROJECT_SOURCE_DIR}/dependencies/stb")
set(FREETYPE_INCLUDE_DIR "${PROJECT_SOURCE_DIR}/dependencies/freetype2/include")

add_subdirectory(dependencies/glad)
add_subdirectory(dependencies/freetype2)

add_subdirectory(common_classes)

add_subdirectory(001-creating-opengl4-window)
add_subdirectory(002-first-shader)
add_subdirectory(003-adding-colors)
add_subdirectory(004-entering-third-dimension)
add_subdirectory(005-camera-pt1-simple-walking-camera)
add_subdirectory(006-camera-pt2-flying-camera)
add_subdirectory(007-textures-pt1-single-texture)
add_subdirectory(008-textures-pt2-multitexturing)
add_subdirectory(009-orthographic-2D-projection)
add_subdirectory(010-first-great-refactoring)
add_subdirectory(011-indexed-rendering-torus)
add_subdirectory(012-freetype-fonts-pt1)
add_subdirectory(013-blending-pt1)
add_subdirectory(014-normals-diffuse-lighting)

install(TARGETS glad common
  001 002 003 004 005 006 007 008 009 010 011 012 013 014
  RUNTIME DESTINATION bin
  LIBRARY DESTINATION lib
  ARCHIVE DESTINATION lib
)

install(DIRECTORY bin/data
  DESTINATION bin
)
