// HJ34 图片整理
//#include <iostream>
//#include <set>
//
//void sortStr(std::string str)
//{
//    std::multiset<char> mulStr(str.begin(), str.end());
//    for (auto ch : mulStr)
//        std::cout << ch;
//}
//
//int main()
//{
//    std::string str;
//    std::cin >> str;
//    sortStr(str);
//    return 0;
//}

//724. 寻找数组的中心下标
//class Solution
//{
//public:
//    int pivotIndex(vector<int>& nums)
//    {
//        int len = nums.size(), leftSum = 0, total = 0;
//        for (int num : nums)
//            total += num;
//        for (int i = 0; i < len; ++i)
//        {
//            if (leftSum == total - nums[i] - leftSum)
//                return i;
//            leftSum += nums[i];
//        }
//        return -1;
//    }
//};

