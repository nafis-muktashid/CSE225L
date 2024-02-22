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
    


    //Task-02
    double a, b, c, d;
    cin>>a>>b>>c>>d;
    if(a>b && a>c && a>d){
        cout<<"Biggest is number 1: "<<a<<"\n";
    }else if(b>c && b>d){
        cout<<"Biggest is number_2: "<<b<<"\n";
    }else if(c>d){
        cout<<"Biggest is number_3: "<<c<<"\n";
    }else{
        cout<<"Biggest is number_4: "<<d<<"\n";
    }

    if(a<b && a<c && a<d){
        cout<<"Smallest is number 1: "<<a<<"\n";
    }else if(b<c && b<d){
        cout<<"Smallest is number_2: "<<b<<"\n";
    }else if(c<d){
        cout<<"Smallest is number_3: "<<c<<"\n";
    }else{
        cout<<"Smallest is number_4: "<<d<<"\n";
    }

    

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
