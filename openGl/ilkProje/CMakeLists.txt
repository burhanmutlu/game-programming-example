cmake_minimum_required(VERSION 3.0)

project(OpenGLilkProje)

set(PROJECT_DIR ${CMAKE_SOURCE_DIR})

set(PROJECT_INCLUDE_DIR ${PROJECT_DIR}/include)

set(PROJECT_SOURCE_DIR ${PROJECT_DIR}/src)

set ( PROJECT_SOURCES
            ${PROJECT_SOURCE_DIR}/main.cpp 
            ${PROJECT_SOURCE_DIR}/glad.c
            ${PROJECT_SOURCE_DIR}/shaderprogram.cpp 
)

  set (PROJECT_HEADERS 
              ${PROJECT_INCLUDE_DIR}/shaderprogram.hpp
  )

if (WIN32)
    set(glfw3_DIR ${PROJECT_DIR}/../../Dependencies/GLFW/lib/cmake/glfw3)
    set(GLM_INCLUDE_DIR ${PROJECT_DIR}/../../Dependencies)
    include_directories(${PROJECT_INCLUDE_DIR} ${GLM_INCLUDE_DIR})
endif (WIN32)

if (UNIX)
    find_package(glm REQUIRED)
    include_directories(${PROJECT_INCLUDE_DIR})
endif (UNIX)

find_package(glfw3 3.2 REQUIRED)

add_executable(${PROJECT_NAME} ${PROJECT_SOURCES})

target_link_libraries(${PROJECT_NAME} glfw)