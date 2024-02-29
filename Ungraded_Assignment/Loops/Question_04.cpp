#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
const int N = 1e9+7;

int fact(int n){
    if(n==0|| n==1) return 1;
    int sum = 1;
    for(int i=2; i<=n; ++i){
        sum *=i;
    }
    return sum;
}

void solve(){
    int a; cin>>a;
    cout<<fact(a)<<"\n";
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
