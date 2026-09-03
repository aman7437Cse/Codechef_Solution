class Solution {
public:

bool prime(int n){
    int count=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
        if(count==2){
            return true;
        }
        
    }
    return false;
}
    long long splitArray(vector<int>& nums) {
        
        
        long long s1=0;
        long long s2=0;
        
        for(int i=0;i<nums.size();i++){
            if(prime(i)){
                s1+=nums[i];
            }
            else{
                s2+=nums[i];
            }
            
        }
        
       

        return abs(s1-s2);;

        
    }
};