cmake_minimum_required(VERSION 3.5)

project(Aufgabenzettel3 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Aufgabenzettel3 main.cpp
    gameentity.cpp
    staticgameentity.cpp
    dynamicgameentity.cpp
    rock.cpp
    tree.cpp
    enemy.cpp
    player.cpp
    evilrock.cpp
    game.cpp
    )
