add_executable(
  011
  011-indexed-rendering-torus.cpp
  main_windows.cpp
)

target_include_directories(011 PUBLIC ${GLAD_INCLUDE_DIR})

target_link_libraries(011 common)
