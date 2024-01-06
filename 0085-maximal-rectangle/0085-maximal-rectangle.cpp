class Solution {
    vector<int> nextsmall(vector<int>& arr,int n){
        stack<int> s;
        s.push(-1);
        vector<int> ans(n);
        for(int i=n-1;i>=0;i--){
            int c=arr[i];
            while(s.top()!=-1&&arr[s.top()]>=c)
            {
                s.pop();
            }
            ans[i]=s.top();
            s.push(i);
        }
        return ans;
    }
    vector<int> prevsmall(vector<int>& arr,int n){
         stack<int> s;
        s.push(-1);
        vector<int> ans(n);
        for(int i=0;i<n;i++){
            int c=arr[i];
            while(s.top()!=-1&&arr[s.top()]>=c)
            {
                s.pop();
            }
            ans[i]=s.top();
            s.push(i);
        }
        return ans;
    }
     int large(vector<int>& height,int n){
        int area=INT_MIN;
        
        vector<int> prev(n);
        vector<int> next(n);
        prev=prevsmall(height,n);
        next=nextsmall(height,n);
        for(int i=0;i<n;i++){
            if(next[i]==-1){
                next[i]=n;
            }
            int l=height[i];
            int b=next[i]-prev[i]-1;
            int newarea=l*b;
            area=max(area,newarea);
        }
        return area;
    }
public:
   int maximalRectangle(vector<vector<char> > &matrix) {
    if(matrix.empty()){
        return 0;
    }
    int maxRec = 0;
    vector<int> height(matrix[0].size(), 0);
    for(int i = 0; i < matrix.size(); i++){
        for(int j = 0; j < matrix[0].size(); j++){
            if(matrix[i][j] == '0'){
                height[j] = 0;
            }
            else{
                height[j]++;
            }
        }
        maxRec = max(maxRec, large(height,matrix[0].size()));
    }
    return maxRec;
}

};