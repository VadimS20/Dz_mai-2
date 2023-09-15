add_executable (task_2 "task_2.cpp" )

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET task_2 PROPERTY CXX_STANDARD 20)
endif()
