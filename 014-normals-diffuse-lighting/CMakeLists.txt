add_executable(
  014
  014-normals-diffuse-lighting.cpp
  HUD014.h
  HUD014.cpp
  main_windows.cpp
)

target_include_directories(014 PUBLIC ${GLAD_INCLUDE_DIR})

target_link_libraries(014 common)
