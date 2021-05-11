// Copyright (c) 2021 Jenoe Balote All Rights Reserved
//
// Created by: Jenoe Balote
// Created on: May 2021
// This program determines if you can date my grandchild

#include <iostream>
#include <string>

main() {
    // this function runs the grandchild dating program
    std::string stringRich;
    std::string stringAttractive;
    int numRich;
    int numAttractive;

    // input
    std::cout << "Can you date my grandchild?" << std::endl;
    std::cout << "Respond with 1 for yes and 2 for no:" << std::endl;
    std::cout << "Are you rich? ";
    std::cin >> stringRich;
    std::cout << "Are you good looking? ";
    std::cin >> stringAttractive;
    std::cout << "" << std::endl;

    // process
    try {
        numRich = std::stoi(stringRich);
        numAttractive = std::stoi(stringAttractive);
        if (numRich == 1 || numAttractive == 1) {
        // output
            std::cout << "Congrats! You may date my grandchild" << std::endl;
        } else if (numRich == 2 || numAttractive == 2) {
        // output
            std::cout << "Stay away from my grandchild!" << std::endl;
        }
    }
    catch (std::invalid_argument) {
    // output
        std::cout << "\n" << stringRich
        << " is invalid data." << std::endl;
    }
    std::cout << "Thanks for answering truthfully!"<< std::endl;
}
