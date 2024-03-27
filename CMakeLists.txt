cmake_minimum_required(VERSION 3.27)
project(pro_hc_em)

set(CMAKE_CXX_STANDARD 17)

find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)

add_executable(pro_hc_em main.cpp
        ui/MainMenu.cpp
        ui/MainMenu.h
        ui/triangle.cpp
        ui/triangle.h
        core/polygon.h
        core/polygon.cpp)

target_link_libraries(pro_hc_em sfml-graphics sfml-audio)
