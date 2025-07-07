cmake_minimum_required(VERSION 3.10)
project(AnimalProject LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(${PROJECT_NAME}
    Headers/Animal.h
    Headers/Bird.h
    Headers/Fish.h
    Headers/IPrintable.h
    Classes/Animal.cpp
    Classes/Bird.cpp
    Classes/Fish.cpp
    Classes/IPrintable.cpp
    main.cpp
)

target_include_directories(${PROJECT_NAME} PRIVATE Headers)