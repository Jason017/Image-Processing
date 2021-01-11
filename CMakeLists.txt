cmake_minimum_required(VERSION 3.17)
project(image_process)

set(CMAKE_CXX_STANDARD 14)
find_package(OpenCV 4.3 REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})
add_executable(_ch1 main.cpp)
target_link_libraries(_ch1 ${OpenCV_LIBS})