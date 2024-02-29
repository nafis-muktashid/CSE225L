#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
const int N = 1e9+7;

void solve(){
    char ch;
    int a, b; cin>>a>>b>>ch;
    switch (ch)
    {
    case '+':
        cout<<a+b<<"\n"; 
        break;
    case '-':
        cout<<abs(a-b)<<"\n";
        break;
    case '*':
        cout<<a*b<<"\n";
        break;
    case '/':
        cout<<a/b<<"\n";
        break;
    default:
        cout<<"Wrong character"<<"\n";
        break;
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
