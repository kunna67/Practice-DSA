class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;
        for (int i = 0; i < nums.size(); ++i)
        {
            if (nums[i] != val)
            {
                if (i != k)
                    nums[k++] = nums[i];
                else
                    ++k+1;
            }
        }
        return k;
        
    }
};