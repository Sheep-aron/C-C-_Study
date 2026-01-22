#pragma once
#include <assert.h>
#include <iostream>

class Date
{
public:
	Date(int year = 2026, int month = 1, int day = 22);
	
	bool checkDate() const;
	int getMonthDay(int year, int month) const;

	void print()const;

	bool operator>(const Date& d) const;
	bool operator>=(const Date& d) const;
	bool operator<(const Date& d) const;
	bool operator<=(const Date& d) const;
	bool operator==(const Date& d) const;
	bool operator!=(const Date& d) const;


private:
	int _year;
	int _month;
	int _day;
};