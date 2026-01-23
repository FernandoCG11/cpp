#include <iostream>

void calculateDate(int value, int& years, int& months, int& days) {
    years += value / 365;
    value %= 365;
    months += value / 30;
    value %= 30;
    days += value;
}

void printValues(int& years, int& months, int& days) {
    std::cout << years << "/" << months << "/" << days;
}

int main() {
    int years = 2000, months = 1, days = 1, n = 0;
    std::cout << "Enter n value: ";
    std::cin >> n;
    calculateDate(n, years, months,days);
    printValues(years, months,days);
    return 0;
}