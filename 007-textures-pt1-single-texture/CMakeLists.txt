add_executable(
  007
  007-textures-pt1-single-texture.cpp
  main_windows.cpp
)

target_include_directories(007 PUBLIC ${GLAD_INCLUDE_DIR})

target_link_libraries(007 common)
