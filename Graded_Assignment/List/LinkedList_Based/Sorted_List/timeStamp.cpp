#include <iostream>
#include "timeStamp.h"
using namespace std;

timeStamp::timeStamp() {

}


timeStamp::timeStamp(int h, int m, int s) {
	hour = h;
	minute = m;
	second = s;
}

bool timeStamp::operator<(timeStamp t) {
	if ((hour < t.hour) || ((hour == t.hour)) && (minute < t.minute) || ((hour == t.hour) && (minute == t.minute) && (second < t.second))) {
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

bool timeStamp::operator==(timeStamp t) {
	if ((hour == t.hour) && (minute == t.minute) && (second == t.second)) {
		return true;
	}
	else {
		return false;
	}
}

ostream& operator<<(ostream& os, timeStamp& t) {
	os << t.second << ":" << t.minute << ":" << t.hour;
	return os;
}
