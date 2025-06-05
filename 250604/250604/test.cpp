//645. 错误的集合
//class Solution
//{
//public:
//    vector<int> findErrorNums(vector<int>& nums)
//    {
//        vector<int> ErrorNums(2);
//        sort(nums.begin(), nums.end());
//        int len = nums.size(), prev = 0;
//        for (int i = 0; i < nums.size(); ++i)
//        {
//            int curr = nums[i];
//            if (prev == curr)
//                ErrorNums[0] = prev;
//            else if (curr - prev > 1)
//                ErrorNums[1] = prev + 1;
//
//            if (nums[len - 1] != len)
//                ErrorNums[1] = len;
//
//            prev = curr;
//        }
//        return ErrorNums;
//    }
//};

//密码检查
//#include <iostream>
//#include <cctype>
//
//bool verPassword(std::string password)
//{
//    bool upper = false, lower = false, number = false;
//    if (password.size() < 8 || std::isdigit(password[0]))
//        return false;
//    for (char ch : password)
//    {
//        if (ch >= '0' && ch <= '9')
//            number = true;
//        else if (ch >= 'A' && ch <= 'Z')
//            upper = true;
//        else if (ch >>= 'a' && ch <= 'z')
//            lower = true;
//    }
//
//    int count = upper + lower + number;
//    return count >= 2;
//}
//
//int main()
//{
//    int n = 0;
//    std::cin >> n;
//    std::string password;
//    while (n--)
//    {
//        std::cin >> password;
//        if (verPassword(password))
//            std::cout << "YES" << std::endl;
//        else
//            std::cout << "NO" << std::endl;
//    }
//    return 0;
//}

// JZ53 数字在升序数组中出现的次数
//class Solution
//{
//public:
//    int GetNumberOfK(vector<int>& nums, int k)
//    {
//        int len = nums.size(), left = 0, right = len - 1, begin = -1, end = -1;
//        while (left <= right)
//        {
//            int mid = left + (right - left) / 2;
//            if (nums[mid] < k)
//                left = mid + 1;
//            else
//            {
//                if (nums[mid] == k)
//                    begin = mid;
//                right = mid - 1;
//            };
//        }
//        if (begin == -1)
//            return 0;
//        left = 0, right = len - 1;
//        while (left <= right)
//        {
//            int mid = left + (right - left) / 2;
//            if (nums[mid] > k)
//                right = mid - 1;
//            else
//            {
//                if (nums[mid] == k)
//                    end = mid;
//                left = mid + 1;
//            };
//        }
//
//        return end - begin + 1;
//    }
//};