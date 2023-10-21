class Solution {
public:
    int pivotIndex(vector<int>& nums) 
    {
        // looping variables
        auto i = nums.begin();
        int index;

        // Sum of the full vector
        int total = 0, left = 0, right, pivot;
        for (i = nums.begin(); i != nums.end(); ++i)
            total += *i;
        
        // Finding the pivot value 
        for (i = nums.begin(), index = 0; i != nums.end(); ++i, index++)
        {
            pivot = *i;
            right = total - pivot - left;
            if (left == right)
                return index;
            left += pivot;
        }
        return -1;        
    }
};