class Solution {
public:
    bool canPlaceFlowers(vector<int>& f, int n) {
        int c=0;
        int ans=0;
        int p=0,l=0;
        if(f.size()==1&&f[0]==0)return 1;
        for(int i=0;i<f.size();i++){
            if(f[i]==0){
                if(i==0)p=1;
                if(i==f.size()-1)l=1;
                c++;
            }
            else {
                if(p)ans+=c/2;
                else if(l)ans+=c/2;
                else ans+=(c-1)/2;
                p=0,l=0;
                c=0;
            }
        }
        if(c==f.size()){
            // cout<<c<<endl;
            if(n<=(c+1)/2)return 1;
            else return 0;
        }
        if(c){
            if(p)ans+=c/2;
            else if(l)ans+=c/2;
            else ans+=(c-1)/2;
        }
        if(n<=ans)return true;
        return 0;
    }
};

