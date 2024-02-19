//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int minValue(string s, int k){
        // code here
        sort(s.begin(),s.end());
        priority_queue<int>pq;
        int i=0,n=s.length();
        while(i<n){
            char c=s[i];
            int j=i;
            while(j<n&&s[j]==c){
                j++;
            }
            int freq=j-i;
            pq.push(freq);
            i=j;
        }
        if(k>=n)
        return 0;
        
        while(k--){
            int t=pq.top();
            pq.pop();
                pq.push(t-1);
            // bs har baar most frquent element ki frequency ek kam kr deni hai
        }
        
        long long ans=0;
        while(!pq.empty()){
            int t=pq.top();
          //  cout<<t<<" ";
            ans+= (long long)t*t;
            pq.pop();
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        int k;
        cin>>s>>k;
        
        Solution ob;
        cout<<ob.minValue(s, k)<<"\n";
    }
    return 0;
}
// } Driver Code Ends