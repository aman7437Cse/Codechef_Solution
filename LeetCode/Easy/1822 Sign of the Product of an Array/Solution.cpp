class Solution {
public:
    int arraySign(vector<int>& nums) {
        int mult=1;
        int ans;
        for(int i=0;i<nums.size();i++){
            mult=mult*nums[i];
        }
        if(mult>0){
            ans=1;

        }
        else if(mult==0){
            ans=0;
        }
        else{
            ans=-1;
        }
        return ans;
    }
};