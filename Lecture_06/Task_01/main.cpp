#include <bits/stdc++.h>
#include "unsortedtype.h"
#include "unsortedtype.cpp"
using namespace std;

int main(){
    UnsortedType<int> li;

    li.InsertItem(5);
    li.InsertItem(7);
    li.InsertItem(6);
    li.InsertItem(9);

    int var=0;
    int len = li.LengthIs();

    for(int i=0; i<len; ++i){
        li.GetNextItem(var);
        cout<<var<<" ";
    }li.ResetList(); //Reset List is must to protect from memory leak.

  
}
