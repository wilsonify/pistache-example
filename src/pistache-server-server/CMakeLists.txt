cmake_minimum_required (VERSION 3.2)
project(api-server)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -pg -g3" )

include_directories(external/include)
link_directories(external/lib)

include_directories(model)
include_directories(api)
include_directories(impl)

file(GLOB SRCS
    ${CMAKE_CURRENT_SOURCE_DIR}/api/*.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/impl/*.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/model/*.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp
)

add_executable(${PROJECT_NAME} ${SRCS} )
target_link_libraries(${PROJECT_NAME} pistache pthread nlohmann_json)
