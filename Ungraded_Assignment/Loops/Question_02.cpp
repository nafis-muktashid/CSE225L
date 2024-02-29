#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
const int N = 1e9+7;

void solve(){
    int a; cin>>a;
    int sum=0; 
    while(a!=0){
        int temp = a%10;
        sum +=temp;
        a/=10;
    }
    cout<<sum<<"\n";
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
