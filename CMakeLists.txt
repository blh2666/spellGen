cmake_minimum_required(VERSION 3.10)
project(spellGen)

set(CMAKE_CXX_STANDARD 11)

add_executable(spellGen main.cpp spell.cpp spell.h preference.cpp preference.h preferences/elementpreference.cpp preferences/elementpreference.h preferences/rolepreference.cpp preferences/rolepreference.h preferences/schoolpreference.cpp preferences/schoolpreference.h preferences/powerpreference.cpp preferences/powerpreference.h preferences/evilpreference.cpp preferences/evilpreference.h)