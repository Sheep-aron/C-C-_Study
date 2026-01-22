#include "Date.h"

void TestDate1()
{
	Date d(2000, 3, 3);
	d.print();
	Date d1(2000);
	d1.print();
}

void TestDate2()
{

}

int main()
{
	TestDate1();
	return 0;
}