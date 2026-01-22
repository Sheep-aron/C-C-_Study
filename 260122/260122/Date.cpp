#include "Date.h"

Date::Date(int year, int month, int day)
	: _year(year)
	, _month(month)
	, _day(day)
{
	if (!checkDate())
	{
		std::cerr << "Date failed" << std::endl;
		print();
	}
}

void Date::print() const
{
	std::cout << _year << "/" << _month << "/" << _day << std::endl;
}

bool Date::checkDate() const
{
	if (_month < 1 || _month > 12 || _day < 1 || _day > getMonthDay(_year, _month))
	{
		std::cerr << "Date failed!" << std::endl;
		return false;
	}
	else
		return true;
}

int Date::getMonthDay(int year, int month) const
{
	assert(month >= 1 && month <= 12);

	static int MonthDay[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	if (_month == 2 && ((_year % 4 == 0 && _year % 100 != 0) || _year % 400 == 0))
		return 29;

	return MonthDay[_month];
}

bool Date::operator>(const Date& d) const
{
	if (_year > d._year)
		return true;
	else if (_year == d._year)
	{
		if (_month > d._month)
			return true;
		else if (_month == d._month)
		{
			return _day > d._day;
		}
		return false;
	}
	return false;
}

bool Date::operator>=(const Date& d) const
{
	return (*this > d) || (*this == d);
}

bool Date::operator<(const Date& d) const
{
	return !(*this >= d);
}

bool Date::operator<=(const Date& d) const
{
	return !(*this > d);
}

bool Date::operator==(const Date& d) const
{
	return (_year == d._year) && (_month == d._month) && (_day == d._day);
}

bool Date::operator!=(const Date& d) const
{
	return !(*this == d);
}