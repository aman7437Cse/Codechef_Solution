class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int ans;
        if(nums.size()<2){
            return 0;
        }
        else{
        int max=nums[nums.size()-1]+nums[nums.size()-2];
        int min=nums[0]+nums[1];
        ans=abs(max-min);
        }
        return ans;
    }
};