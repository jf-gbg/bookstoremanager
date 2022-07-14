#include <iostream>

int main() {
    std::cout << "Enter 2 numbers seperated by space." << std::endl;

    int userNum1 = 0;
    int userNum2 = 0;
    std::cin >> userNum1 >> userNum2;

    int least = 0;
    int greatest = 0;

    if(userNum1 < userNum2) {
        least = userNum1;
        greatest = userNum2;
    } else {
        least = userNum2;
        greatest = userNum1;
    }

    std::cout << "Sum of numbers between " << least << " to " << greatest << " inclusive is..." << std::endl;

    int sum = 0;
    while(least <= greatest) {
        sum += least;
        ++least;
    }

    std::cout << sum << std::endl;
    return 0;
}
