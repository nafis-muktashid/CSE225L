#include "unsortedtype.h"
#include <iostream>
using namespace std;

template <class T>
UnsortedType<T>::UnsortedType(){
    length = 0;
    listData = NULL;
    currentPos = NULL;
}

template <class T>
int UnsortedType<T>::LengthIs(){
    return length;
}

template <class T>
bool UnsortedType<T>::IsFull(){
    NodeType* location;

    try{
        location = new NodeType;
        delete location;
        return false;
    }catch(bad_alloc& exception){
        return true;
    }
}

template <class T>
void UnsortedType<T>::InsertItem(T item){
    NodeType* location;
    location = new NodeType;
    location->info = item;
    location->next = listData;
    listData = location;
    ++length;
}

template <class T>
void UnsortedType<T>::DeleteItem(T item){
    NodeType* location = listData;
    NodeType* tempLocation;

    if(item == location->info){
        tempLocation = location;
        listData = listData->next;
    }else{
        while(!(item==(location->next)->info)){
            location = location->next;
        }
        tempLocation = location->next;
        location->next = (location->next)->next;
    }

    delete tempLocation;
    --length;
}

template <class T>
void UnsortedType<T>::RetrieveItem(T& item, bool& found){
    NodeType& location = listData;
    bool moreToSearch = (location != NULL);
    found = false;
    while(moreToSearch && !found){
        if(item == location->info){
            found = true;
        }else{
            location = location->next;
            moreToSearch = (location != NULL);
        }
    }
}

template <class T>
void UnsortedType<T>::MakeEmpty(){
    NodeType* tempPtr;
    while(listData!=NULL){
        tempPtr = listData;
        listData = listData->next;
        delete tempPtr;
    }
    length = 0;
}

template <class T>
UnsortedType<T>::~UnsortedType(){
    MakeEmpty();
}

template <class T>
void UnsortedType<T>::ResetList(){
    currentPos = NULL;
}

template <class T>
void UnsortedType<T>::GetNextItem(T& item){
    if(currentPos == NULL){
        currentPos = listData;
    }else{
        currentPos = currentPos->next;
    }
    item = currentPos->info;
}
