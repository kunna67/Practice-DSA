class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration)
    {
        int time=0;

        for(int i=0; i<timeSeries.size()-1; i++)
        {
            int timeDiff = timeSeries[i+1]-timeSeries[i];

            time += (timeDiff < duration) ? (timeDiff) : (duration);
        }

        time += duration;

        return time;
    }
};
