//728. �Գ���
//class Solution
//{
//public:
//    bool isSelfDividingNumbers(int num)
//    {
//        int nnum(num);
//        while (nnum)
//        {
//            int m = nnum % 10;
//            if (m == 0 || num % m != 0)
//                return false;
//            nnum /= 10;
//        }
//        return true;
//    }
//
//    vector<int> selfDividingNumbers(int left, int right)
//    {
//        std::vector<int> vi;
//        for (int i = left; i <= right; ++i)
//        {
//            if (isSelfDividingNumbers(i))
//                vi.push_back(i);
//        }
//        return vi;
//    }
//};

//238. ��������������ĳ˻�
//class Solution
//{
//public:
//    vector<int> productExceptSelf(vector<int>& nums)
//    {
//        int len = nums.size();
//        std::vector<int> fDp(len), lDp(len), pES(len);
//        fDp[0] = 1, lDp[len - 1] = 1;
//        for (int i = 1; i < len; ++i)
//            fDp[i] = fDp[i - 1] * nums[i - 1];
//        for (int i = len - 2; i >= 0; --i)
//            lDp[i] = lDp[i + 1] * nums[i + 1];
//        for (int i = 0; i < len; ++i)
//            pES[i] = fDp[i] * lDp[i];
//        return pES;
//    }
//};


//JZ65 ���üӼ��˳����ӷ�
//class Solution
//{
//public:
//    int Add(int num1, int num2)
//    {
//        while (num2 != 0)
//        {
//            int carry = num1 & num2;      // �����λ
//            num1 = num1 ^ num2;              // ���㲻����λ�ĺ�
//            num2 = (unsigned int)carry << 1; // ��λ����
//        }
//        return num1;
//    }
//};