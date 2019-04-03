cmake_minimum_required(VERSION 3.0)

project(hello)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(GLAD_INCLUDE_DIR "${PROJECT_SOURCE_DIR}/dependencies/glad/include")

add_subdirectory(dependencies/glad)

add_subdirectory(common_classes)

add_subdirectory(001-creating-opengl4-window)
add_subdirectory(002-first-shader)

install(TARGETS glad common 001 002
  RUNTIME DESTINATION bin
  LIBRARY DESTINATION lib
)

install(DIRECTORY bin/data
  DESTINATION bin
)
