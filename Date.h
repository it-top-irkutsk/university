#pragma once

#include <string>

using namespace std;

struct Date {
    int year;
    int month;
    int day;

    Date() {}

    //Date(int year, int month, int day) : year(year), month(month), day(day) {}
    Date(int year, int month, int day) {
        this->year = year;
        this->month = month;
        this->day = day;
    }


    //Date(const Date &date) : year(date.year), month(date.month), day(date.day) {}
    Date(const Date &date) {
        this->year = date.year;
        this->month = date.month;
        this->day = date.day;
    }

    void Init(int year, int month, int day) {
        this->year = year;
        this->month = month;
        this->day = day;
    }

    string ToString() {
        return to_string(day) + "." + to_string(month) + "." + to_string(year);
    }
};

string DateToString(Date date) {
    return to_string(date.day) + "." + to_string(date.month) + "." + to_string(date.year);
}