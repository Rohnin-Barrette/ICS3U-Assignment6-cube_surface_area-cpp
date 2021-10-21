// Copyright (c) 2020 Rohnin Barrette All rights reserved.
//
// Created by: Rohnin Barrette
// Created on: oct 2021
// this program calculates the surface area of a cube

#include <iostream>

float CubeSurfaceArea(float user_input_length) {
    // this funcion calculates the surface area of a cube
    float cube_sa;


    // process
    cube_sa = (6 * (user_input_length * user_input_length));

    return cube_sa;
}

int main() {
    // this function gets user_input_length

    // input
    std::string user_input_length_string;
    float user_input_length;
    float surface_area_cube_value;

    std::cout << "Enter the length of the cube (cm): ";
    std::cin >> user_input_length_string;

    try {
        user_input_length = stof(user_input_length_string);
        // call function
        surface_area_cube_value = CubeSurfaceArea(user_input_length);
        if (user_input_length < 0) {
            std::cout << "\nPlease enter a positive number." << std::endl;
        } else {
            std::cout << "\nThe surface area of the cube would be "
                << surface_area_cube_value << " cm²" << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "\n" << user_input_length_string
            << " is an invalid Input" << std::endl;
    }

    std::cout << "\nDone." << std::endl;
}
