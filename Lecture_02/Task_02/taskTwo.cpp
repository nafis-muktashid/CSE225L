#include <bits/stdc++.h>
using namespace std;
const int N = 1e9+7;
#define PI acos(-1)

bool even(int a){
    if(a%2==0) return true;
    else return false;
}

int main(){
    int n; cin>>n;

    if(even(n)) cout<<"Number is Even"<<"\n";
    else cout<<"Number is odd"<<"\n";

    bool isPrimeFor = true;
    for(int i=2; i<=n/2; ++i){
        if(n%i==0){
            isPrimeFor = false;
             break;
        }
    }
    (isPrimeFor)? cout<<"Prime using for loop."<<"\n" : cout<<"Not Prime using for Loop"<<"\n";

    bool isPrimeWhile = true;
    int i=2;
    while(i<=n/2){
        if(n%i==0){
            isPrimeWhile = false;
            break;
        }
        ++i;
    }
    (isPrimeWhile)? cout<<"Prime using while loop."<<"\n" : cout<<"Not Prime using while Loop"<<"\n";

    bool isPrimeDoWhile = true;
    int k=2;
    do{
        if(n%i==0){
            isPrimeDoWhile = false;
            break;
        }
        ++i;
    }while(i<=n/2);
    (isPrimeDoWhile)? cout<<"Prime using while loop."<<"\n" : cout<<"Not Prime using while Loop"<<"\n";

}
