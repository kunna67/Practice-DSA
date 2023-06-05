class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int n = coordinates.size();
        int i = 1;
        double x = coordinates[1][0] - coordinates[0][0];
        double y = coordinates[1][1] - coordinates[0][1];
        double slope = INT_MAX;
        if(x){
            slope = y/x;
        }
        while(i<n){
            x = coordinates[i][0] - coordinates[i-1][0];
            y = coordinates[i][1] - coordinates[i-1][1];
            double temp = INT_MAX;
            if(x){
                temp = y/x;
            }
            if(temp != slope){
                break;
            }
            i++;
        }
        if(i!=n){
            return 0;
        }
        return 1;
    }
};