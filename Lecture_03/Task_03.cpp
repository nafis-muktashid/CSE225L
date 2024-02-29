#include<bits/stdc++.h>
using namespace std;
const int N = 2*1e5+7; 
#define PI acos(-1)

int main(){
    int sizeY;
    cout<<"Enter Column size: \n";
    cin>>sizeY;

    int *ptr_row = new int [sizeY];
    for(int i=0; i<sizeY; ++i){
        cout<<"Size of "<<i+1<<"th row: "<<"\n";
        cin>>ptr_row[i];
    }

    int **ptr_arr = new int *[sizeY];
    for(int i=0; i<sizeY; ++i){
        ptr_arr[i] = new int [ptr_row[i]];
    }

    cout<<"Enter Row-Column values: \n";
    for(int i=0; i<sizeY; ++i){
        for(int j=0; j<ptr_row[i]; ++j){
            cin>>ptr_arr[i][j]; 
        }
    }
    cout<<"\nThe values are: \n";
    for(int i=0; i<sizeY; ++i){
        for(int j=0; j<ptr_row[i]; ++j){
            cout<<ptr_arr[i][j]<<" "; 
        }
        cout<<"\n";
    }

    for(int i=0; i<sizeY; ++i){
        delete[] ptr_arr[i];
    }
    delete[] ptr_arr;
    delete[] ptr_row;

    return 0;
}
