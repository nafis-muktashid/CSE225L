#include <bits/stdc++.h>
#include "dynarr.h"
#include "dynarr.cpp"
using namespace std;

int main(){

    dynArr<int> dya1(5);
    for(int i=0; i<5; ++i){
        int k; cin>>k;
        dya1.setValue(i, k);
    }
    for(int i=0; i<5; ++i){
        cout<<dya1.getValue(i)<<" ";
    }
    dya1.~dynArr();


    dynArr<double> dya3(5);
        for(int i=0; i<5; ++i){
        double k; cin>>k;
        dya3.setValue(i, k);
    }
    for(int i=0; i<5; ++i){
        cout<<dya3.getValue(i)<<" ";
    }
    dya3.~dynArr();


    dynArr<char> dya2(5);
        for(int i=0; i<5; ++i){
        char k; cin>>k;
        dya2.setValue(i, k);
    }
    for(int i=0; i<5; ++i){
        cout<<dya2.getValue(i)<<" ";
    }
    dya2.~dynArr();

}



