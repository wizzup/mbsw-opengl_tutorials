add_executable(
  010
  010-first-great-refactoring.cpp
  HUD010.h
  HUD010.cpp
  main_windows.cpp
)

target_include_directories(010 PUBLIC ${GLAD_INCLUDE_DIR})

target_link_libraries(010 common)
