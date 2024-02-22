#include <bits/stdc++.h>
using namespace std;
const int N = 1e9+7;
#define PI acos(-1)

int main(){
    int n; cin>>n;

    vector<int> v;
    for(int i=1; i*i<=n; ++i){
        if(n%i==0){
            v.push_back(i);
            if(n/i!=i){
                v.push_back(n/i);
            }
        }
    }
    sort(v.begin(), v.end());

    int sum=0;
    for(int i:v){
        sum+=i;
    }
    sum = sum-n;
    (sum==n)? cout<<"Perfect"<<"\n" : cout<<"Not Perfect"<<"\n";
}
