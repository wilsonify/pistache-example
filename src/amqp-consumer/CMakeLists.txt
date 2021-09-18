cmake_minimum_required (VERSION 3.2)

project(amqp-consumer)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -pg -g3" )

include(ExternalProject)

set(EXTERNAL_INSTALL_LOCATION ${CMAKE_CURRENT_SOURCE_DIR}/external)

include_directories(${EXTERNAL_INSTALL_LOCATION})
link_directories(${EXTERNAL_INSTALL_LOCATION})

file(GLOB SRCS
    ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp
)

add_executable(${PROJECT_NAME} consumer.cpp )
target_link_libraries(${PROJECT_NAME} amqpcpp)
