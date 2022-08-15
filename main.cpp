#include <iostream>

#include "Date.h"
#include "Student.h"

using namespace std;

int main() {
    Date date(2022, 8, 15);
    cout << date.ToString() << endl;

    Date date2;
    date2.day = 15;
    date2.month = 8;
    date2.year = 2022;
    cout << date2.ToString() << endl;

    Date date3(date2);
    cout << date3.ToString() << endl;

    Date date4;
    date4.Init(2022, 8, 15);
    cout << date3.ToString() << endl;

    return 0;
}
