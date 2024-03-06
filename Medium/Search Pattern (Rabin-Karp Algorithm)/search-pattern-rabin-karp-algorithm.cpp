//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        vector <int> search(string pattern, string text)
        {
            //code here.
            int n=pattern.size();
            int m=text.size();
            string str="";
            
            for(int i=0;i<n;i++)
            str.push_back(text[i]);
            
            vector<int>ans;
            if(str==pattern)
            ans.push_back(1);
            
            for(int i=n;i<m;i++){
                str.push_back(text[i]);
                str.erase(str.begin());
                
                if(str==pattern)
                ans.push_back(i-n+2);
            }
            return ans;
        }
     
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S, pat;
        cin >> S >> pat;
        Solution ob;
        vector <int> res = ob.search(pat, S);
        for (int i : res) cout << i << " ";
        cout << endl;
    }
    return 0;
}

// Contributed By: Pranay Bansal

// } Driver Code Ends