#include "sum_integers.h"

int sum_integers(const std::vector<int>& integers) {
    auto sum = 0;

    for (const auto& i : integers) {
        sum += i;
    }

    return sum;
}