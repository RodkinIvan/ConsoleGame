cmake_minimum_required(VERSION 3.17)
project(ConsoleGame)

set(CMAKE_CXX_STANDARD 20)

add_executable(ConsoleGame
        main.cpp
        Units/Unit.h
        Units/Unit.cpp
        Units/Enemies/Enemy.h
        Units/Enemies/Enemy.cpp
        Units/Heroes/Protagonist.h
        Units/Heroes/Protagonist.cpp
        Units/Heroes/Pyromancer.h
        Units/Heroes/Pyromancer.cpp
        Units/Enemies/Imp.cpp
        Units/Enemies/Imp.h
        Units/Heroes/DarkMage.h
        Units/Heroes/DarkMage.cpp
        Factories/EnemyFactory.h
        Factories/EnemyFactory.cpp
        Factories/ImpFactory.h
        Factories/ImpFactory.cpp
        MainHeader.h Units/UnitsHeader.h Factories/FactoriesHeader.h Units/Enemies/EnemiesHeader.h Units/Heroes/HeroesHeader.h)
