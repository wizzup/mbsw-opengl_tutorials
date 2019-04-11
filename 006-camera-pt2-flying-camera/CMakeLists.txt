add_executable(
  006
  006-camera-pt2-flying-camera.cpp
  main_windows.cpp
)

target_include_directories(006 PUBLIC ${GLAD_INCLUDE_DIR})

target_link_libraries(006 common)
