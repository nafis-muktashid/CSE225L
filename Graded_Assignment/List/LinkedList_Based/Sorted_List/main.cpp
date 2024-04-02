#include <iostream>
#include "sortedtype.h"
#include "sortedtype.cpp"
#include "timeStamp.cpp"
using namespace std;

template <class T>
void printList(SortedType<T> list) {
	T item;
	for (int i = 0; i < list.LengthIs(); i++) {
		list.GetNextItem(item);
		cout << item << " ";
	}
}

int main() {
	SortedType<timeStamp> tsList;

	timeStamp t1(15, 34, 23);                   
	timeStamp t2(13, 13, 02);
	timeStamp t3(43, 45, 12);
	timeStamp t4(25, 36, 17);
	timeStamp t5(52, 02, 20);

	tsList.InsertItem(t1);
	tsList.InsertItem(t2);
	tsList.InsertItem(t3);
	tsList.InsertItem(t4);
	tsList.InsertItem(t5);

	timeStamp temp(25, 36, 17);
	tsList.DeleteItem(temp);

	printList(tsList);
}
