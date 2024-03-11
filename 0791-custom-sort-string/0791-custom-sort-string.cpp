class Solution {
public:

    string customSortString(string order, string s) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        vector<int> freq(26,0);
        string ans="";
        for(char ch:s)freq[ch-'a']++; //Fill the frequency of every char in 's' in frequency vector
        for(char ch:order){
            ans.append(freq[ch-'a'],ch); //Append every char of 'order' with the corresponding frequency if it was present in 's'
            freq[ch-'a']=0; //Then make the frequency of every char from 'order'=0 so that it won't be used again when appending non 'order' chars
        }
        for(int i=0;i<26;i++)ans.append(freq[i],i+'a'); //Append the remaining non 'order' chars with corresponding frequency
        return ans;

    }
};