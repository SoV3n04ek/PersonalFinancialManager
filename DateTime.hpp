#pragma once

enum MONTH_NAMES {
	JANUARY = 1, FEBRUARY, MARCH,
	APRIL, MAY, JUNE,
	JULY, AUGUST, SEPTEMBER,
	OCTOBER, NOVEMBER, DECEMBER
};

class DateTime {
private:
	short month;
	short day;
	short year;
	short hours;
	short mins; // minutes
public:
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
};
