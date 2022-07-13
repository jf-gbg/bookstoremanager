#include <iostream>

int main() {
    std::cout << "Enter numbers seperated by a space. "
                 "Enter 'd' when finished" << std::endl;
    int sum{ 0 };

    for(int value = 0; std::cin >> value;)
        sum += value;

    std::cout << "Sum is: " << sum;
    return 0;
}
