//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find largest rectangular area possible in a given histogram.
    long long getMaxArea(long long arr[], int n)
    {
        // Your code here
        stack<int> s;
        long long res=1;
        for (int i=0; i <n ; i++){
            while (!s.empty() && arr[i]<arr[s.top()]){
                int item=s.top();
                s.pop();
                if (!s.empty())
                    res=max(res,((i-s.top()-1)*arr[item]));
                    
                else 
                    res = max(res,(i*arr[item]));
                
            }
            
            s.push(i);
            
        }
        while (!s.empty()){
                int item=s.top();
                s.pop();
                if (!s.empty())
                    res=max(res,((n-s.top()-1)*arr[item]));
                    
                else 
                    res = max(res,(n*arr[item]));
                
                
            }
        
        return res;
        
    }
};


//{ Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.getMaxArea(arr, n)<<endl;
    
    }
	return 0;
}

// } Driver Code Ends