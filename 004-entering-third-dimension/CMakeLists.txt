add_executable(
  004
  004-entering-third-dimension.cpp
  main_windows.cpp
)

target_include_directories(004 PUBLIC ${GLAD_INCLUDE_DIR})

target_link_libraries(004 common)
