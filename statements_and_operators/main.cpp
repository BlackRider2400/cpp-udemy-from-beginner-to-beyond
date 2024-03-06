#include <iostream>

int main(){

    int cents {0};

    std::cout << "Enter amount of cents: ";
    std::cin >> cents;

    std::cout << "dollars: " << cents / 100 << std::endl;
    cents -= cents / 100 * 100;
    std::cout << "quarter: " << cents / 25 << std::endl;
    cents -= cents / 25 * 25;
    std::cout << "dimes: " << cents / 10 << std::endl;
    cents -= cents / 10 * 10;
    std::cout << "nickels: " << cents / 5 << std::endl;
    cents -= cents / 5 * 5;
    std::cout << "pennies: " << cents << std::endl;

    return 0;
}