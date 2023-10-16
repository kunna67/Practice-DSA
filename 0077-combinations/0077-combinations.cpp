class Solution {
public:
    vector<vector<int>>ans;
    vector<int>temp;
    vector<vector<int>> combine(int n, int k) {
        memo(n,k);
        return ans;
    }
    void memo(int n, int k){
        if(k==temp.size()){
            ans.push_back(temp);
            return;
        }
        if(n==0) return ;
        temp.push_back(n);
        memo(n-1,k);
        temp.pop_back();
        memo(n-1,k);
    }
};