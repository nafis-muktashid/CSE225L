#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
const int N = 1e9+7;

bool isPrime(int n){
    if(n==1 || n==0) return false;
    for(int i=2; i*i<=n; ++i){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

void solve(){
    int i, f; cin>>i>>f;
    for(int k=i; k<=f; ++k){
        if(isPrime(k)) cout<<k<<" ";
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
