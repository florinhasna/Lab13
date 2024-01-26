#include <iostream>
#include "DateADT.h"
using namespace std;

bool operator<(const Date& lhs, const Date& rhs);

int main() {
    Date now = Date(26, 1, 2024);
    Date tomorrow = Date(27, 1, 2024);

    cout << now.get_date() << endl;
    cout << tomorrow.get_date() << endl;
}

bool operator<(const Date& lhs, const Date& rhs) {
    if (year < rhs.get_year()){
        return true;
    } else if (lhs.get_year() == rhs.get_year() &&
               lhs.get_month() < rhs.get_month()) {
        return true;
    } else if (lhs.get_year() == rhs.get_year() &&
               lhs.get_month() == rhs.get_month() &&
               lhs.get_day() < rhs.get_day()) {
        return true;
    }
    return false;
}