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
//Write a program that can add up the total number of transactions for several sales items.
int main() {
    Sales_item transaction;
    Sales_item result;

    std::cin >> result;

    while(std::cin >> transaction) {
        if (transaction.isbn() == result.isbn()) {
            result += transaction;
        } else {
            std::cout << result << std::endl;
            result = transaction;
        }
    }
    std::cout << result << std::endl;

    return 0;
}
