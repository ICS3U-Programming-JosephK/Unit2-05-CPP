// Copyright (c) 2022 IHS All rights reserved.
//
// Created by: Joseph Kwon
// Created on: Sep 2022
// This program is the previous python program translated into c++.

#include <iostream>

// global variable
// a global variable if needed will be declared here

int main() {
    // this shows what happens with local variables
    int numberOfStudents = 2;
    int width = 32.5;
    int length = 10;
    std::string someWords1 = "Hello";
    std::string someWords2 = "World!";

    // using assignment statements
    int numberOfTheStudents = numberOfStudents + 5;
    int areaOfRectangle = length * width;
    std::string helloWorld = someWords1 + ", " + someWords2;

    // output
    // need to have the line of code cut short here due to cpplint!
    std::cout << "The number of student is: " << numberOfTheStudents
    << std::endl;
    std::cout << "The area of a rectangle is: " << areaOfRectangle << std::endl;
    std::cout << helloWorld << std::endl;

    std::cout << "\nDone." << std::endl;
}
