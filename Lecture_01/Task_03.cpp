#include <bits/stdc++.h>
using namespace std;
const int N = 1e9+7;
#define PI acos(-1)

int main(){

    //Task-03
    int n;
    cout<<"Enter any number"<<"\n";
    cin>>n;
    if((n%4==0 && n%100!=0) || n%400==0){
        cout<<"Leap Year"<<"\n";
    }else{
        cout<<"Not Leap Year"<<"\n";
    }
    

}
