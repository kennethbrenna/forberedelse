cmake_minimum_required(VERSION 3.15)
project(forberedelse)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")


include(FetchContent)
FetchContent_Declare(
        Catch2
        GIT_REPOSITORY https://github.com/catchorg/Catch2.git
        GIT_TAG v2.13.8
)

FetchContent_MakeAvailable(Catch2)

enable_testing()

add_subdirectory(src)
add_subdirectory(tests)

add_executable(my_app main.cpp src/Bus.cpp src/Car.cpp src/MotorCycle.cpp)