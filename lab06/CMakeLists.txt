cmake_minimum_required(VERSION 3.10)
project(Lab06 VERSION 0.1.0)

# Основные настройки проекта
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Включение CPack
include(CPackConfig.cmake)

# Если есть подпроект projects/lab06
if(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/projects/lab06/CMakeLists.txt")
    add_subdirectory(projects/lab06)
endif()

# Основные цели проекта (добавьте свои файлы)
add_executable(main_program 
    # Ваши исходные файлы
)

# Установка (для пакетирования)
install(TARGETS main_program DESTINATION bin)
