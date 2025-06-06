// 面试题 05.06. 整数转换
//class Solution
//{
//public:
//    int convertInteger(int A, int B)
//    {
//        unsigned int diff = static_cast<unsigned int>(A) ^ static_cast<unsigned int>(B), count = 0;
//        while (diff)
//        {
//            count += diff & 1;
//            diff >>= 1;
//        }
//        return count;
//    }
//};

//747. 至少是其他数字两倍的最大数
//class Solution
//{
//public:
//    int dominantIndex(vector<int>& nums)
//    {
//        int len = nums.size();
//        if (len == 0)
//            return -1;
//        if (len == 1)
//            return 0;
//        int maxIndex = 0, maxValue = nums[0], secondValue = INT_MIN;
//        for (int i = 1; i < len; ++i)
//        {
//            if (nums[i] > maxValue)
//            {
//                secondValue = maxValue;
//                maxValue = nums[i];
//                maxIndex = i;
//            }
//            else if (nums[i] > secondValue)
//                secondValue = nums[i];
//        }
//        return (maxValue >= 2 * secondValue) ? maxIndex : -1;
//    }
//};

// 349. 两个数组的交集
//class Solution
//{
//public:
//    vector<int> intersection(vector<int>& nums1, vector<int>& nums2)
//    {
//        std::set<int> setNums1(nums1.begin(), nums1.end());
//        std::set<int> setNums2(nums2.begin(), nums2.end());
//        int index1 = 0, index2 = 0;
//        std::vector<int> section;
//        for (auto num : setNums1)
//        {
//            if (setNums2.count(num))
//                section.push_back(num);
//        }
//        return section;
//    }
//};