class Solution {
public:
    int find(int node,vector<int>&par)  // finding parent function
    {
        if(par[node]==node)return node;
        return par[node]=find(par[node],par);
    }
    void unionn(int a,int b,int &cnt,vector<int>&rank,vector<int>&par)
    {
        a=find(a,par);            //uniting the dots (UNION FUNCTION)
        b=find(b,par);
        
        if(a!=b)
        {
            if(rank[a]>rank[b])par[b]=a;
            else if(rank[b]>rank[a])par[a]=b;
            else{
                par[b]=a;
                rank[a]++;
            }
        }
        else
            cnt++;            //  if the dots are already in the same set ie they are forming cycle and thus is                                   a seperate component.
                              //  Hence increase the cnt
    }
    int regionsBySlashes(vector<string>& grid) {
        int n=grid.size();
        int dot=n+1;
        int cnt=1;   // intial count is 1 because the grid without any partitions is also a component.
        
        vector<int>par(dot*dot);
        vector<int>rank(dot*dot);
        
        for(int i=0;i<dot*dot;i++)par[i]=i;     // intializing the parent and ranks of all dots.
        for(int i=0;i<dot*dot;i++)rank[i]=1;
        
        for(int i=0;i<dot;i++)
        {
            for(int j=0;j<dot;j++)
            {
                if(i==0 || j==0 || i==dot-1 || j==dot-1)      // initially all the boundary dots are connected 
                {                                            // So we take union of all of them with 0.
                     int dotno=(i*dot)+j;                  // connecting all boundar dots to leftmost dot(ie 0)
                    if(dotno!=0)unionn(0,dotno,cnt,rank,par);
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]=='/')
                {
                    int dot1=(i*dot)+(j+1);      // calculating the corresponding dots that will get connected.
                    int dot2=((i+1)*dot)+j;    
                     unionn(dot1,dot2,cnt,rank,par);   // connecting them
                    
                }
                else if(grid[i][j]=='\\')
                {
                    int dot1=(i*dot)+j;
                    int dot2=((i+1)*dot)+(j+1);
                    unionn(dot1,dot2,cnt,rank,par);   
                }
           }
        }
        return cnt;
        
}
};