class Solution {
public:
    vector<vector<string>> ans;
    int arr[15][15];
    vector<vector<string>> solveNQueens(int n) {
        
        Try(0, n);
        return ans;
    }

    void Try(int i, int n){
        if(i == n){
            ans.push_back(stringRender(n));
            return;
        }

        for(int j=0; j<n; j++){
            if(validate(i, j, n)){
                arr[i][j] = 1;
                Try(i+1, n);
                arr[i][j] = 0;
            }
        }
    }

    bool validate(int i, int j, int n){
        for(int x = 0; x<i; x++) if(arr[x][j] == 1) return 0;
        for(int x=i, y=j; x>=0 && y >= 0; x--, y--) if(arr[x][y] == 1) return 0;
        for(int x=i, y=j; x>=0 && y < n; x--, y++) if(arr[x][y] == 1) return 0;
        return 1;
    }

    vector<string> stringRender(int n){
        vector<string> res;
        for(int i=0; i<n; i++){
            string tmp = "";
            for(int j=0; j<n; j++){
                if(arr[i][j] == 0) tmp += '.';
                else tmp += 'Q';
            }
            res.push_back(tmp);
        }
        return res;
    }
};
  