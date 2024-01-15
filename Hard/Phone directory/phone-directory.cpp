//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class TrieNode {
public:
    char data;
    TrieNode* children[26];
    bool isTerminal;

    // Constructor initializes data and sets all children to null
    TrieNode(char ch) {
        data = ch;
        for (int i = 0; i < 26; i++) {
            children[i] = NULL;
        }
        isTerminal = false;
    }
};

class Trie {
public:
    TrieNode* root;

    // Constructor initializes root node with empty character
    Trie() {
        root = new TrieNode('\0');
    }

    // Recursive function to insert a word into the Trie
    void insertUtil(TrieNode* root, string word) {
        // Base case: reach the end of the word
        if (word.length() == 0) {
            root->isTerminal = true;
            return;
        }

        // Calculate index of first character in the alphabet
        int index = word[0] - 'a';

        // Check if child node exists for the character
        TrieNode* child;
        if (root->children[index] != NULL) {
            child = root->children[index];
        } else {
            // Create a new child node
            child = new TrieNode(word[0]);
            root->children[index] = child;
        }

        // Recursively insert the remaining characters
        insertUtil(child, word.substr(1));
    }

    // Public function to insert a word into the Trie
    void insertWord(string word) {
        insertUtil(root, word);
    }

    // Recursive function to print all suggestions starting from a specific node
    void printSuggestions(TrieNode* curr, vector<string>& temp, string prefix) {
        // If the node is a word, add the prefix to the suggestions list
        if (curr->isTerminal) {
            temp.push_back(prefix);
        }

        // Explore all possible child nodes
        for (char ch = 'a'; ch <= 'z'; ch++) {
            TrieNode* next = curr->children[ch - 'a'];
            if (next != NULL) {
                // Add the character to the prefix
                prefix.push_back(ch);
                // Recursively explore the child node
                printSuggestions(next, temp, prefix);
                // Remove the character from the prefix
                prefix.pop_back();
            }
        }
    }

    // Public function to get suggestions for a given prefix
    vector<vector<string>> getSuggestions(string s) {
        TrieNode* prev = root;
        vector<vector<string>> output;
        string prefix = "";

        // Traverse the Trie based on the prefix characters
        for (int i = 0; i < s.length(); i++) {
            char lastCh = s[i];
            prefix.push_back(lastCh);

            TrieNode* curr = prev->children[lastCh - 'a'];

            // If no child node exists, break and return empty suggestions for remaining characters
            if (curr == NULL) {
                break;
            }

            // Get suggestions starting from the current node
            vector<string> temp;
            printSuggestions(curr, temp, prefix);
            output.push_back(temp);
            temp.clear();
            prev = curr;
        }

        // Add empty suggestions for remaining characters if any
        int remaining = s.size() - output.size();
        for (int i = 0; i < remaining; i++) {
            output.push_back({"0"});
        }

        return output;
    }
};

class Solution{
public:
    vector<vector<string>> displayContacts(int n, string contact[], string s)
    {
        // code here
         // Create a new Trie instance
        Trie* t = new Trie();

        // Insert all contact words into the Trie
        for (int i = 0; i < n; i++) {
            string str = contact[i];
            t->insertWord(str);
        }

        // Get suggestions for the given prefix
        return t->getSuggestions(s);
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string contact[n], s;
        for(int i = 0;i < n;i++)
            cin>>contact[i];
        cin>>s;
        
        Solution ob;
        vector<vector<string>> ans = ob.displayContacts(n, contact, s);
        for(int i = 0;i < ans.size();i++){
            for(auto u: ans[i])
                cout<<u<<" ";
            cout<<"\n";
        }
    }
    return 0;
}
// } Driver Code Ends