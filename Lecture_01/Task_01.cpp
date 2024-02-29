#include <bits/stdc++.h>
using namespace std;
const int N = 1e9+7;
#define PI acos(-1)

int main(){

    //Task-01
    double a, b;
    char ch;
    cout<<"Enter number_1: "; cin>>a;
    cout<<"Enter number_2: "; cin>>b;
    cout<<"What to do? (+, -, *, /): "; cin>>ch;

    switch(ch){
        case '+':
            cout<<"Answer is: "<<a+b<<"\n";
            break;
        case '-':
            cout<<"Answer is: "<<a-b<<"\n";
            break;
        case '*':
            cout<<"Answer is: "<<a*b<<"\n";
            break;
        case '/':
            cout<<"Answer is: "<<a/b<<"\n";
            break;
        default:
            cout<<"Default entered"<<"\n";
    }
}
