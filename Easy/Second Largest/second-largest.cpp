//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Function returns the second
	
	
	int sLargest(int arr[], int n){
	    
	    int largest = arr[0];
	    int sLargest = -1;
	    
	    for(int i = 1; i < n; i++){
	        if(arr[i] > largest){
	            sLargest = largest;
	            largest = arr[i];
	        }else if(arr[i] < largest && arr[i] > sLargest){
	        sLargest = arr[i];
	    }
	    } 
	    return sLargest;
	}
	int print2largest(int arr[], int n) {
	    
	    int secondLargest = sLargest(arr, n);
	    return secondLargest;
	    
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends