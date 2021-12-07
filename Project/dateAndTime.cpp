#include <iostream>
#include <ctime>
#include "stringFormat.cpp"
using namespace std;

string dateNow(){
    time_t now = time(0);
    tm *ltm = localtime(&now);
    int year = 1900 + ltm->tm_year;
    int month =  1 + ltm->tm_mon;
    int day =  ltm->tm_mday ;
    int hour = ltm->tm_hour;
    int min =  ltm->tm_min ;
    int sec =  ltm->tm_sec ;
    return "| " + convertToString(hour) + ":" + convertToString(min) + ":" + convertToString(sec) + " | " + convertToString(day) + "/" + convertToString(month) + "/" + convertToString(year);
}


