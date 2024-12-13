cmake_minimum_required(VERSION 3.15)
project(hello-world VERSION 1.0.2)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Указываем, что будем генерировать файл с версией
configure_file(
    ${CMAKE_CURRENT_SOURCE_DIR}/version.h.in
    ${CMAKE_CURRENT_BINARY_DIR}/version.h
)

# Создаем исполняемый файл из main.cpp
add_executable(hello src/main.cpp)
target_include_directories(hello PRIVATE ${CMAKE_CURRENT_BINARY_DIR})  # Убедитесь, что бинарный каталог включен