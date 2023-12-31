//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
unordered_map<string, int>mp;
int mod = 1003;
private:
    int solve(string s, int i, int j, bool isTrue){
        // Base Case
        if(i > j) return 0;
        
        if(i == j){
            if(isTrue == true){
                return s[i] == 'T';
            }
            else{
                return s[i] == 'F';
            }
        }
        string temp = to_string(i);
        temp.push_back(' ');
        temp += to_string(j);
        temp.push_back(' ');
        temp += to_string(isTrue);
        
        if(mp.find(temp) != mp.end()) return mp[temp]%mod;
        
        int ans = 0;
        for(int k = i+1; k < j; k+=2){
            int leftF = solve(s, i, k-1, false)%mod;
            int leftT = solve(s, i,k-1, true)%mod;
            int rightT = solve(s,k+1, j , true)%mod;
            int rightF = solve(s, k+1, j, false)%mod;
            
            if(s[k] == '&'){
                if(isTrue == true){
                    ans += (leftT * rightT)%mod;
                }
                else{
                    ans += ((leftT * rightF)%mod + (leftF * rightT)%mod + (leftF * rightF)%mod)%mod;
                }
            }
            else if(s[k] == '|'){
                if(isTrue == true){
                    ans += (leftT * rightF)%mod + (rightT * leftF)%mod + (leftT * rightT)%mod;
                }
                else{
                    ans += (leftF * rightF)%mod;
                }
            }
            else{
                if(isTrue == true){
                    ans += ((leftT * rightF)%mod + (rightT * leftF)%mod)%mod;
                }
                else{
                    ans += ((leftF * rightF)%mod + (rightT * leftT)%mod)%mod;
                }
            }
        }
        return mp[temp] = ans%mod;
    }
public:
    int countWays(int N, string S){
        // code here
        return solve(S, 0, N-1, true)%mod;

    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        string S;
        cin>>S;
        
        Solution ob;
        cout<<ob.countWays(N, S)<<"\n";
    }
    return 0;
}
// } Driver Code Ends