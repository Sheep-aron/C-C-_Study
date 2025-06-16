//HJ11 Êý×Öµßµ¹
//#include <iostream>
//
//int main()
//{
//    int n = 0;
//    std::cin >> n;
//    std::string str = std::to_string(n);
//    for (int i = str.size() - 1; i >= 0; --i)
//        std::cout << str[i];
//    return 0;
//}

//HJ31 µ¥´Êµ¹ÅÅ
//#include <iostream>
//#include <cctype>
//#include <vector>
//
//int main()
//{
//    std::string str, word;
//    std::getline(std::cin, str);
//    std::vector<std::string> vs;
//    for (char ch : str)
//    {
//        if (std::isalpha(static_cast<unsigned char>(ch)))
//            word += ch;
//        else
//        {
//            if (!word.empty())
//            {
//                vs.push_back(word);
//                word.clear();
//            }
//
//        };
//    }
//    if (!word.empty())
//        vs.push_back(word);
//    for (auto it = vs.rbegin(); it != vs.rend(); ++it)
//    {
//        if (it != vs.rbegin()) std::cout << " ";
//        std::cout << *it;
//    }
//    return 0;
//}