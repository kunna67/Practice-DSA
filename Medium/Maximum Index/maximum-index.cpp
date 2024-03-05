//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
        
    // A[]: input array
    // N: size of array
    // Function to find the maximum index difference.
    int maxIndexDiff(int arr[], int n) 
    { 
        // Your code here
        int left[n];
        left[0] = arr[0];
        for(int i=1;i<n;i++){
            left[i] = min(left[i-1],arr[i]);
        }
        int i=n-1;
        int j=n-1;
        int ans = INT_MIN;
        while(i>=0 && j>=0){
            if(arr[j]>=left[i]){
                ans = max(ans, j-i);
                i--;
            }
            else{
                j--;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
  
/* Driver program to test above functions */
int main() 
{
    int T;
    //testcases
    cin>>T;
    while(T--){
        int num;
        //size of array
        cin>>num;
        int arr[num];
        
        //inserting elements
        for (int i = 0; i<num; i++)
            cin>>arr[i];
        Solution ob;
        
        //calling maxIndexDiff() function
        cout<<ob.maxIndexDiff(arr, num)<<endl;    
        
    }
    return 0;
} 
// } Driver Code Ends