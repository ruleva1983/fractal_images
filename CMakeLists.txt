project(drawing_fractal_images)

cmake_minimum_required (VERSION 3.5)

add_definitions(-std=c++11)

set(CXX_FLAGS "-Wall")
set(CMAKE_CXX_FLAGS, "${CXX_FLAGS}")

set(sources main.cpp
	src/Bitmap.cpp)

include_directories(include)

add_executable(DrawImages ${sources})




#option (BUILD_TESTS "Enable to build tests" ON)
#option (BUILD_EXAMPLES "Enable to build examples" ON)
#find_package ( Boost )
#include_directories ( SYSTEM ${Boost_INCLUDE_DIRS} )
#include_directories(third-party)

#if(BUILD_TESTS)
#    add_subdirectory(third-party/googletest-release-1.8.1)
#    add_subdirectory(tests)
#endif()

#    add_subdirectory(examples)
