//
// Created by maksaid1972 on 09.04.2022.
//

#include "Set.h"

int Set::Set::find(char ch) {
    int i;

    for(i=0; i<len; i++)
        if(members[i]==ch)
            return i;

    return -1;
}

void Set::showset() {
    cout << "{ ";
    for(int i=0; i<len; i++)
        cout << members[i] << " ";
    cout << "}\n";
}


bool Set::isMember(char ch) {
    if(find(ch)!=-1)
        return true;
    return false;
}


Set Set::operator+(char ch) {
    Set newset;

    if(len==MaxSize) {
        cout << "Ìíîæåñòâî ïîëíî.\n";
        return *this;
    }

    newset = *this;
    if(find(ch)==-1) {
        newset.members[newset.len] = ch;
        newset.len++;
    }

    return newset;
}


Set Set::operator-(char ch) {
    Set newset;
    int i = find(ch);
    for(int j=0; j<len; j++)
        if(j!=i)
            newset = newset + members[j];


    return newset;
}


Set Set::operator+(Set ob2) {
    Set newset = *this;

    for(int i=0; i<ob2.len; i++)
        newset = newset + ob2.members[i];

    return newset;
}

Set Set::operator-(Set ob2) {
    Set newset = *this;
    for(int i=0; i<ob2.len; i++)
        newset = newset - ob2.members[i];

    return newset;
}

