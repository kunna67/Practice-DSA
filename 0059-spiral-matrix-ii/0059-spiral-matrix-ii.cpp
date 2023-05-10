class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int left =0;
        int right = n-1;
        int top =0;
        int bottom = n-1;
      
        vector<vector<int>> ans(n, vector<int>(n, 0));
        int x = 1;
        int dir =0;
        while(left<=right && top <= bottom){
            if(dir ==0){
                //left to right 
                for(int i = left ;i<=right ;i++){
                    ans[top][i] = x;
                    x++;
                }
                top++;
            }
            if(dir==1){
                //top to bottom
                for(int i = top;i<=bottom ;i++){
                    ans[i][right] = x;
                    x++;
                }
                right--;
            }
            if(dir==2){
                //right to left 
                for(int i = right ;i>=left;i--){
                    ans[bottom][i] = x;
                    x++;
                }
                bottom--;
            }
            if(dir==3){
                //bottom to top
                for(int i = bottom ; i>=top;i--){
                    ans[i][left] = x;
                    x++;
                }
                left++;
            }
            dir = (dir+1) %4;
        }
        return ans;
        
    }
};