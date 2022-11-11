//
// Created by kneiv on 11.11.2022.
//

#include "../h/MainMenu.h"
#include <iostream>

MainMenu::MainMenu() = default;

void MainMenu::run() {
    isRunning = true;
    while (isRunning) {

        std::cout << startingText;
        std::cin >> userInput;

        if (userInput.length() != 1) {
            std::cerr << "Wrong option. Please try again \n";
            userInput = "";

        } else if (userInput.at(0) == 'q') {
            std::cout << "Quitting... \n";
            isRunning = false;
        }
    }
}
