//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
void check(vector<int>&v,int n,vector<int>&a){
        for(int i=2;i<=n;i++){
            if(v[i]&&v[n-i]){
                a.push_back(i);
                a.push_back(n-i);
                break;
            }
        }
    }
    void seive(vector<int>&v,int n){
        v[1]=0;
        v[0]=0;
        for(int i=2;i<=n;i++){
            if(v[i]){
                for(int j=i*i;j<=n;j+=i){
                    v[j]=0;
                }
            }
        }
    }
    vector<int> primeDivision(int n){
        // code here
        vector<int>v(n+1,1);
        seive(v,n);
        vector<int>a;
        check(v,n,a);
        return a;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> ans = ob.primeDivision(N);
        cout<<ans[0]<<" "<<ans[1]<<"\n";
    }
    return 0;
}
// } Driver Code Ends