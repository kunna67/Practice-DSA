class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        unordered_set<string>st(nums.begin(),nums.end());
        queue<string>q;
        int n=nums.size();
        q.push("");
        while(q.front().length()<nums.size()){
            auto curr=q.front();
            q.pop();
            if((curr+"1").length()==n && (st.find(curr+"1")==st.end()))return curr+"1";
            q.push(curr+"1");
            if((curr+"0").length()==n && (st.find(curr+"0")==st.end()))return curr+"0";
            q.push(curr+"0");
        }
        return "";
        
    }
};