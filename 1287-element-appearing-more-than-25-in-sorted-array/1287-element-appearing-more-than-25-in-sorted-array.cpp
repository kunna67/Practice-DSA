class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {

      
        int n=arr.size();
       int  y=(n*25)/100;

       // MAP KO FILL KAR RAHE HN
        map<int,int>mp;
        for(auto it : arr)
        {
            mp[it]++;
        }

        // array KE ANDAR TRAVERSE KAR RAHE  AUR DEKH RAHE KI ARRAY KA ith ELEMENT KI FREQUENCY MAP KE ANDAR 25% (Y) SE ZADA HAI YA NAHI.
       for(int i=0;i<n;i++)
       {
          if(mp[arr[i]]>y)
          {
              return arr[i];
          }
       }
       return -1;
    }
};