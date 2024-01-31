cmake_minimum_required(VERSION 3.22.1)

project(Lab2)

set(CMAKE_CXX_STANDARD 23)


file(GLOB_RECURSE SOURCES "sources/*.tpp" "include/*.h")



add_executable(Main main.cpp ${SOURCES})

add_executable(VectorTest tests/VectorTest.cpp ${SOURCES})
target_link_libraries(VectorTest gtest gtest_main)

add_executable(LinkedListTest tests/LinkedListTest.cpp ${SOURCES})
target_link_libraries(LinkedListTest gtest gtest_main)

add_executable(ShellTest tests/ShellTest.cpp ${SOURCES})
target_link_libraries(ShellTest gtest gtest_main)

add_executable(PyramidicTest tests/PyramidicTest.cpp ${SOURCES})
target_link_libraries(PyramidicTest gtest gtest_main)
