class Solution {
public:
    string finalString(string s) {
        string temp;
        for(int i=0;i<s.length(); i++)
        {
            if(s[i]=='i')
            {
                int a=0; 
                int b=temp.length()-1;
                
                while(a<b)
                {
                    swap(temp[a++], temp[b--]);
                }
                
                s.erase(s.begin()+i);
                cout<<s<<endl;
                cout<<"temp: "<<temp<<endl;
                
                i--;
                
                cout<<"i: "<<i;
            }
            else
            {
                temp.push_back(s[i]);
            }
        }
        return temp;
    }
};