#include <bits/stdc++.h>
using namespace std;
const int N = 1e9+7;
#define PI acos(-1)

int main(){

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
}
