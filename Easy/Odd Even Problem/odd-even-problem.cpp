//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string oddEven(string s) {
        // code here
        int a[27]={0};
        a[0]=-1;
        int x=0,y=0;
        sort(s.begin(), s.end());
      for(int i=0;i<s.length();i++)
      {
          int as=(int)s[i];
          a[as-96]+=1;
          if(s[i]!=s[i+1] || i==s.length()-1)
          {
              if(a[as-96]%2==0 && (as-96)%2==0)
              x++;
            if(a[as-96]%2!=0 && (as-96)%2!=0)
              y++;
          }
      }
      return((x+y)%2==0)?"EVEN":"ODD";
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        string s;
        getline(cin, s);

        Solution obj;
        string res = obj.oddEven(s);

        cout << res << "\n";
    }
}

// } Driver Code Ends