// Copyright (c) 2022 Lucas DeBruyn All rights reserved

// Created by: Lucas DeBruyn
// Created on: December 2022
// This program finds the average of 10 random numbers

#include <iostream>
#include <random>

int main() {
    // This function finds the average of 10 random numbers
    int listOfNumbers[10];
    int randomNumber;
    float average = 0;

    std::random_device rseed;
    std::mt19937 rgen(rseed());
    std::uniform_int_distribution<int> idist(0, 100);

    for (int counter = 0; counter < 10; counter++) {
        randomNumber = idist(rgen);
        listOfNumbers[counter] = randomNumber;
        average = average + randomNumber;
        std::cout << "The random number is: " << randomNumber << std::endl;
    }

    average = average / (sizeof(listOfNumbers) / sizeof(listOfNumbers[0]));

    std::cout << "\nThe average is " << average << std::endl;
    std::cout << "\nDone." << std::endl;
}
