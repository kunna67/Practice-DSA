class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        double ans=0;
        int c=0;
        for(int i=0;i<customers.size();i++){
            c=max(c,customers[i][0]);
            ans+=c+customers[i][1]-customers[i][0];
            c+=customers[i][1];
        }
        return ans/customers.size();
    }
};