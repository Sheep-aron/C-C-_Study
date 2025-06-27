//给定两个数，求这两个数的最大公约数
//#include <iostream>
//
//int main()
//{
//	int m = 0, n = 0, swap = 0;
//	std::cin >> m >> n;
//	while (m % n)
//	{
//		swap = m % n;
//		m = n;
//		n = swap;
//	}
//	std::cout << n << std::endl;
//	return 0;
//}


//在屏幕上输出9*9乘法口诀表
//#include <iostream>
//
//int main()
//{
//	for (int i = 1; i <= 9; ++i)
//	{
//		for (int j = 1; j <= i; ++j)
//		{
//			std::cout << j << "x" << i << "=" << i * j << "\t";
//		}
//		std::cout << std::endl;
//	}
//	return 0;
//}

//求10 个整数中最大值
//#include <iostream>
//
//int main()
//{
//	int max = 0, num = 0;
//	for (int i = 0; i < 10; ++i)
//	{
//		std::cin >> num;
//		if (i == 0 || num > max)
//			max = num;
//	}
//
//	std::cout << max << std::endl;
//
//	return 0;
//}


//计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果
//#include <iostream>
//
//int main()
//{
//	double sum = 0;
//	for (int i = 1; i <= 100; ++i)
//	{
//		if (i % 2 == 0)
//			sum -= 1.0 / i;
//		else
//			sum += 1.0 / i;
//	}
//	std::cout << sum << std::endl;
//	return 0;
//}

//编写程序数一下 1到 100 的所有整数中出现多少个数字9
//#include <iostream>
//
//int countNine(int num)
//{
//	int count = 0;
//	while (num)
//	{
//		if (num % 10 == 9)
//			++count;
//		num /= 10;
//	}
//	return count;
//}
//
//int main()
//{
//	int count = 0;
//	for (int i = 1; i <= 100; ++i)
//		count += countNine(i);
//	std::cout << count << std::endl;
//	return 0;
//}

//二分查找
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//int main()
//{
//	std::vector<int> vi(10);
//	for (int i = 0; i < 10; ++i)
//		std::cin >> vi[i];
//	int key = 0;
//	std::cin >> key;
//	sort(vi.begin(), vi.end());
//	for (int left = 0, right = vi.size() - 1; left <= right; )
//	{
//		int mid = left + (right - left) / 2;
//		if (vi[mid] > key)
//			right = mid - 1;
//		else if (vi[mid] < key)
//			left = mid + 1;
//		else
//		{
//			std::cout << "Found at index: " << mid << std::endl;
//			break;
//		}
//	}
//	return 0;
//}

//BC112 小乐乐求和
//#include <iostream>
//
//int main()
//{
//    long long n = 0;
//    std::cin >> n;
//    long long m = n * (n + 1) / 2;
//    printf("%lld", m);
//    return 0;
//}

//BC123 小乐乐找最大数
//#include <iostream>
//
//int main()
//{
//    int i = 4, max = 0, num = 0;
//    while (i--)
//    {
//        std::cin >> num;
//        max = max > num ? max : num;
//    }
//    std::cout << max;
//    return 0;
//}


//BC47 判断是不是字母
//#include <iostream>
//
//int main()
//{
//    char ch = 'a';
//    while (std::cin >> ch)
//    {
//        if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
//            std::cout << ch << " is an alphabet." << std::endl;
//        else
//            std::cout << ch << " is not an alphabet." << std::endl;
//    }
//    return 0;
//}

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