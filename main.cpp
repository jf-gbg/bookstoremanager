#include <iostream>
#include "Sales_item.h"
// Write a program that reads several transactions and counts
//how many transactions occur for each ISBN

//Provide a list of transactions to the program. As each transaction comes in, the program should check
//to see if a previous transaction exists with the same ISBN. To do this each transaction should be stored
//in memory.

//Write a program that adds up the total number of transactions for 1 sales item from a list
// of transactions. DONE
//Write a program that adds up the total number of transactions for 2 sales items from a list
// of transactions. - Limitations: result must be initialized if it is to show ISBN.DONE but fragile.
//Write a program that can add up the total number of transactions for several sales items. Assuming
// each item is grouped together we can use the same total counter and just update it to represent
// a different item before writing to the console.
int main() {
    Sales_item total;

    if (std::cin >> total) {
        Sales_item trans;
        while (std::cin >> trans) {
            if (total.isbn() == trans.isbn())
                total += trans;
            else {
                std::cout << total << std::endl;
                total = trans;
            }
        }
        std::cout << total << std::endl;
    } else {
        std::cerr << "No data?!" << std::endl;
        return -1;
    }

    return 0;
}
