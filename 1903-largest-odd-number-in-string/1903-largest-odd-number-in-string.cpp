class Solution {
public:
    string largestOddNumber(string num) {
        string even="";
        string odd="";
        for(int i=0;i<num.size();i++){
            int digit=num[i]-'0';
            if(digit%2==0){
                even+=num[i];
            }
            else{
                odd+=even;
                even="";
                odd+=num[i];
            }

        }
        return odd;
    }
};