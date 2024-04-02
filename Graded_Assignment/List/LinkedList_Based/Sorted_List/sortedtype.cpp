#include "sortedtype.h"
#include <iostream>
using namespace std;

template <class T>
SortedType<T>::SortedType() {
    length = 0;
    listData = NULL;
    currentPos = NULL;
}

template <class T>
int SortedType<T>::LengthIs() {
    return length;
}

template <class T>
bool SortedType<T>::IsFull() {
	NodeType* location;
    try {
        location = new NodeType;
        delete location;
        return false;
    } catch (bad_alloc& exception) {
        return true;
	}
}

template <class T>
void SortedType<T>::InsertItem(T item) {
    NodeType* newNode;
    NodeType* predLoc;
    NodeType* location;
    bool moreToSearch;

    location = listData;
    predLoc = NULL;
    moreToSearch = (location != NULL);

    while (moreToSearch) {
        if (location->info < item) {
            predLoc = location;
            location = location->next;
            moreToSearch = (location != NULL);
        }
        else {
			moreToSearch = false;
		}
    }
    newNode = new NodeType;
    newNode->info = item;

    if (predLoc == NULL) {
        newNode->next = listData;
        listData = newNode;
    }
    else {
        newNode->next = location;
        predLoc->next = newNode;
    }
    ++length;
}

template <class T>
void SortedType<T>::DeleteItem(T item) {
	NodeType* location = listData;
	NodeType* tempLocation;

    if (item == listData->info) {
		tempLocation = location;
		listData = listData->next;
	}
    else {
        while (!(item == (location->next)->info)) {
			location = location->next;
		}
		tempLocation = location->next;
		location->next = (location->next)->next;
	}
	delete tempLocation;
	--length;
}

template <class T>
void SortedType<T>::RetrieveItem(T& item, bool& found) {
	NodeType* location = listData;
	bool moreToSearch = (location != NULL);
	found = false;

    while (moreToSearch && !found) {
        if (item == location->info) {
            found = true;
		}
        else if (item > location->info) {
			location = location->next;
            moreToSearch = (location != NULL);
		}
        else {
			moreToSearch = false;
		}
	}
}

template <class T>
void SortedType<T>::MakeEmpty() {
	NodeType* tempPtr;

    while (listData != NULL) {
		tempPtr = listData;
		listData = listData->next;
		delete tempPtr;
	}
	length = 0;
}

template <class T>
SortedType<T>::~SortedType() {
	MakeEmpty();
}

template <class T>
void SortedType<T>::ResetList() {
	currentPos = NULL;
}

template <class T>
void SortedType<T>::GetNextItem(T& item) {
    if (currentPos == NULL) {
		currentPos = listData;
	}
    else {
		currentPos = currentPos->next;
	}
	item = currentPos->info;
}
