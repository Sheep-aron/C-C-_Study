//BC16 �ַ�תASCII��
//#include <iostream>
//
//int main()
//{
//    char c = 'a';
//    std::cin >> c;
//    printf("%d", c);
//    return 0;
//}

//дһ�������ӡ1-100֮������3�ı���������
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

// д���뽫�������������Ӵ�С���
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

//дһ�����룺��ӡ100~200֮�������
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

//��ӡ1000�굽2000��֮�������
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
