class Solution {
public:

    static bool comp(pair<char,int>a,pair<char,int>b){
        
        if(a.second == b.second)
            return a.first < b.first;
        
        return a.second > b.second;
    }
    string frequencySort(string s) {
        
        vector<pair<char,int>>v(80,{0,0});
        
        for(auto i : s){
            v[i-'0'].first = i;
            v[i-'0'].second++;
        }
    
        sort(v.begin(),v.end(),comp);
        
        string ans = "";
        
        for(auto x:v){
            
            char a = x.first;
            int b = x.second;
            while(b--)
                ans += a ;
        }
        
        return ans;
    }
};