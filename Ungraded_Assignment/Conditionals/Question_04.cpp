#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
const int N = 1e9+7;

void solve(){
    int a, b, c; cin>>a>>b>>c;
    int sum = a*b*c;
    (sum<100 && sum%8==0) ? cout<<"Yes"<<"\n" : cout<<"No"<<"\n";
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
