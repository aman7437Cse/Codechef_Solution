class Solution {
public:
    int countPrimes(int n) {
        
        
        int primecount=0;

        for(int i=2;i<n;i++){
           int count=0; 
        for(int j=1;j<=i;j++){
            if(i%j==0){
                count++;
            }
        }
        if(count==2){
            primecount++;
        }
        }
        return primecount;
    }
};