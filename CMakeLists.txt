cmake_minimum_required(VERSION 3.22)
project(stock_market_app)

set(CMAKE_CXX_STANDARD 23)

add_executable(stock_market_app main.cpp src/GLOBALS.h src/cpp/MainMenu.cpp src/h/MainMenu.h)
