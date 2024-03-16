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
    }
    li.ResetList();     //To ensure the list prints from start again.
    cout<<"\n";

    li.InsertItem(1);
    bool gotIt = false;
    int it = 4;
    li.RetrieveItem(it, gotIt);
    (gotIt) ? cout<<"Found\n" : cout<<"Not Found\n";


    bool gotIt2 = false;
    int it2 = 5;
    li.RetrieveItem(it2, gotIt2);
    (gotIt2) ? cout<<"Found\n" : cout<<"Not Found\n";



    bool gotIt3 = false;
    int it3 = 9;
    li.RetrieveItem(it3, gotIt3);
    (gotIt3) ? cout<<"Found\n" : cout<<"Not Found\n";



    bool gotIt4 = false;
    int it4 = 10;
    li.RetrieveItem(it4, gotIt4);
    (gotIt4) ? cout<<"Found\n" : cout<<"Not Found\n";


    (li.IsFull()) ? cout<<"List Full\n" : cout<<"Not Full\n";


    int it5 = 5;
    li.DeleteItem(it5);


    (li.IsFull()) ? cout<<"List Full\n" : cout<<"Not Full\n";


    int it6 = 1;
    li.DeleteItem(it6);


    int var2=0;
    int len2 = li.LengthIs();
    for(int i=0; i<len2; ++i){
        li.GetNextItem(var2);
        cout<<var2<<" ";
    }
    li.ResetList();     //To ensure the list prints from start again.
    cout<<"\n";


    int it7 = 6;
    li.DeleteItem(it7);


    int var3=0;
    int len3 = li.LengthIs();
    for(int i=0; i<len3; ++i){
        li.GetNextItem(var3);
        cout<<var3<<" ";
    }
    li.ResetList();     //To ensure the list prints from start again.
    cout<<"\n";
}
