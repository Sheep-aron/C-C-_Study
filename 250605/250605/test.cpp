// ������ 05.06. ����ת��
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

//747. �������������������������
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

// 349. ��������Ľ���
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