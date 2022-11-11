//
// Created by kneiv on 11.11.2022.
//

#ifndef STOCK_MARKET_APP_MAINMENU_H
#define STOCK_MARKET_APP_MAINMENU_H


#include <string>

class MainMenu {

private:
    bool isRunning = false;
    std::string startingText = "Welcome to the stock market app! \n"
                               "Please proceed to select one of the following options to get an overview of the current stock market situation. \n";
    std::string userInput;

public:
    [[noreturn]] void run();
    MainMenu();
};


#endif//STOCK_MARKET_APP_MAINMENU_H
