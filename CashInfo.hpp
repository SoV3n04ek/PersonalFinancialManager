#pragma once
#include "DateTime.hpp"
#include <string>

class CashInfo
{
private:
	DateTime date;
	int value;
	std::string description;
public:
	CashInfo(const DateTime &date = DateTime(), int value = 0, std::string description = "")
	:
		date(date),
		value(value),
		description(description)
	{ }

	CashInfo(const CashInfo &other)
	:
		date(other.getDate()),
		value(other.getValue()),
		description(other.getDescription())
	{ }

	DateTime	getDate()		 const { return date;		 }
	int			getValue()		 const { return value;		 }
	std::string getDescription() const { return description; }

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
	CashInfo& setDesription(const std::string& description) 
	{ 
		this->description = description; 
		return *this; 
	}

};