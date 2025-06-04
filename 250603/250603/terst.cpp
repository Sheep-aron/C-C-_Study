//JZ11 旋转数组的最小数字
//class Solution
//{
//public:
//    int minNumberInRotateArray(vector<int>& nums)
//    {
//        int len = nums.size(), left = 0, right = len - 1;
//        while (left < right)
//        {
//            int mid = left + (right - left) / 2;
//            if (nums[mid] > nums[right])
//                left = mid + 1;
//            else if (nums[mid] < nums[right])
//                right = mid;
//            else
//                --right;
//        }
//        return nums[left];
//    }
//};

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