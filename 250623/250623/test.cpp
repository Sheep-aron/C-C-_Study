//BC84 ����y��ֵ
//#include <iostream>
//
//int main()
//{
//    int y = 0, x = 0;
//    std::cin >> x;
//    if (x < 0)
//        y = 1;
//    else if (x == 0)
//        y = 0;
//    else
//        y = -1;
//    std::cout << y;
//    return 0;
//}

//BC23 ʱ��ת��
//#include <iostream>
//
//int main()
//{
//    int totalSeconds = 0, hour = 0, minute = 0, seconds = 0;
//    std::cin >> totalSeconds;
//    hour = totalSeconds / 3600;
//    totalSeconds %= 3600;
//    minute = totalSeconds / 60;
//    totalSeconds %= 60;
//    seconds = totalSeconds;
//    std::cout << hour << " " << minute << " " << seconds;
//    return 0;
//}

//BC18 ����������
//#include <iostream>
//
//int main()
//{
//    int a = 0, b = 0;
//    std::cin >> a >> b;
//    std::cout << a / b << " " << a % b;
//    return 0;
//}

//BC17 ������ʽ��ֵ
//#include <iostream>
//
//int main()
//{
//    int a = 40, c = 212;
//    std::cout << (-8 + 22) * a - 10 + c / 2;
//    return 0;
//}

//BC114 С�����ŵ���
//#include <iostream>
//
//int main()
//{
//    int n = 0, minute = 0, m1 = 0, m2 = 0;
//    std::cin >> n;
//    m1 = (n + 1) / 12;
//    if (m1 == 1)
//    {
//        std::cout << 2;
//        return 0;
//    }
//    m2 = (n + 1) % 12;
//    if (m2 == 0)
//        std::cout << m1 * 4;
//    else
//        std::cout << m1 * 4 + 2;;
//
//    return 0;
//}

//BC9 printf�ķ���ֵ
//#include <iostream>
//
//int main()
//{
//    int n = printf("Hello world!");
//    std::cout << std::endl << n;
//    return 0;
//}

//BC51 �������ж�
//#include <iostream>
//#include <set>
//#include <vector>
//
//void isTriangle(std::vector<int>& vi)
//{
//    std::multiset<int> ms(vi.begin(), vi.end());
//    vi.clear();
//    for (int val : ms)
//        vi.push_back(val);
//    if (vi[0] + vi[1] > vi[2])
//    {
//        if (vi[0] == vi[1] && vi[1] == vi[2])
//            std::cout << "Equilateral triangle!\n";
//        else if ((vi[0] == vi[1] && vi[1] != vi[2]) || (vi[1] == vi[2] && vi[1] != vi[0]))
//            std::cout << "Isosceles triangle!\n";
//        else
//            std::cout << "Ordinary triangle!\n";;
//    }
//    else
//        std::cout << "Not a triangle!\n";
//}
//
//int main()
//{
//    std::vector<int> vi(3);
//    while (std::cin >> vi[0] >> vi[1] >> vi[2])
//        isTriangle(vi);
//    return 0;
//}