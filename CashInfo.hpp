#pragma once
#include "DateTime.hpp"
#include "ICashInfo.hpp"
#include <string>

class CashInfo
{
private:
	DateTime date;
	int value;
	std::string description;
	bool done;
public:
	CashInfo(const DateTime &date = DateTime(), int value = 0, 
				std::string description = "", bool done = false)
	:
		date(date),
		value(value),
		description(description),
		done(done)
	{ }

	CashInfo(const CashInfo& other)
	:
		date(other.getDate()),
		value(other.getValue()),
		description(other.getDescription()),
		done(other.isDone())
	{ }

	DateTime	getDate()		 const { return date;		 }
	int			getValue()		 const { return value;		 }
	std::string getDescription() const { return description; }
	bool		isDone()		 const { return done;		 }		

	CashInfo& setDone(bool isDone)
	{
		done = isDone;
		return *this;
	}
	CashInfo& setDate(const DateTime& date) 
	{ 
		this->date = date; 
		return *this;
	}
	CashInfo& setDate(short month, short day, short year, short hours, short mins) 
	{
		date = DateTime(month, day, year, hours, mins);
		return *this;
	}
	CashInfo& setValue(int value) 
	{ 
		this->value = value; 
		return *this; 
	}
	CashInfo& setDescription(const std::string& description) 
	{ 
		this->description = description; 
		return *this; 
	}

	std::string toStr() const {
		std::string result;
		result = "";
		return result;
	}
};