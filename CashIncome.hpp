#pragma once
#include "CashInfo.hpp"

class CashIncome : public CashInfo
{
public:
	CashIncome(const DateTime& date = DateTime(), int value = 0,
		std::string description = "", bool done = false)
		:
		CashInfo(date, value, description, done)
	{}
	~CashIncome() { }
};
