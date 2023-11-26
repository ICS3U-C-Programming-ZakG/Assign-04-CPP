// Copyright (c) 2023 Zak Goneau All rights reserved.
//
// Created by: Zak Goneau
// Date Created: Nov. 24, 2023
// This program finds the lowest common multiple of two numbers.

#include <iostream>
#include <string>

int main() {
    // introduce program to user
    std::cout << "Hello, this program takes two positive integers ";
    std::cout << "and will find the lowest common multiple";
    std::cout << "and display the result.\n ";

        // declare variables
        std::string userNumOneStr,
        userNumTwoStr;
    int userNumOneInt, userNumTwoInt, higher, value;
    float userNumOneFloat, userNumTwoFloat;

    // get user input for both numbers
    std::cout << "Please enter a positive integer: ";
    std::cin >> userNumOneStr;
    std::cout << "Please enter another positive integer: ";
    std::cin >> userNumTwoStr;

    // try converting the first input to an integer
    try {
        userNumOneInt = std::stoi(userNumOneStr);

        // try converting first input to a float
        userNumOneFloat = std::stof(userNumOneStr);

        // try converting the second input to an integer
        try {
            userNumTwoInt = std::stoi(userNumTwoStr);

            // try converting second string input to a float
            userNumTwoFloat = std::stof(userNumTwoStr);

            // check if either input is a decimal
            if (userNumOneInt != userNumOneFloat || userNumTwoInt != userNumTwoFloat) {

                // tell user they cannot enter a decimal
                std::cout << "You must input two positive integers.\n";

            // check if any inputs are negative or is zero
            } else if (userNumOneInt > 0 && userNumTwoInt > 0) {

                // check if first input is bigger than second
                if (userNumOneInt > userNumTwoInt) {

                    // assign first inputs value to the variable "higher"
                    higher = userNumOneInt;

                    // assign value of higher to variable value
                    value = higher;

                    // assign second inputs value to the variable "higher"
                } else {
                    higher = userNumTwoInt;

                    // assign value of higher to variable value
                    value = higher;

                // do while loop
                } do {

                    // check if higher mod both inputs equals zero
                    if (higher % userNumOneInt == 0 && higher % userNumTwoInt == 0) {

                        // display lowest common multiple
                        std::cout << "The lowest common multiple of ";
                        std::cout << userNumOneInt << " and " << userNumTwoInt;
                        std::cout << " is " << higher << std::endl;

                        // break out of the loop
                        break;

                    // increase value of higher with higher plus value
                    } else {
                        higher = higher + value;
                    }

                    // loop as long as higher mod both inputs is not zero
                } while (higher % userNumOneInt != 0 && higher % userNumTwoInt != 0 || higher % userNumOneInt == 0 && higher % userNumTwoInt == 0);

                // tell user no negatives
            } else {
                std::cout << "You must use two positive integers.\n";
            }

        // catch invalid inputs for input two
        } catch (std::invalid_argument) {
            std::cout << "" << userNumTwoStr;
            std::cout << " is not a positive integer.\n";
        }

    // catch invalid inputs for input one
    } catch (std::invalid_argument) {
        std::cout << "" << userNumOneStr << " is not a positive integer.\n";
    }
}
