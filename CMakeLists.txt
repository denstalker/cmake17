# Задать третью минимальную версию CMake:
cmake_minimum_required(VERSION 3.0)

# Задать характеристики проекта "MyProject":
project(First VERSION 1.0.0 LANGUAGES C CXX)


set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Werror")

# Скомпилировать исполняемый файл "MyExecutable" из
# исходников "ObjectHandler.c", "TimeManager.c" и "MessageGenerator.c":
add_executable(First)

# Добавить к цели "MyExecutable" исходник "MessageConsumer.c":
target_sources(First PUBLIC
    src/main.cpp
    src/widget.cpp)


target_include_directories(First PUBLIC include)      # папка с включаемыми .h


# Установить свойству 'C_STANDARD' значение "17",
# а свойству 'C_STANDARD_REQUIRED' значение "ON":
set_target_properties(First PROPERTIES CXX_STANDARD 17 C_STANDARD_REQUIRED ON)


# Выведет "The target was defined!" если цель "MyTarget" уже определена,
# а иначе выведет "The target was not defined!":
if(TARGET First)
    message("ЦЕЛЬ First определена")
else()
    message("ЦЕЛЬ First НЕ определена!!! ----------------------")
endif()


# Присвоить переменной "VALUE" значение свойства "C_STANDARD":
get_target_property(VALUE First CXX_STANDARD)

# Вывести значение полученного свойства на экран:
message("'CXX_STANDARD' свойство установлено в  [${VALUE}]")
