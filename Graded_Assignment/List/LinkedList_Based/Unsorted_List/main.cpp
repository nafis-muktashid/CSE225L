#include <iostream>
#include "unsortedtype.h"
#include "unsortedtype.cpp"
using namespace std;

int main(){
    UnsortedType<int> listA;
    UnsortedType<int> listB;
    UnsortedType<int> mergedList;

    int a, valA; cin>>a;
    for(int i=0; i<a; ++i){
            cin>>valA;
        listA.InsertItem(valA);
    }

    int b, valB; cin>>b;
    for(int i=0; i<b; ++i){
        cin>>valB;
        listB.InsertItem(valB);
    }

    int val1, val2;
    listA.GetNextItem(val1);
    listB.GetNextItem(val2);
    int ind1 = listA.LengthIs();
    int ind2 = listB.LengthIs();

    while(ind1 > 0 && ind2 > 0){
        if(val1>val2){
            mergedList.InsertItem(val1);
            --ind1;
            if(ind1>0){
                listA.GetNextItem(val1);
            }
        }else if(val2>val1){
            mergedList.InsertItem(val2);
            --ind2;
            if(ind2>0){
                listB.GetNextItem(val2);
            }
        }else{
            mergedList.InsertItem(val1);
            mergedList.InsertItem(val2);
            --ind1;
            --ind2;
            if(ind1>0){
                listA.GetNextItem(val1);
            }
            if(ind2>0){
                listB.GetNextItem(val2);
            }
        }
    }

    while(ind1>0){
        mergedList.InsertItem(val1);
        --ind1;
        if(ind1>0){
            listA.GetNextItem(val1);
        }
    }

    while(ind2>0){
        mergedList.InsertItem(val2);
        --ind2;
        if(ind2>0){
            listB.GetNextItem(val2);
        }
    }

    int mergedVal;
    int indMerged = mergedList.LengthIs()-1;
    while(indMerged>=0){
        mergedList.GetNextItem(mergedVal);
        cout<<mergedVal<<" ";
        --indMerged;
    }
}
