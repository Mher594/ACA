#include <iostream>

#include "sum_integers.h"

int main() {
    std::vector<int> integers = { 1, 2, 3, 4, 5 };

    if (sum_integers(integers) == 15) 
    {
        std::cout << "Correct result!";
    } 
    else 
    {
        std::cout << "Incorrect result!";
    }

    return 0;
}