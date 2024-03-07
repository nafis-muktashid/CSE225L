#include <bits/stdc++.h>
#include "circle.h"
#include "arr.h"

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    /*
    CIRcle cir1;
    CIRcle cir2(5);

    cout<<cir1.getArea()<<"\n";
    cout<<cir2.getArea()<<"\n";
    cout<<cir1.getDiameter()<<"\n";
    cout<<cir2.getDiameter()<<"\n";
    cout<<cir1.getPoridhi()<<"\n";
    cout<<cir2.getPoridhi()<<"\n";
    */

    arr ar1;
    arr ar2(5);

    for(int i=0; i<5; ++i){
        int k; cin>>k;
        ar2.setValues(i, k);
    }

    for(int i=0; i<5; ++i){
        cout<<ar2.getValues(i)<<" ";
    }
}
