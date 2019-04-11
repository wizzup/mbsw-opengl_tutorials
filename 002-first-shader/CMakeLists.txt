add_executable(
  002
  002-first-shader.cpp
  main_windows.cpp
)

target_include_directories(002 PUBLIC ${GLAD_INCLUDE_DIR})

target_link_libraries(002 common)
