cmake_minimum_required(VERSION 3.0.0)
project(example VERSION 0.1.0)

include(CTest)
enable_testing()

set (CMAKE_CXX_STANDARD 17)


add_executable(main main.cpp src/sort/merge_sort.cpp src/sort/heap_sort src/sort/quick_sort.cpp src/sort/buble_sort.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include_directories("${CMAKE_SOURCE_DIR}/include")
add_subdirectory(src/sort)
include(CPack)
