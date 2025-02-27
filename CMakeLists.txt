cmake_minimum_required(VERSION 3.15)
project(mypkg CXX)

add_executable(${PROJECT_NAME} src/main.cpp)

find_package(Qt5)

target_link_libraries(${PROJECT_NAME} Qt5::Widgets Qt5::Gui Qt5::Core)

target_compile_options(${PROJECT_NAME} PRIVATE "/utf-8")

