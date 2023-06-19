class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int currentAltitude=0;
        int highestPoint = currentAltitude;
        
        for(int Altitude_Gain : gain){
            currentAltitude += Altitude_Gain;
            highestPoint = max(highestPoint,currentAltitude);
        }
        
        return highestPoint;
        
    }
};