add_executable(
  001
  001-creating-opengl4-window.cpp
  main_windows.cpp
)

target_include_directories(001 PUBLIC ${GLAD_INCLUDE_DIR})

target_link_libraries(001 common glad glfw)
