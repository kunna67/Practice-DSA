class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int>set;
        for(int i=0;i<nums.size();i++)
            set.insert(nums[i]);
        vector<int>v(set.begin(),set.end());
        sort(v.begin(),v.end(),greater<int>());
        if(v.size()>=3) return v[2];
        else return v[0];
        
    }
};



           
//            int thirdMax(vector<int>& nums) {
//         set<int> set;
//         for(int i=0;i<nums.size();i++)
//             set.insert(nums[i]);     //Remove all duplicates
//         vector<int> v(set.begin(),set.end());  //Convert to a vector
//         sort(v.begin(),v.end(),greater<int>());  //Sort in descending order
//         if(v.size()>=3) return v[2];  //If there are at least 3 elements, then return the third element, else return the first element
//         else return v[0];
//     }


