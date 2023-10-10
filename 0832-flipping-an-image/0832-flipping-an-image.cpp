class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        vector<vector<int>> a;
        for(int i = 0; i < image.size(); i++) {
            vector<int> tmp;
            for(int j = 0; j < image[0].size(); j++) {
                for(int k = j+1; k < image[0].size(); k++) {
                    int pom = image[i][j];
                    image[i][j] = image[i][k];
                    image[i][k] = pom;
                }
                if(image[i][j] == 0) {
                    image[i][j] = 1;
                }
                else {
                    image[i][j] = 0;
                }
                tmp.push_back(image[i][j]);
            }
            a.push_back(tmp);
        }
        return a;
    }
};