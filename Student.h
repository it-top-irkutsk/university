#pragma once

#include <string>
#include <map>
#include <vector>

#include "Person.h"
#include "Date.h"

using namespace std;

using Rating = map<string, vector<int>>;

struct Student {
    Person personal_info;
    string faculty;
    bool is_study;
    Date receipt_date;
    Rating rating;
};