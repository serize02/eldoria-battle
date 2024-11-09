cmake_minimum_required(VERSION 3.29)
project(eldoria_game)

set(CMAKE_CXX_STANDARD 20)

add_executable(eldoria_game main.cpp
        Character.cpp
        Character.h
        Warrior.cpp
        Warrior.h
        SoulItem.cpp
        SoulItem.h
        LifeEmber.cpp
        LifeEmber.h
        SpiritDrop.cpp
        SpiritDrop.h
        Skill.cpp
        Skill.h)
