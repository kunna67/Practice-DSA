class Solution {
public:
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        unordered_map<int, int> mp;
        for(int i=0; i<nums.size(); i++){
            string str= to_string(nums[i]);
            int x=0;
            for(int j=0; j<str.size(); j++) x=10*x + mapping[str[j]-'0'];
            mp[nums[i]]=x;
        }
        sort(nums.begin(), nums.end(), [&](int a, int b){
            if(mp[a]==mp[b]){
                auto it= find(nums.begin(), nums.end(), a)-nums.begin();
                auto it1= find(nums.begin(), nums.end(), b)-nums.begin();
                return it<it1;
            }
            return mp[a]<mp[b];
        });
        return nums;
    }
};