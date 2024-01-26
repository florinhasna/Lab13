#include <iostream>
#include "DateADT.h"
using namespace std;


int main() {
    Date now = Date(26, 1, 2024);
    Date tomorrow = Date(27, 1, 2024);

    cout << now.get_date() << endl;
    cout << tomorrow.get_date() << endl;
}