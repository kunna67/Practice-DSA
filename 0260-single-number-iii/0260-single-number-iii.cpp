// class Solution {
// public:
//     vector<int> singleNumber(vector<int>& nums) {
//         map<int, int>m;
//         for(int i=0; i<nums.size(); i++){m[nums[i]]++;}
//         vector<int>ans;
//         for(auto it: m){
//             if(it.second!=2){ans.push_back(it.first);}
//         }
//         return ans;
//     }
// };

class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        map<int, int>m;
        for(int i=0; i<nums.size(); i++){m[nums[i]]++;}
        vector<int>ans;
        for(auto it:m){
            if(it.second!=2){ans.push_back(it.first);}
        }
        return ans;
    }
};