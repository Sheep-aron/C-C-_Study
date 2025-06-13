//448. 找到所有数组中消失的数字
//class Solution
//{
//public:
//    vector<int> findDisappearedNumbers(vector<int>& nums)
//    {
//        int len = nums.size();
//        std::vector<int> vi;
//        for (int i = 0; i < len; ++i)
//        {
//            int index = abs(nums[i]) - 1;
//            if (nums[index] > 0)
//                nums[index] = -nums[index];
//        }
//
//        for (int i = 0; i < len; ++i)
//        {
//            if (nums[i] > 0)
//                vi.push_back(i + 1);
//        }
//        return vi;
//    }
//};

//485. 最大连续 1 的个数
//class Solution
//{
//public:
//    int findMaxConsecutiveOnes(vector<int>& nums)
//    {
//        int len = nums.size(), count = 0, maxCount = 0;
//        for (int num : nums)
//        {
//            if (num == 1)
//            {
//                count++;
//                if (count > maxCount)
//                    maxCount = count;
//            }
//            else
//                count = 0;
//        }
//        return maxCount;
//
//        return count;
//    }
//};

//HJ56 完全数计算
//#include <iostream>
//#include <cmath>
//
//bool isFactor(int num)
//{
//    if (num == 1)
//        return false;
//    int sum = 1, sq = sqrt(num);
//    for (int i = 2; i <= sq; ++i)
//    {
//        if (num % i == 0)
//        {
//            sum += i;
//            if (i != num / i)
//                sum += num / i;
//        }
//    }
//    return sum == num;
//}
//
//int main()
//{
//    int n = 0, count = 0;
//    std::cin >> n;
//    for (int i = 2; i <= n; ++i)
//    {
//        if (isFactor(i))
//            ++count;
//    }
//    std::cout << count;
//    return 0;
//}