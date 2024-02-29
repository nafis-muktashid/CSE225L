#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
const int N = 1e9+7;

void solve(){
    int a, b; cin>>a>>b;
    if(a%3==0 && b%3==0){
        cout<<"Both the "<<a<<" "<<b<<" is divisible with 3";
    }else if(a%3==0){
        cout<<"Only the "<<a<<" is divisible with 3";
    }else if(b%3==0){
        cout<<"Only the "<<b<<" is divisible with 3";
    }else{
        cout<<"None is divisible with 3";
    }
    cout<<"\n";
}

int main(){
    #ifndef ONLINE_JUDGE
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    #endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // int t; cin>>t;
    // for(int i=1; i<=t; ++i){
    //   solve();
    //   // cout<<"Case "<<i<<": ";
    // }
    solve();
    
}
