class Solution {
public:
    string convertToBase7(int num) {
        if(num==0){
            return "0";
        }
        string ans="";
        int n=abs(num);
        while(n>0){
            int r=n%7;
            ans=to_string(r)+ans;
            n=n/7;
        }
        if(num<0){
            ans="-"+ans;
        }
        return ans;

        
    }
};