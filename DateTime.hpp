#pragma once
#include <iostream>

enum MONTH_NAMES {
	JANUARY = 1, FEBRUARY, MARCH, // 1, 2, 3
	APRIL, MAY, JUNE,			  // 4, 5, 6
	JULY, AUGUST, SEPTEMBER,      // 7, 8, 9
	OCTOBER, NOVEMBER, DECEMBER   // 10, 11, 12
};

const short STANDART_DAY_COUNTS_IN_YEAR = 365;

class DateTime 
{
private:
	short month;
	short day;
	short year;
	short hours;
	short mins; // minutes

	bool isLeapYear(short year) const
	{
		if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
			return true;
		return false;
	}

	int getNumberOfDays(int month, int year) const
	{
		if (month == FEBRUARY)
		{
			if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
				return 29;
			return 28;
		}
		
		else if (month == JANUARY || month == MARCH || month == MAY 
			  || month == JULY    || month == AUGUST
			  || month == OCTOBER || month == DECEMBER)
			return 31;
		return 30;
	}


	

public:
	short getCountDaysFrom1990() const
	{
		short res = 0;
		short from = 1990;

		for (short y = from; y < year; y++)
		{
			res += STANDART_DAY_COUNTS_IN_YEAR;
			if (isLeapYear(y))
			{
				res++;
			}
		}

		for (short m = 1; m < month; m++)
			res += getNumberOfDays(m, year);

		if (day != 1)
			res += day - 1;

		return res;
	}

	DateTime(short day = 0, short month = 0, short year = 0,
				short hours = 0, short mins = 0)
	:
		day(day), month(month), year(year),
		hours(hours), mins(mins)
	{ };

	DateTime(const DateTime& other)
	:
		day(other.getDay()),
		month(other.getMonth()),
		year(other.getYear()),
		hours(other.getHours()),
		mins(other.getMins())
	{ };

	short getMonth() const { return month; }
	short getDay()   const { return day;   }
	short getYear()  const { return year;  }
	short getHours() const { return hours; }
	short getMins()  const { return mins;  }

	DateTime& setMonth(short month)  { this->month = month; return *this; }
	DateTime& setDay(short day)		 { this->day = day;		return *this; }
	DateTime& setYear(short year)	 { this->year = year;	return *this; }
	DateTime& setHours(short hours)  { this->hours = hours; return *this; }
	DateTime& setMinutes(short mins) { this->mins = mins;	return *this; }

	friend std::ostream& operator<<(std::ostream& os, const DateTime& dt);
};

inline bool operator==(const DateTime& lhs, const DateTime& rhs) { return lhs.getCountDaysFrom1990() == rhs.getCountDaysFrom1990(); }
inline bool operator!=(const DateTime& lhs, const DateTime& rhs) { return lhs.getCountDaysFrom1990() != rhs.getCountDaysFrom1990(); }
inline bool operator< (const DateTime& lhs, const DateTime& rhs) { return lhs.getCountDaysFrom1990() < rhs.getCountDaysFrom1990(); }
inline bool operator> (const DateTime& lhs, const DateTime& rhs) { return lhs.getCountDaysFrom1990() > rhs.getCountDaysFrom1990(); }
inline bool operator<=(const DateTime& lhs, const DateTime& rhs) { return lhs.getCountDaysFrom1990() <= rhs.getCountDaysFrom1990(); }
inline bool operator>=(const DateTime& lhs, const DateTime& rhs) { return lhs.getCountDaysFrom1990() >= rhs.getCountDaysFrom1990(); }

std::ostream& operator<<(std::ostream& os, const DateTime& dt)
{
	os << dt.getDay() << '.' << dt.getMonth() << '.' << dt.getYear();
	return os;
}