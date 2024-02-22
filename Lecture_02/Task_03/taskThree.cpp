#include <bits/stdc++.h>
using namespace std;
const int N = 1e9+7;
#define PI acos(-1)

int main(){
    int a, b; cin>>a>>b;

    for(int i=a; i<=b; ++i){
        cout<<i<<" ";
    }
    cout<<"\n";

    int i=a;
    while(i<=b){
        cout<<i<<" ";
        ++i;
    }
    cout<<"\n";

    int k=a;
    do{
        cout<<k<<" ";
        ++k;
    }while(k<=b);
    cout<<"\n";
}
