class Solution {
public:
    vector<string> ans;
    
    void fun(int left,int right,string s)
    {
        if(left<0||right<0)
        {
          return;
        }
        if(left==0 and right==0)
        {
          ans.push_back(s);
          return;
        }
      
       fun(left-1,right,s+"(");
	   
       if(right>left)
	   {
	   fun(left,right-1,s+")");
	   }
    }
    
    vector<string> generateParenthesis(int n) {
        fun(n,n,"");
        return ans;
    }
};
