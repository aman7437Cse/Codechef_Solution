class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int count=0;
        int sum=0;
        int ans;
        for(int i=0;i<nums.size();i++){
            int digit=nums[i]%10;
            sum+=digit;
            nums[i]=nums[i]/10;

        }
        
        else{
            while((sum%k)!=0){
                sum=sum-1;
                count++;

            }
            ans=count;
        }
        return ans;
    
        
    }
};