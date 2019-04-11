add_executable(
  009
  009-orthographic-2D-projection.cpp
  main_windows.cpp
)

target_include_directories(009 PUBLIC ${GLAD_INCLUDE_DIR})

target_link_libraries(009 common)
