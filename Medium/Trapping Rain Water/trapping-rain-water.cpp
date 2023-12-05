//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        // code here
        int left = 0, right = n-1;
        int l_max = 0, r_max = 0;
        long long water = 0;
        
        while(left <= right) {
            
            if(l_max <= r_max) {
                water += max(0, l_max-arr[left]);
                l_max = max(l_max, arr[left]);
                left++;
            } else {
                water += max(0, r_max-arr[right]);
                r_max = max(r_max, arr[right]);
                right--;
            }
        }
        
        return water;
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}
// } Driver Code Ends