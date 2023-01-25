//
//  main.cpp
//  Feet and Meters Converter
//
//  Created by Diego Galván Magallón on 10/19/22.
//

#include <iostream>
#include "Galvan.hpp"

void conversionsMenu();

int main(int argc, const char * argv[]) {
    using namespace galvan;
    
    double meters;
    double feet;
    char conversion;
    char answer;
    
    std::cout << "Feet and Meters Converter\n";
    
    bool flag = false;
    while (flag == false) {
        //Display possible conversions
        conversionsMenu();
        //Ask for input
        std::cout << "Select a conversion (a/b): ";
        std::cin >> conversion;
        //While loop makes sure user inputs the right answer
        while (tolower(conversion) != 'a' && tolower(conversion) != 'b') {
            std::cout << "Please enter a valid answer (a/b): ";
            std::cin >> conversion;
        }
        
        //Choose what to do in both different options
        if (tolower(conversion) == 'a') {
            std::cout << "\nEnter feet: ";
            std::cin >> feet;
            //Assign the result of the conversion to the variable by calling the function
            meters = galvan::feetToMeters(feet);
            std::cout << meters << " meters" << std::endl;
        }
        if (tolower(conversion) == 'b') {
            std::cout << "\nEnter meters: ";
            std::cin >> meters;
            //Assign the result of the conversion to the variable by calling the function
            feet = galvan::metersToFeet(meters);
            std::cout << feet << " feet" << std::endl;
        }
        
        //Ask user if they want to keep converting
        std::cout << "\nContinue? (y/n): ";
        std::cin >> answer;
        while (tolower(answer) != 'y' && tolower(answer) != 'n') {
            std::cout << "Please enter a valid answer (y/n): ";
            std::cin >> answer;
        }
        //Break while loop
        if (answer == 'n') {
            flag = true;
        }
    }
    
    std::cout << "\nThanks, bye!" << std::endl;
    
    return 0;
}

void conversionsMenu() {
    std::cout << "\nConversions Menu:" << std::endl;
    std::cout << "a.\tFeet to Meters" << std::endl;
    std::cout << "b.\tMeters to Feet" << std::endl;
}
