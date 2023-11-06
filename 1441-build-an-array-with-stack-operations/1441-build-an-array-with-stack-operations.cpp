class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ans;
        int ptr = 0;

        for(int i = 1; i <= n; i++) {
            if(ptr == target.size()) break;;

            ans.push_back("Push");
            if(i == target[ptr]) ptr++;
            else ans.push_back("Pop");
        }

        return ans;
    }
};