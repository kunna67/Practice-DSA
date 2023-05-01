class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin(),salary.end());
        double ans=0;
        int n=salary.size(),count=0;
        for(int i=1;i<n-1;i++){
            ans+=salary[i];
            count++;
        }
        ans=ans/count;
        return ans;
    }
};