#pragma once
#include <vector>
#include "CashExpense.hpp"
#include "CashIncome.hpp"

class Aplication
{
	std::vector<CashExpense> expenses; // -
	std::vector<CashIncome> income;   // +
public:
	Aplication(const char *configPath = nullptr)
	{
		if (configPath == nullptr)
		{
			return;
		}
	}
	~Aplication() { }

	void addCashExpense(const CashExpense &expense)
	{
		expenses.push_back(expense);
	}

	void addCashExpense(const DateTime& date = DateTime(), int value = 0,
		std::string description = "", bool done = false)
	{
		expenses.push_back(CashExpense(date, value, description, done));
	}

	void deleteCashExpense()
	{

	}
	void editCashExpense()
	{

	}

	//void addCashIncome();
	//void deleteCashIncome();
	//void editCashIncome();


};