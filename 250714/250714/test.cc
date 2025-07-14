//JZ15 二进制中1的个数
//class Solution
//{
//public:
//    int NumberOf1(int n)
//    {
//        unsigned int num = static_cast<unsigned int>(n);
//        int count = 0;
//        for (int i = 0; i < 32; ++i)
//        {
//            if (num & (1u << i))
//                count++;
//        }
//        return count;
//    }
//};

//REAL520 两个整数二进制位不同个数
//#include <iostream>
//
//int countBinary(int num1, int num2)
//{
//    int count = 0;
//    unsigned int n1 = static_cast<unsigned int>(num1), n2 = static_cast<unsigned int>(num2);
//    unsigned int m = n1 ^ n2;
//    for (int i = 0; i < 32; ++i)
//    {
//        if ((m >> i) & 1u)
//            count++;
//    }
//    return count;
//}
//
//int main()
//{
//    int num1 = 0, num2 = 0;
//    std::cin >> num1 >> num2;
//    std::cout << countBinary(num1, num2);
//    return 0;
//}

//BC100 有序序列合并
//#include <iostream>
//#include <vector>
//
//int main()
//{
//    int n = 0, m = 0;
//    std::cin >> n >> m;
//    std::vector<int> vn(n), vm(m), nm;
//
//    for (int i = 0; i < n; ++i)
//        std::cin >> vn[i];
//    for (int i = 0; i < m; ++i)
//        std::cin >> vm[i];
//
//    int left1 = 0, left2 = 0;
//    while (left1 < n && left2 < m)
//    {
//        if (vn[left1] <= vm[left2])
//            nm.push_back(vn[left1++]);
//        else
//            nm.push_back(vm[left2++]);
//    }
//
//    while (left1 < n)
//        nm.push_back(vn[left1++]);
//    while (left2 < m)
//        nm.push_back(vm[left2++]);
//
//    for (int i = 0; i < nm.size(); ++i)
//        std::cout << nm[i] << " ";
//    return 0;
//}

//BC96 有序序列判断
//#include <iostream>
//#include <vector>
//
//bool isOrdered(std::vector<int> vi)
//{
//    bool nonDecreasing = true, nonIncreasing = true;
//    for (int i = 1; i < vi.size(); ++i)
//    {
//        if (vi[i] < vi[i - 1])
//            nonDecreasing = false;
//        if (vi[i] > vi[i - 1])
//            nonIncreasing = false;
//    }
//    return nonDecreasing || nonIncreasing;
//}
//
//int main()
//{
//    int N = 0;
//    std::cin >> N;
//    std::vector<int> vi(N);
//    for (int i = 0; i < N; ++i)
//        std::cin >> vi[i];
//    if (isOrdered(vi))
//        std::cout << "sorted";
//    else
//        std::cout << "unsorted";
//    return 0;
//}

//BC54 获得月份天数
//#include <iostream>
//
//bool isLeapYear(int year)
//{
//    return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
//}
//
//int main()
//{
//    int Month[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//    int year = 0, month = 0;
//    while (std::cin >> year >> month)
//    {
//        if (month == 2 && isLeapYear(year))
//            std::cout << 29 << std::endl;
//        else
//            std::cout << Month[month] << std::endl;
//    }
//    return 0;
//}