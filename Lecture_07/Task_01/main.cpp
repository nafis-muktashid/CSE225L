#include <iostream>
#include "sortedtype.h"
#include "sortedtype.cpp"
using namespace std;

int main(){
    SortedType<int> sli;

    cout<<sli.LengthIs()<<"\n\n";

    sli.InsertItem(5);
    sli.InsertItem(7);
    sli.InsertItem(4);
    sli.InsertItem(2);
    sli.InsertItem(1);

    int p1;
    for(int i=0; i<sli.LengthIs(); ++i){
        sli.GetNextItem(p1);
        cout<<p1<<" ";
    }
    sli.ResetList();

    cout<<"\n";
    bool got1 = false;
    int r1 = 6;
    sli.RetrieveItem(r1, got1);
    (got1)? cout<< "Found\n" : cout<<"Not Found\n";

    bool got2 = false;
    int r2 = 5;
    sli.RetrieveItem(r2, got2);
    (got2)? cout<< "Found\n" : cout<<"Not Found\n";

    (sli.IsFull()) ? cout<<"List is Full\n" : cout<< "List is not Full\n";

    int d1 = 1;
    sli.DeleteItem(d1);

    int p2=0;
    for(int i=0; i<sli.LengthIs(); ++i){
        sli.GetNextItem(p2);
        cout<<p2<<" ";
    }
    sli.ResetList();

    cout<<"\n";
    (sli.IsFull()) ? cout<<"List is Full\n" : cout<< "List is not Full\n";
}
