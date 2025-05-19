cmake_minimum_required(VERSION 3.10)
project(rk2 VERSION 1.0 LANGUAGES CXX)

# Настройки компилятора
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Включаем систему тестирования (ОБЯЗАТЕЛЬНО перед add_subdirectory(tests))
enable_testing()

# Поиск GoogleTest
find_package(GTest REQUIRED)
include(GoogleTest)

# Главная библиотека
add_library(rk2_lib STATIC
    src/database.cpp
    src/proxy.cpp
)

# Основной исполняемый файл
add_executable(rk2_main src/main.cpp)
target_link_libraries(rk2_main rk2_lib)

# Подключаем тесты
add_subdirectory(tests)

# Для Debug-сборки добавляем отладочную информацию
if(CMAKE_BUILD_TYPE STREQUAL "Debug")
    add_compile_options(-g -O0)
endif()
