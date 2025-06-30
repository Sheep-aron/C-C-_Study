//BC37 网购
//#include <iomanip>
//#include <iostream>
//
//int main()
//{
//    double price = 0.0;
//    int month = 0, day = 0, count = 0;
//    std::cin >> price >> month >> day >> count;
//    if (month == 11 && day == 11)
//        price = price * 0.7 - count * 50;
//    if (month == 12 && day == 12)
//        price = price * 0.8 - count * 50;
//    if (price <= 0)
//        std::cout << "0.00";
//    else
//        std::cout << std::fixed << std::setprecision(2) << price;
//    return 0;
//}

//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定
//'如：输入9，输出9 * 9口诀表，输出12，输出12 * 12的乘法口诀表。
//#include <iostream>
//
//int main()
//{
//	int n = 0;
//	std::cin >> n;
//	for (int i = 1; i <= n; ++i)
//	{
//		for (int j = 1; j <= i; ++j)
//			std::cout << i << "*" << j << "=" << i * j << "\t";
//		std::cout << std::endl;
//	}
//	return 0;
//}


//交换两个整数
//#include <iostream>
//
//void swap(int* a, int* b)
//{
//	int tmp = *b;
//	*b = *a;
//	*a = tmp;
//}
//
//int main()
//{
//	int a = 0, b = 0;
//	std::cin >> a >> b;
//	swap(&a, &b);
//	std::cout << a << " " << b;
//	return 0;
//}

//函数判断闰年
//#include <iostream>
//
//int main()
//{
//	int year = 0;
//	std::cin >> year;
//	if ((year % 4 == 0 && year % 100 !=0) || (year % 400 == 0))
//		std::cout << "yes";
//	else
//		std::cout << "no";
//	return 0;
//}

//函数判断素数
//#include <iostream>
//
//bool isPrime(int n)
//{
//	if (n < 2)
//		return false;
//	for (int i = 2; i <= sqrt(n); ++i)
//	{
//		if (n % i == 0)
//			return false;
//	}
//	return true;
//}
//
//int main()
//{
//	for (int i = 100; i <= 200; ++i)
//	{
//		if (isPrime(i))
//			std::cout << i << " ";
//	}
//	return 0;
//}

//计算斐波那契数
//#include <iostream>
//
//int Fac(int n)
//{
//	if (n < 3)
//		return 1;
//	else
//		return Fac(n - 1) + Fac(n - 2);
//}
//
//int main()
//
//{
//	int n = 0;
//	std::cin >> n;
//	std::cout << Fac(n) << std::endl;
//	return 0;
//}

//递归实现n的k次方
//#include <iostream>
//
//int pow(int n, int k)
//{
//	if (k == 0)
//		return 1;
//	else
//		return n * pow(n, k - 1);
//}
//
//int main()
//{
//	int n = 0, k = 0;
//	std::cin >> n >> k;
//	std::cout << pow(n, k) << std::endl;
//	return 0;
//}

//计算一个数的每位之和（递归实现）
//#include <iostream>
//
//int unSum(int n)
//{
//	if (n < 10)
//		return n;
//	else
//		return n % 10 + unSum(n / 10);
//}
//
//int main()
//{
//	int n = 0;
//	std::cin >> n;
//	std::cout << unSum(n) << std::endl;
//	return 0;
//}

//
//#include <stdio.h>
//
//void reverse_string(char* str)
//{
//	if (!str) 
//		return;
//	char* start = str;
//	while (*start)
//		start++;
//	char* end = start - 1;
//	while (str < end)
//	{
//		char tmp = *str;
//		*str++ = *end;
//		*end-- = tmp;
//	}
//}
//
//int main()
//{
//	char str[100] = {0};
//	scanf_s("%s", str, sizeof(str));
//	reverse_string(str);
//	printf("%s\n", str);
//	return 0;
//}