#!/bin/bash

g++ -c state/State.cpp
g++ -c state/DefaultState.cpp
g++ -c state/RifleMan.cpp
g++ -c weapon/Weapon.cpp
g++ -c weapon/Gun.cpp
g++ -c weapon/Rifle.cpp
g++ -c Avatar.cpp
g++ main.cpp *.o
