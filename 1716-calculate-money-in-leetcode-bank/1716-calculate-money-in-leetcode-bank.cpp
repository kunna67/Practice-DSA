class Solution {
public:
    int totalMoney(int n) {

        int money = 0;
   
        int week = 0;
        int day = 0;
        int pre;

        while(day<n){

            if(day%7==0){
               week+=1;
                pre = week;
            }else{
                 pre +=1;
            }
            

            money+=pre;

            
            day++;

        }

        return money;
        
    }
};
