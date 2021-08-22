cmake_minimum_required (VERSION 3.2)

project(api-server)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -pg -g3" )

include(ExternalProject)

set(EXTERNAL_INSTALL_LOCATION ${CMAKE_CURRENT_SOURCE_DIR}/external)

ExternalProject_Add(PISTACHE
    GIT_REPOSITORY https://github.com/oktal/pistache.git
    GIT_TAG 6b217cc0c4feb230cbe868334e268b360507f882
    CMAKE_ARGS -DCMAKE_INSTALL_PREFIX=${EXTERNAL_INSTALL_LOCATION}
)

ExternalProject_Add(NLOHMANN
    GIT_REPOSITORY https://github.com/nlohmann/json.git
    GIT_TAG 0b7471b0f75c365cc4b996b24d9e16b04a0d7ab3
    CMAKE_ARGS -DCMAKE_INSTALL_PREFIX=${EXTERNAL_INSTALL_LOCATION}

)
include_directories(${EXTERNAL_INSTALL_LOCATION}/include)
link_directories(${EXTERNAL_INSTALL_LOCATION}/lib)

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
add_dependencies(${PROJECT_NAME} PISTACHE NLOHMANN)
target_link_libraries(${PROJECT_NAME} pistache pthread)
