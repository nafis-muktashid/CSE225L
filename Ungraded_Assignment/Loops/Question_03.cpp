#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
const int N = 1e9+7;

void solve(){
    int a; cin>>a;
    for(int i=0; i<a; ++i){
        for(int j=0; j<=i; ++j){
            cout<<"* ";
        }
        for(int j=a-1; j>i; --j){
            cout<<"  ";
        }
        cout<<"\n";
    }
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
