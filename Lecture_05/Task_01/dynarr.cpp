#include "dynarr.h"
#include <bits/stdc++.h>
using namespace std;

template<class something>
dynArr<something>::dynArr(int s){
    data = new something[s];
    siz = s;
}

template<class something>
dynArr<something>::~dynArr(){
    delete[] data;
}

template<class something>
something dynArr<something>::getValue(int index){
    return data[index];
}

template<class something>
void dynArr<something>::setValue(int ind, something val){
    data[ind] = val;
}
