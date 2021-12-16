#pragma once

enum MONTH_NAMES {
	JANUARY = 1, FEBRUARY, MARCH,
	APRIL, MAY, JUNE,
	JULY, AUGUST, SEPTEMBER,
	OCTOBER, NOVEMBER, DECEMBER
};

class DateTime {
	int month;
	int day;
	int year;
public:
	DateTime(int month, int day, int year)
	:
		month(0), day(0), year(0)
	{
			
	}
};
