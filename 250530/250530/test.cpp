//JZ17 ��ӡ��1������nλ��
//
//class Solution 
//{
//public:
//    vector<int> printNumbers(int n) 
//	  {
//        n = pow(10, n) - 1;
//        vector<int> vi(n);
//        for (int i = 1; i <= n; ++i)
//            vi[i - 1] = i;
//
//        return vi;
//    }
//};

// HJ73 �������ڵ�����ת��
//#include <iostream>
//#include <vector>
//
//bool isLeap(int year)
//{
//    return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
//}
//
//int main()
//{
//    std::vector<int> daysInMonth = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//    int year = 0, month = 0, day = 0;
//    std::cin >> year >> month >> day;
//    int totalDays = day;
//
//    for (int i = 1; i < month; ++i)
//        totalDays += daysInMonth[i];
//
//    if (month > 2 && isLeap(year))
//        ++totalDays;
//
//    std::cout << totalDays << std::endl;
//
//    return 0;
//}

#include <iostream>

int main()
{
    int n = 0;
    std::cin >> n;
    int first = ((n - 1) * n) + 1;
    while (n)
    {
        std::cout << first;
        first += 2;
        if (--n >= 1)
            std::cout << "+";
    }

    return 0;
}