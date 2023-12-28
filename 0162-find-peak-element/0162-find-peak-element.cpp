class Solution
{
public:
    int findPeakElement(vector<int> &nums)
    {
        long long n = nums.size();
        long long s = 0;
        long long e = n - 1;
        if (n == 1)
            return 0;
        while (s <= e)
        {
            long long m = s + (e - s) / 2;
            bool l = 0, r = 0;
            if ((m == 0 && nums[m] > nums[m + 1]) || (m == n - 1 && nums[m] > nums[m - 1]))
                return m;
            else if ((m == 0 && nums[m] < nums[m + 1]) || (nums[m] < nums[m +1]))
                s = m + 1;
            else if ((m == 0 && nums[m] < nums[m + 1]) || (nums[m] < nums[m - 1]))
                e = m - 1;
            else if (nums[m] > nums[m - 1] && nums[m] > nums[m + 1])
                return m;
        }
        return -1;
    }
};