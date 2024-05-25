class Solution {
public:

    //function for counting all possible ways of forming sentence from the 
    //letters of string s from last index to index ind
    void solve(const string& s, int ind, const unordered_set<string>& wordSet, string& curr, vector<string>& result) {
        //base case when we reach the end of the string s
        if (ind == s.length()) {
            result.push_back(curr);
            return;
        }

        //running the loop from ind+1 to last index to recursively
        //add the word as part of our solution and checking further

        //loop explains that how many possible ways of forminf the setence 
        //from end to last index. Hence checking for remaining part
        for (int end = ind + 1; end <= s.length(); ++end) {
            //substring from ind of length end-ind
            string word = s.substr(ind, end - ind);

            if (wordSet.find(word) != wordSet.end()) {
                // Word is in the dictionary, then finding further outputs
                string prev = curr.empty() ? word : (curr + " " + word);
                //next call using the modified words of the string
                solve(s, end, wordSet, prev, result);
            }
        }
    }

    vector<string> wordBreak(string s, vector<string>& wordDict) {
        //storing all out string of the dictionary in the set for further finding the
        //existence of any word in the dictonary

        unordered_set<string> wordSet(wordDict.begin(), wordDict.end());
        //vector for storing all the answers
        vector<string> ans;

        //curr string to keep track of the sentence formed till any particular index
        string curr;

        //recursive calling of the below fxn
        //function means that how many possible ways are there constructing a
        // sentence from letters of string s from end to index  0
        solve(s, 0, wordSet, curr, ans);

        return ans;
    }
};