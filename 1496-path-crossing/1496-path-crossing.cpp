class Solution {
public:
    bool isPathCrossing(string path) {
        pair<int,int>location = {0,0};
        map<pair<int,int>,int>mp;
        mp[{0,0}]++;
        for(auto it: path){
            if(it == 'N'){ 
                mp[{location.first + 1, location.second}]++;
                location.first += 1;
            }
            else if(it == 'E'){ 
                mp[{location.first, location.second+1}]++;
                location.second += 1;

            }
             else if(it == 'S'){ 
                mp[{location.first-1, location.second}]++;
                location.first -= 1;

            }
             else if(it == 'W'){ 
                mp[{location.first, location.second-1}]++;
                location.second -= 1;
            }
        }

        for(auto it: mp){
            if(it.second >= 2)return true;
        }
        return false;
    }
};