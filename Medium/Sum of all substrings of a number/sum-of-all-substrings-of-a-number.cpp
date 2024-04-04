//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to find sum of all possible substrings of the given string.
    long long sumSubstrings(string s){
        
        // your code here
        long long sum = 0;
        long long multiplier = 1;
        long long mod = 1000000007;

        for (int i = s.length() - 1; i >= 0; i--) {
            sum = (sum + (s[i] - '0') * multiplier * (i + 1)) % mod;
            multiplier = (multiplier * 10 + 1) % mod;
        }
        return sum;
    }
};

//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //taking string
        string s;
        cin>>s;
        Solution ob;
        //calling sumSubstrings() function
        cout << ob.sumSubstrings(s) << endl;
        
    }
    return 0;
}

// } Driver Code Ends