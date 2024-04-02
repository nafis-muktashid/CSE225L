#include "sortedtype.h"
#include <iostream>
using namespace std;

template <class T>
SortedType<T>::SortedType(){
    length = 0;
    listData = NULL;
    currentPos = NULL;
}

template <class T>
int SortedType<T>::LengthIs(){
    return length;
}

template <class T>
