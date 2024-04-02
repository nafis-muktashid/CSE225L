#ifndef TIMESTAMP_H_INCLUDED
#define TIMESTAMP_H_INCLUDED

class timeStamp {
	private:
		int hour;
		int minute;
		int second;

	public:
		timeStamp();
		timeStamp(int, int, int);
		bool operator<(timeStamp);
		bool operator>(timeStamp);
		bool operator==(timeStamp);
		friend std::ostream& operator<<(std::ostream&, timeStamp&);
};

#endif // TIMESTAMP_H_INCLUDED
