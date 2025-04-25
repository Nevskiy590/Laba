cmake_minimum_required(VERSION 3.10)
project(OPN_PROJECT)

# Укажите правильный путь к исходникам
add_executable(main 
    src/main.cpp  # Или другой путь к вашему основному файлу
)

# Для Visual Studio явно укажите стандарт C++
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)