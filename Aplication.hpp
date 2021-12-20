#pragma once
#include <vector>
#include "CashExpense.hpp"
#include "CashIncome.hpp"

class Aplication
{
	std::vector<CashExpense> expenses; // -
	std::vector<CashIncome>   incomes; // +
	
	template <typename T>
	void swap(T &a1, T &a2)
	{
		T tmp = a1;
		a1 = a2;
		a2 = tmp;
	}


	void bubleSortIncome(std::vector<CashIncome>)
	{

	}
public:
	Aplication(const char *configPath = nullptr)
	{
		if (configPath == nullptr)
		{
			return;
		}
	}
	~Aplication() { }

	void printCashExpenses() const
	{
		for (auto& it : expenses)
			std::cout << it.getDate() << "  " << it.getValue() << std::endl;
	}

	void bubleSortExpenses()
	{
		size_t size = expenses.size();
		for (size_t index = 0; index < size; index++)
			for (int j = 0; j < size - index - 1; j++)
				if (expenses[j].getDate().getCountDaysFrom1990() > expenses[j + 1].getDate().getCountDaysFrom1990())
					swap<CashExpense>(expenses[j], expenses[j + 1]);
	}

	void sortExpenseByDateTime()
	{
			
	}

	// ============== Cash Expense methods ==============

	void addCashExpense(const CashExpense &expense)
	{
		expenses.push_back(expense);
	}

	void addCashExpense(const DateTime& date, int value,
		const std::string &description, bool done)
	{
		expenses.push_back(CashExpense(date, value, description, done));
	}

	void deleteCashExpense(size_t expenseIndex)
	{
		expenses.erase(expenses.begin() + expenseIndex);
	}

	void editCashExpenseDone(size_t expenseIndex, bool done)
	{
		expenses[expenseIndex].setDone(done);
	}

	void editCashExpenseDate(size_t expenseIndex, short day, short month, 
		short year,	short hours, short mins)
	{
		DateTime res(day, month, year, hours, mins);
		expenses[expenseIndex].setDate(res);
	}

	void editCashExpenseDescription(size_t expenseIndex, const DateTime& other)
	{
		expenses[expenseIndex].setDate(other);
	}

	void editCashExpenseValue(size_t expenseIndex, int value)
	{
		expenses[expenseIndex].setValue(value);
	}

	void editCashExpenseDate(size_t expenseIndex, const DateTime& other)
	{
		expenses[expenseIndex].setDate(other);
	}

	void editCashExpenseDescription(size_t expenseIndex, const std::string &desription)
	{
		expenses[expenseIndex].setDescription(desription);
	}

	// ============== Cash Income methods ==============

	void addCashIncome(const CashIncome& income)
	{
		incomes.push_back(income);
	}

	void addCashIncome(const DateTime& date, int value,
		const std::string &description, bool done)
	{
		incomes.push_back(CashIncome(date, value, description, done));
	}

	void editCashIncome(size_t incomeIndex, const CashIncome& income)
	{
		incomes[incomeIndex]
			.setDate(income.getDate())
			.setDone(income.isDone())
			.setDescription(income.getDescription())
			.setValue(income.getValue());
	}

	void editCashIncomeDone(size_t incomeIndex, bool done)
	{
		incomes[incomeIndex].setDone(done);
	}

	void editCashIncomeDescription(size_t incomeIndex, const DateTime& other)
	{
		incomes[incomeIndex].setDate(other);
	}
		
	void deleteCashIncome(size_t incomeIndex)
	{
		incomes.erase(incomes.begin() + incomeIndex);
	}

	void editCashIncomeValue(size_t incomeIndex, int value)
	{
		incomes[incomeIndex].setValue(value);
	}

	void editCashIncomeDate(size_t incomeIndex, short day, short month,
		short year, short hours, short mins)
	{
		DateTime res(day, month, year, hours, mins);
		incomes[incomeIndex].setDate(res);
	}

	void editCashIncomeDate(size_t incomeIndex, const DateTime& other)
	{
		incomes[incomeIndex].setDate(other);
	}

	void editCashIncomeDescription(size_t incomeIndex, const std::string& desription)
	{
		incomes[incomeIndex].setDescription(desription);
	}

};