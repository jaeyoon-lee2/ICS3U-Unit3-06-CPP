// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Mr. Coxall
// Created on: Sep 2019
// This program uses a try statement

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

main() {
    // this function uses a try statement
    std::string integerAsString;
    int integerAsNumber;
    int some_variable;

    // input
    std::cout << "Enter a number (1~10): ";
    std::cin >> integerAsString;

    // process & output
    try {
        integerAsNumber = std::stoi(integerAsString);
        srand((unsigned int)time(NULL));
        some_variable = rand() % 10 + 1;
        if (integerAsNumber == some_variable) {
            std::cout << "It is correct!" << std::endl;
        } else {
        std::cout << "It is wrong" << std::endl;
        std::cout << "The number is " << some_variable << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "That was not a valid integer";
    }
}