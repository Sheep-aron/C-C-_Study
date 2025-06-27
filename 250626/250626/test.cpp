//BC16 字符转ASCII码
//#include <iostream>
//
//int main()
//{
//    char c = 'a';
//    std::cin >> c;
//    printf("%d", c);
//    return 0;
//}

//写一个代码打印1-100之间所有3的倍数的数字
//#include <iostream>
//
//int main()
//{
//	for (int i = 1; i <= 100; ++i)
//	{
//		if (i % 3 == 0)
//		{
//			std::cout << i << std::endl;
//		}
//	}
//	return 0;
//}

// 写代码将三个整数数按从大到小输出
//#include <iostream>
//#include <set>
//
//int main()
//{
//	int a = 0, b = 0, c = 0;
//	std::cin >> a >> b >> c;
//	std::multiset<int, std::greater<int>> numbers({ a, b, c });
//	for (auto num : numbers)
//		std::cout << num << " ";
//	return 0;
//}

//写一个代码：打印100~200之间的素数
//#include <iostream>
//
//int main()
//{
//	for (int i = 100; i < 200; ++i)
//	{
//		bool isPrime = true;
//		if (i < 2) 
//			isPrime = false;
//		for (int j = 2; j * j <= i; ++j)
//		{
//			if (i % j == 0)
//			{
//				isPrime = false;
//				break;
//			}
//		}
//		if (isPrime)
//			std::cout << i << " ";
//	}
//	return 0;
//}

//打印1000年到2000年之间的闰年
//#include <iostream>
//
//int main()
//{
//	for (int year = 1000; year <= 2000; ++year)
//	{
//		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//			std::cout << year << " ";
//	}
//	return 0;
//}
