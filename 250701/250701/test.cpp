//strlen的模拟（递归实现）
//#include <stdio.h>
//
//int myStrlen(const char* str)
//{
//	int len = 0;
//	while (*str)
//	{
//		++len;
//		++str;
//	}
//	return len;
//}
//
//int main()
//{
//	char ch[100] = { 0 };
//	scanf_s("%s", ch, sizeof(ch));
//	printf("%d\n", myStrlen(ch));
//	return 0;
//}

//求阶乘
//#include <iostream>
//
//long long nSum(int n)
//{
//	if (n == 1)
//		return 1;
//	return n * nSum(n - 1);
//}
//
//int main()
//{
//	int n = 0;
//	std::cin >> n;
//	long long count = 1;
//	std::cout << nSum(n) << std::endl;
//	while (n)
//	{
//		count *= n;
//		--n;
//	}
//	std::cout << count << std::endl;
//
//	return 0;
//}


//打印一个数的每一位
//#include <iostream>
//
//void div(int n)
//{
//	while (n)
//	{
//		std::cout << n % 10 << " ";
//		n /= 10;
//	}
//}
//
//int main()
//{
//	int n = 0;
//	std::cin >> n;
//	div(n);
//
//	return 0;
//}
