class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();

        vector<int> ans;

        for(int i=0;i<n;i++){
            int miniIdx=-1,miniEle=INT_MAX;
            
            // minimum element in row
            for(int j=0;j<m;j++){
                if(matrix[i][j]<miniEle){
                    miniIdx=j;
                    miniEle=matrix[i][j];
                }
            }

            // validate maximum element in col
            bool found=1;
            for(int k=0;k<n;k++){
                if(matrix[i][miniIdx]<matrix[k][miniIdx]){
                    found=0;
                    break;
                }
            }
            
            if(found) ans.push_back(miniEle);
        }
        return ans;
    }
};