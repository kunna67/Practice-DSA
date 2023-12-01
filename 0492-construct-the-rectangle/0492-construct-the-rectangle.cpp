class Solution {
public:
    vector<int> constructRectangle(int area) {
        vector<int> v;
        int root;
        root=sqrt(area);

        for(root; root>0;root--)
        {
            if(area%root==0)
            {
                v.push_back(area/root);
                v.push_back(root);
                break;
            }
        }
        return v;
    }

};