//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    int search(int arr[], int l, int h, int key){
        // l: The starting index
        // h: The ending index, you have to search the key in this range
        while(l<=h){
            int mid=(l+h)/2;
            if(arr[mid]==key) return mid;
            if(arr[mid]>=arr[l]){   // left sorted
                if(arr[mid]>=key && arr[l]<=key) h=mid-1;
                else l=mid+1;
            }
            else{ //right sorted
                if(arr[mid]<=key && arr[h]>=key) l=mid+1;
                else h=mid-1;
            }
        }
        return -1;
        //complete the function here
    }
};

//{ Driver Code Starts. 
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int A[n];
        for(int i = 0; i < n; i++)
            cin >> A[i];
        int key;
        cin >> key;
        Solution ob;
        cout << ob.search(A, 0, n - 1, key) << endl;
    }
return 0;
}
// } Driver Code Ends