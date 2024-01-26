#include "DateADT.h"

Date::Date(int day, int month, int year) {
    this->day = day;
    this->month = month;
    this->year = year;
}

int Date::get_day() {
    return day;
}

int Date::get_month() {
    return month;
}

int Date::get_year() {
    return year;
}

std::string Date::get_date() {
    std::string result;
    result.append(std::to_string(this->day));
    result.append("/");
    result.append(std::to_string(this->month));
    result.append("/");
    result.append(std::to_string(this->year));

    return result;
}