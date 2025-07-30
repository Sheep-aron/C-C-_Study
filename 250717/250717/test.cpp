//#include <iostream>
//
//int main()
//{
//	int a = 0, sum = 0;
//	std::cin >> a;
//	int diff = 0;
//	for (int i = 0; i < 5; ++i)
//	{
//		diff += a * pow(10, i);
//		sum += diff;
//	}
//	std::cout << sum;
//	return 0;
//}

//#include <iostream>
//
//int main()
//{
//	int money = 20, sode = money / 1, empBottle = sode, sum = sode;
//	while (empBottle > 1)
//	{
//		sode = empBottle / 2;
//		sum += sode;
//		empBottle = empBottle / 2 + empBottle % 2;
//	}
//	std::cout << sum << std::endl;
//	return 0;
//}

#include <stdio.h>
#include <string.h>
int main()
{
	//printf("%d\n", strlen("abcdef"));
	// \62被解析成一个转义字符
	printf("%d\n", strlen("c:\test\628\test.c"));
	return 0;
}