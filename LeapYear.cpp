#include <iostream>


int main() {
    int year;
    std::cout << "Enter year: ";
    std::cin >> year;
    
    if (year % 400 == 0) {
    std::cout << year << " is a leap year.";
    } 
    else if (year % 100 ==0) {
    std::cout << year << " is a commom year.";
    }
    else if (year % 100 > 0 && year % 4 == 0) {
    std::cout << year << " is a leap year.";
    }
    else{
    std::cout << year << " is a commom year.";   
    }
}
