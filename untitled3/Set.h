//
// Created by maksaid1972 on 09.04.2022.
//

#ifndef UNTITLED3_SET_H
#define UNTITLED3_SET_H


#include <iostream>

using namespace std;

const int MaxSize = 100;

class Set {
    int len;
    char members[MaxSize];


    int find(char ch);

public:

    Set() { len = 0; }


    int getLength() { return len; }

    void showset();
    bool isMember(char ch);

    Set operator+(char ch);
    Set operator-(char ch);

    Set operator+(Set ob2);
    Set operator-(Set ob2);
};




#endif //UNTITLED3_SET_H
