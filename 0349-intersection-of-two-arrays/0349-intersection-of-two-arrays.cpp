class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int>arr1,arr2;
        for(auto it:nums1){
            arr1.emplace(it);
        }
        for(auto it:nums2){
            arr2.emplace(it);
        }
        vector<int>list;
        for(auto it:arr1){
            if(arr2.count(it))
                list.push_back(it);
        }
        return list;
    }
};