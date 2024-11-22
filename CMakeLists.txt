cmake_minimum_required(VERSION 3.10)
project(AreaUnderCurve)

# Опции для выбора типа библиотеки
option(BUILD_SHARED_LIBS "Build shared libraries" OFF)

# Добавление библиотеки
add_library(AreaCalculator ${CMAKE_SOURCE_DIR}/src/AreaCalculator.cpp)

# Добавление исполняемой программы
add_executable(AreaCalculatorApp ${CMAKE_SOURCE_DIR}/src/main.cpp)

# Связывание библиотеки с исполняемым файлом
target_link_libraries(AreaCalculatorApp PRIVATE AreaCalculator)

# Указание стандартов C++
set_target_properties(AreaCalculator PROPERTIES CXX_STANDARD 11)
set_target_properties(AreaCalculatorApp PROPERTIES CXX_STANDARD 11)
