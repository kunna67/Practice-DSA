class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(),points.end());
        stack<vector<int>>st;
        for(int i=0;i<points.size();i++){
            if(st.empty()) st.push(points[i]);
            if(points[i][0]<=st.top()[1]){
                vector<int>temp=st.top();
                st.pop();
                temp[0]=max(temp[0],points[i][0]);
                temp[1]=min(temp[1],points[i][1]);
                st.push(temp);
            }
            else st.push(points[i]);
        }
        return st.size();
    }
};