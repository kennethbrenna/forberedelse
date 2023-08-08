add_library(srcLib Bus.cpp Car.cpp MotorCycle.cpp)
target_include_directories(srcLib PUBLIC "${CMAKE_SOURCE_DIR}/include")