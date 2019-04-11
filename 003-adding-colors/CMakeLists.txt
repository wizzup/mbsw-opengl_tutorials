add_executable(
  003
  003-adding-colors.cpp
  main_windows.cpp
)

target_include_directories(003 PUBLIC ${GLAD_INCLUDE_DIR})

target_link_libraries(003 common)
