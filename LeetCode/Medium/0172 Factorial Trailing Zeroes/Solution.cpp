class Solution {
public:
    int fact(int n){
        if(n==1 || n==0){
            return 1;
        }
        return n*fact(n-1);
    }
    int trailingZeroes(int n) {
        vector <int> v;
        int count=0;
        int a=fact(n);
        while(a>0){
            int digit=a%10;
            v.push_back(digit);
            a=a/10;

        }
        for(int j=0;j<v.size();j++){
            if(v[j]==0){
                count++;
            }
        }
        return count;
    }
};