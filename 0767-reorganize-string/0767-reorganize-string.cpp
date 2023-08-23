class Solution {
public:
    string reorganizeString(string s) {
        int n=s.size();
        vector<pair<int, char>> freq(26, {0, 'X'});
        for(char c: s){
            freq[c-'a'].first++;
            freq[c-'a'].second=c;
        }
    //    sort(freq.begin(), freq.end(), greater<pair<int, char>>());
        int max_freq=0, max_i=-1;
        for(int i=0; i<26; i++){
            if (max_freq<freq[i].first){
                max_freq=freq[i].first;
                max_i=i;
            }
        }

        swap(freq[0], freq[max_i]);// If freq[max_i]==(n+1)/2, this must be done.
        if (max_freq>(n+1)/2) return string();
        string ans(n, 'X');

        // Fill even indices first
        int j=0;
        for (int i = 0; i < n; i += 2) {
            while (j < 26 && freq[j].first == 0) j++;
            ans[i] = freq[j].second;
            freq[j].first--;
        }
        
        // Fill odd indices
        for (int i = 1; i < n; i += 2) {
            while (j < 26 && freq[j].first == 0) j++;
             ans[i] = freq[j].second;
            freq[j].first--;
        }

        //cout<<ans<<endl;
        return ans;    
    }
};