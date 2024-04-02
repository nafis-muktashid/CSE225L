#ifndef TIMESTAMP_H_INCLUDED
#define TIMESTAMP_H_INCLUDED

class timeStamp {
	private:
		int second;
		int minute;
		int hour;

	public:
		timeStamp();
		timeStamp(int, int, int);
		bool operator==(timeStamp);
		bool operator>(timeStamp);
		bool operator<(timeStamp);
		void printTimeStamp();
};

#endif // TIMESTAMP_H_INCLUDED
