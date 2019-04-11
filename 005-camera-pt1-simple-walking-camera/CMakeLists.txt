add_executable(
  005
  005-camera-pt1-simple-walking-camera.cpp
  main_windows.cpp
)

target_include_directories(005 PUBLIC ${GLAD_INCLUDE_DIR})

target_link_libraries(005 common)
