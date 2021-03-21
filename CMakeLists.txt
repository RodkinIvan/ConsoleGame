cmake_minimum_required(VERSION 3.17)
project(ConsoleGame)

set(CMAKE_CXX_STANDARD 20)

add_executable(ConsoleGame  main.cpp
                            Unit.h
                            Unit.cpp
                            Enemy.h
                            Enemy.cpp
                            Protagonist.h
                            Protagonist.cpp
                            Pyromancer.h
                            Pyromancer.cpp
                            Imp.cpp
                            Imp.h
                            DarkMage.h
                            DarkMage.cpp
                            EnemyFactory.h
                            EnemyFactory.cpp
                            ImpFactory.h
                            ImpFactory.cpp)