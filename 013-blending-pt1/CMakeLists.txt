add_executable(
  013
  013-blending-pt1.cpp
  HUD013.h
  HUD013.cpp
  main_windows.cpp
)

target_include_directories(013 PUBLIC ${GLAD_INCLUDE_DIR})

target_link_libraries(013 common)
