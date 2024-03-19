#include <iostream>
#include "unsortedtype.h"
#include "unsortedtype.cpp"
#include "studentInfo.h"
//#include "studentInfo.cpp"
using namespace std;

int main() {
  
    UnsortedType<studentInfo> si;

    studentInfo s1(15234, "Jon", 2.6);
    studentInfo s2(13732, "Tyrion", 3.9);
    studentInfo s3(13569, "Sandor", 1.2);
    studentInfo s4(15467, "Ramsey 2", 3.1);
    studentInfo s5(16285, "Arya", 3.1);

    si.InsertItem(s1);
    si.InsertItem(s2);
    si.InsertItem(s3);
    si.InsertItem(s4);
    si.InsertItem(s5);

    for (int i = 0; i < si.LengthIs(); ++i) {
		studentInfo s;
		si.GetNextItem(s);
		s.print(s);
	}
    si.ResetList();     //To ensure the list prints from start again.
    cout<<"\n";
    int delID = 15467;
    si.DeleteItem(delID);

    bool gotIt5 = false;
    int it8 = 13569;
    studentInfo temp(it8);
    si.RetrieveItem(temp, gotIt5);
    (gotIt5) ? cout << "Item is Found\n" : cout << "Item is Not Found\n";
    temp.print(temp);
    cout<<"\n";

    for (int i = 0; i < si.LengthIs(); ++i) {
        studentInfo s;
        si.GetNextItem(s);
        s.print(s);
    }
    si.ResetList();     //To ensure the list prints from start again.

}
