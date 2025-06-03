//HJ100 等差数列
//#include <iostream>
//
//int main()
//{
//    int n = 0;
//    std::cin >> n;
//    std::cout << 2 * n + n * (n - 1) * 3 / 2;
//    return 0;
//}

//HJ100 等差数列
//#include <iostream>
//
//int main()
//{
//    int n = 0;
//    std::cin >> n;
//    int first = ((n - 1) * n) + 1;
//    while (n)
//    {
//        std::cout << first;
//        first += 2;
//        if (--n >= 1)
//            std::cout << "+";
//    }
//
//    return 0;
//}

//HJ97 记负均正
//#include <iostream>
//
//int main()
//{
//    int n = 0, number = 0, posNumber = 0, negNumber = 0;
//    double posSum = 0.0;
//    std::cin >> n;
//    while (n--)
//    {
//        std::cin >> number;
//        if (number < 0)
//            negNumber++;
//        else if (number > 0)
//        {
//            posNumber++;
//            posSum += (double)number;
//        }
//    }
//
//    std::cout << negNumber << " ";
//    if (posNumber == 0)
//        std::cout << 0;
//    else
//        std::cout << posSum / posNumber;
//
//    return 0;
//}

