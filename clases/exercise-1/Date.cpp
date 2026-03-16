//
// Created by fernando on 3/10/26.
//

#include "Date.h"

#include <iostream>

Date::Date(int _year, std::string _month, int _day): year(_year), month(std::move(_month)), day(_day){};

bool Date::equal(const Date& date) const {
    const bool dayValidation = this->day == date.day;
    const bool monthValidation = this->month == date.month;
    const bool yearValidation = this->year == date.year;
    if (dayValidation && monthValidation && yearValidation) {
        return true;
    }
    return false;
}

void Date::visualize() const {
    std::cout << "Date: " << this->day << "/" << this->month <<"/" << this->year;
}
