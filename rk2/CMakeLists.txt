# Минимальная версия CMake
cmake_minimum_required(VERSION 3.10)

# Название проекта и версия
project(rk2 VERSION 1.0)

# Использование C++11
set(CMAKE_CXX_STANDARD 11)

# Создаем статическую библиотеку из наших классов
add_library(rk2_lib STATIC
    src/database.cpp
    src/proxy.cpp
)

# Создаем исполняемый файл из main.cpp
add_executable(rk2_main src/main.cpp)

# Связываем исполняемый файл с нашей библиотекой
target_link_libraries(rk2_main rk2_lib)

# Подключаем папку с тестами
add_subdirectory(tests)
