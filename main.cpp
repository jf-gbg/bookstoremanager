#include <iostream>

int main() {
    std::cout << "Please enter two integers." << std::endl;

    int num1 { 0 };
    int num2 { 0 };
    std::cin >> num1 >> num2;

    int printNum { num1 };
    while(printNum <= num2) {
        std::cout << printNum << std::endl;
        ++printNum;
    }
    //std::cout << "Sum of 50 to 100 inclusive is " << sum << std::endl;
    return 0;
}
