#pragma once
#include "CashInfo.hpp"

class CashExpense : public CashInfo
{	
public:
	CashExpense(const DateTime& date = DateTime(), int value = 0,
		std::string description = "", bool done = false)
	:
		CashInfo(date, value, description, done)
	{}
	~CashExpense() { }
};