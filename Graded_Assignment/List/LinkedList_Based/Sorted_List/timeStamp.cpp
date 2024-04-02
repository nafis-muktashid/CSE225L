#include <iostream>
#include <iomanip>
#include "timeStamp.h"
using namespace std;

timeStamp::timeStamp() {

}


timeStamp::timeStamp(int s, int m, int h) {
	second = s;
	minute = m;
	hour = h;
}

bool timeStamp::operator==(timeStamp t) {
	if ((hour == t.hour) && (minute == t.minute) && (second == t.second)) {
		return true;
	}
	else {
		return false;
	}
}

bool timeStamp::operator>(timeStamp t) {
	if ((hour > t.hour) || ((hour == t.hour)) && (minute > t.minute) || ((hour == t.hour) && (minute == t.minute) && (second > t.second))) {
		return true;
	}
	else {
		return false;
	}
}

bool timeStamp::operator<(timeStamp t) {
	if ((hour < t.hour) || ((hour == t.hour)) && (minute < t.minute) || ((hour == t.hour) && (minute == t.minute) && (second < t.second))) {
		return true;
	}
	else {
		return false;
	}
}

void timeStamp::printTimeStamp()
{
	cout << setfill('0') << setw(2) << second << ":"<< setw(2) << minute << ":"<< setw(2) << hour;
}
