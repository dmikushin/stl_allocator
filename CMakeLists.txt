cmake_minimum_required(VERSION 3.10)

project(stl_allocator VERSION 1.0 LANGUAGES CXX)

file(GLOB SRCS "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp")
add_library(${PROJECT_NAME} STATIC ${SRCS})
target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

add_executable(test_${PROJECT_NAME} ${CMAKE_CURRENT_SOURCE_DIR}/test/test_${PROJECT_NAME}.cpp)
target_link_libraries(test_${PROJECT_NAME} ${PROJECT_NAME})

