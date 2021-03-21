cmake_minimum_required(VERSION 3.17)
project(ConsoleGame)

set(CMAKE_CXX_STANDARD 20)

add_executable(ConsoleGame
        main.cpp
        Units/Unit.h
        Units/Unit.cpp
        Units/Enemy.h
        Units/Enemy.cpp
        Units/Protagonist.h
        Units/Protagonist.cpp
        Units/Pyromancer.h
        Units/Pyromancer.cpp
        Units/Imp.cpp
        Units/Imp.h
        Units/DarkMage.h
        Units/DarkMage.cpp
        Factories/EnemyFactory.h
        Factories/EnemyFactory.cpp
        Factories/ImpFactory.h
        Factories/ImpFactory.cpp)
