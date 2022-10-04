// Copyright (c) 2021 Patrice Pat-Odita All rights reserved.
//
// Created by: Patrice Pat-Odita
// Created on: Oct 1, 2022
// This program asks the user for the unit, length, height and
// width of a cube. It then
// calculates and displays the surface area and
// volume.
#include <cmath>
#include <iomanip>
#include <iostream>

int main() {
    // declare variables
    float length, width, height, surfaceArea, volume;

    // get input from user
    std::cout << "Today we will calculate the surface area and\n";
    std::cout << "volume of a cube.\n";
    std::string units;
    std::cout << "\033[1;35;34mEnter the units: ";
    std::cin >> units;
    std::cout << "\033[1;35;36mEnter the length: ";
    std::cin >> length;
    std::cout << "\033[1;35;35mEnter the width: ";
    std::cin >> width;
    std::cout << "\033[1;35;38mEnter the height: ";
    std::cin >> height;

    // process
    surfaceArea = (6 * (pow(length, 2)));
    volume = (length * width * height);

    // display the results to the user
    std::cout << std::endl;
    std::cout << "\033[1;32;35mSurface Area = " << std::fixed;
    std::cout << std::setprecision(2) << surfaceArea << units << " ^2.\n";
    std::cout << "\033[1;32;38mVolume = " << std::fixed;
    std::cout << std::setprecision(2) << volume << units << "^3.\n";
}
