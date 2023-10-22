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





