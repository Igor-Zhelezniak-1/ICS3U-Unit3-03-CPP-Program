/// Copyright (c) 2021 Igor All rights reserved
//
// Created by: Igor
// Created on: Nov 2021
/// This program is game

#include <iostream>
#include <random>

int main() {
    int randomNumber;
    int number;

    std::random_device rseed;
    std::mt19937 rgen(rseed());  // mersenne_twister
    std::uniform_int_distribution<int> idist(0, 9);  // [0,9]
    randomNumber = idist(rgen);

    // input
    std::cout << "Enter the number between 0-9: ";
    std::cin >> number;

    // process
    if (number == randomNumber) {
        // output
        std::cout << "You guessed correct!" << std::endl;
    }
    if (number != randomNumber) {
        // output
        std::cout << "You guessed wrong! The number was "
        << randomNumber << std::endl;
    }

    std::cout << "" << std::endl;
    std::cout << "Done." << std::endl;
}
