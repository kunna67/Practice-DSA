//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
public:
    //Function to reverse every sub-array group of size k.
    void reverseInGroups(vector<long long>& arr, int n, int k){
        int d = n/k;
        int x = n%k;
        int i,m=0;
        int j=0,l=k-1;
        for(i=1;i<=d;i++)
        {
            while(j<=l)
            {
                int temp = arr[j];
                arr[j++] = arr[l];
                arr[l--] = temp;
            }
            j=k*(++m);
            l=j+k-1;
        }
        int z = n-1;
        for(int w = (n-x); w < z ; )
        {
            int temp = arr[w];
            arr[w++] = arr[z];
            arr[z--] = temp;
        }
    }
};

//{ Driver Code Starts.
int main() {
    int t; 
    cin >> t; 
    while(t--){ 
        int n;
        cin >> n; 
        vector<long long> arr; 
        int k;
        cin >> k; 

        for(long long i = 0; i<n; i++)
        {
            long long x;
            cin >> x; 
            arr.push_back(x); 
        }
        Solution ob;
        ob.reverseInGroups(arr, n, k);
        
        for(long long i = 0; i<n; i++){
            cout << arr[i] << " "; 
        }
        cout << endl;
    }
    return 0;
}


// } Driver Code Ends