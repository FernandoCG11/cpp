//
// Created by fernando on 3/10/26.
//

#ifndef EXERCISE_1_DATE_H
#define EXERCISE_1_DATE_H
#include <string>


class Date {
private:
    int year{};
    std::string month;
    int day{};
public:
    Date(int _year, std::string month, int day);
    [[nodiscard]] bool equal(const Date &date) const;
    void visualize() const;
};


#endif //EXERCISE_1_DATE_H