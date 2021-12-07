#include<iostream>
#include<cctype>
#include<string.h>
using namespace std;
#pragma once

char upCase(char &c){
    return toupper(c);
}

string formatString(string &s){
    int n = s.size();
    //Remove excess whitespace
    for(int i = 0; i< n ;i++){
        if(s.at(i) == ' ' and s.at(i+1) == ' '){
            s.at(i) = '\0';
        }
    }
    //Lower all charecter
    for(int i = 0; i< n ;i++){
        s.at(i) = tolower(s.at(i));
    }
    //Upscase first character
    s.at(0) = upCase(s.at(0));
    for(int i = 0; i< n-1 ;i++){
        if(s.at(i) == ' '){
            s.at(i+1) = toupper(s.at(i+1));
        }
    }
    return s;
}

string convertToString(int s){
    return to_string(s);
}

string convertToString(double s){
    return to_string(s);
}
