#pragma once

#include <string>
#include "Date.h"

using namespace std;

struct Person {
    string first_name;
    string last_name;
    string patronymic;
    Date date_of_birth;
};