#include <iostream>
#include <memory>

#include "Date.h"

int main() {
    auto myDate = std::make_unique<Date>(2004, "March", 13);
    auto yourDate = std::make_unique<Date>(2004, "March", 13);
    // Pass reference
    if (myDate->equal(*myDate)) {
        std::cout << "Coincide";
    }
    return 0;
}
