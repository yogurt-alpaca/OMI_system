//
// Created by Raining on 2021/12/30.
//
#include "student.h"
int leap(year)
{
    int sign;
    if (year % 400 == 0) {
        sign = 1;
    }
    else if (year % 4 == 0 && year % 100 != 0) {
        sign = 1;
    }
    else {
        sign = 0;
    }
    return sign;
}
int judge(int year, int month, int day)
{
    int sign;
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
        if (day >= 1 && day <= 31) {
            sign = 1;
        }
        else {
            sign = 0;
        }
    }
    else if (month == 2) {
        if (leap(year)) {
            if (day >= 1 && day <= 29) {
                sign = 1;
            }
            else {
                sign = 0;
            }
        }
        else {
            if (day >= 1 && day <= 28) {
                sign = 1;
            }
            else {
                sign = 0;
            }
        }
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11){
        if (day >= 1 && day <= 30) {
            sign = 1;
        }
        else {
            sign = 0;
        }
    } else{
        sign = 0;
    }
    return sign;
}
