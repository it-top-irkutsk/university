#pragma once

#include <string>

using namespace std;

struct Date {
    int year;
    int month;
    int day;

    string ToString() {
        return to_string(day) + "." + to_string(month) + "." + to_string(year);
    }
};

string DateToString(Date date) {
    return to_string(date.day) + "." + to_string(date.month) + "." + to_string(date.year);
}