// HJ10 字符个数统计
//#include <iostream>
//#include <string>
//#include <set>
//
//int main()
//{
//    std::string str;
//    getline(std::cin, str);
//    std::set<unsigned char> sc(str.begin(), str.end());
//    int total = 0;
//    for (char ch : sc)
//    {
//        unsigned char uch = static_cast<unsigned char>(ch);
//        if (uch < 128)
//            total++;
//    }
//    std::cout << total;
//    return 0;
//}

// 169. 多数元素
//class Solution
//{
//public:
//    int majorityElement(vector<int>& nums)
//    {
//        int len = nums.size() / 2, max = INT_MIN, maxNum = 0;
//        std::map<int, int> numsMap;
//
//        for (int num : nums)
//            numsMap[num]++;
//
//        for (auto it : numsMap)
//        {
//            if (it.second > max)
//            {
//                max = it.second;
//                maxNum = it.first;
//            }
//        }
//        return maxNum;
//    }
//};