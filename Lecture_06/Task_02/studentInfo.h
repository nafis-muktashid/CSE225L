#ifndef STUDENTINFO_H_INCLUDED
#define STUDENTINFO_H_INCLUDED

#include <iostream>
#include <string>
using namespace std;

class studentInfo {
public:
	studentInfo();
	studentInfo(int);
	studentInfo(int, string, double);
	void print(studentInfo&);

	bool operator==(studentInfo);
	bool operator!=(studentInfo);

private:
		int ID;
		string name;
		double CGPA;
};

#endif // STUDENTINFO_H_INCLUDED
