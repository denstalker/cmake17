# Задать третью минимальную версию CMake:
cmake_minimum_required(VERSION 3.0)

# Задать характеристики проекта "MyProject":
project(First VERSION 1.0.0 LANGUAGES C CXX)


#######################################################
########## Настройки для работы с Qt ##################

## Tell CMake to run moc when necessary:
#set(CMAKE_AUTOMOC ON)
## As moc files are generated in the binary dir, tell CMake
## to always look for includes there:
#set(CMAKE_INCLUDE_CURRENT_DIR ON)

## включаем поиск библиотек с использованием find_package()
## через REQUIRED указываем, что библиотеки обязательны
#find_package(Qt5Core REQUIRED)
#find_package(Qt5Gui REQUIRED)
#find_package(Qt5Widgets REQUIRED)


### The Qt5Widgets_LIBRARIES variable also includes QtGui and QtCore
#target_link_libraries(First Qt5::Core)
#target_link_libraries(First Qt5::Gui)
#target_link_libraries(First Qt5::Widgets)


#ПРОПИСАТЬ В CMAKE_PROPFIX_PATH путь к библиотеке Qt
#/home/denis/Qt/5.12.3/gcc_64/lib/cmake

########################################################3

#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Werror")

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra")

# Скомпилировать исполняемый файл "MyExecutable" из
# исходников "ObjectHandler.c", "TimeManager.c" и "MessageGenerator.c":
add_executable(First)

# Скомпилировать статическую библиотеку "MyLibrary" из
# исходников "ObjectHandler.c", "TimeManager.c" и "MessageConsumer.c":
#add_library(TextView STATIC )

# Добавить к цели "MyExecutable" исходник "MessageConsumer.c":
target_sources(First PUBLIC
    src/main.cpp
    src/navigator.cpp
    src/concretestrategya.cpp
    src/concretestrategyb.cpp
    src/concretestrategyc.cpp
    )

#target_sources(TextView PUBLIC
#    src/textview.cpp
#    )


target_include_directories(First PUBLIC include)      # папка с включаемыми .h
#target_include_directories(TextView PUBLIC include)      # папка с включаемыми .h





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
