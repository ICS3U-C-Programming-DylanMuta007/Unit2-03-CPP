// Copyright (c) 2025 Dylan Mutabazi All rights reserved
//
// Created by Dylan Mutabazi
// Created Feb 2025
// This program calculates the cost of a pizza

#include <iomanip>
#include <iostream>

int main() {
    // Creates variables and constant HST, pizza_diameter, and pizza_amount
    const float HST = 0.13;
    int pizza_amount;
    int pizza_diameter;

    //asks user to assign value to variable pizza_diameter & pizza_amount
    std::cout << "How many pizzas are you getting? ";
    std::cin >> pizza_amount;

    std::cout << "What is the diameter of your pizza? ";
    std::cin >> pizza_diameter;

    //Calculates subtotal, tax, and total of your pizza
    float labour_cost = (2.00) * pizza_amount;
    float rental_cost = (2.25) * pizza_amount;
    float subtotal = (labour_cost + rental_cost + pizza_diameter * 1.5);
    float tax = subtotal * HST;
    float total = subtotal + tax;

    // displays results 
    std::cout << "Your total rounds up to: $" << std::setprecision(4) << total;
    std::cout << "" << std::endl;
}
