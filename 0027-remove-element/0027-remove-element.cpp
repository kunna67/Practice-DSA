class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size(); // Get the size of the input vector
        int j = 0; // Initialize a pointer to keep track of the modified array

        for(int i = 0; i < n; i++) {
            if(nums[i] == val) // If the current element is equal to the target value
                continue; // Skip this element and move to the next iteration

            nums[j++] = nums[i]; // Copy the non-target element to the modified array and increment the pointer
        }

        return j; // Return the length of the modified array
    }
};