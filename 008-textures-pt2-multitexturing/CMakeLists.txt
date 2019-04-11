add_executable(
  008
  008-textures-pt2-multitexturing.cpp
  main_windows.cpp
)

target_include_directories(008 PUBLIC ${GLAD_INCLUDE_DIR})

target_link_libraries(008 common)
