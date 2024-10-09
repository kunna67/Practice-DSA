class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char>st;
        for(char &c:s){
            if(c==')'){
                if(!st.empty() && st.top()=='('){
                    st.pop();
                    continue;
                }
            }
            st.push(c);
        }
        return st.size();
    }
};
