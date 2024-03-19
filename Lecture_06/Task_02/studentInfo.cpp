#include "studentInfo.h"

studentInfo::studentInfo() {

}

studentInfo::studentInfo(int id) {
	this->ID = id;
}

studentInfo::studentInfo(int id, string str, double gpa) {
	this->ID = id;
	this->name = str;
	this->CGPA = gpa;
}

bool studentInfo::operator==(studentInfo s) {
	if (this->ID == s.ID) {
		return true;
	}
	else {
		return false;
	}
}

bool studentInfo::operator!=(studentInfo s) {
	if (this->ID != s.ID) {
		return true;
	}
	else {
		return false;
	}
}

void studentInfo::print(studentInfo& s) {
	cout << s.ID << " " << s.name << " " << s.CGPA << endl;
}
