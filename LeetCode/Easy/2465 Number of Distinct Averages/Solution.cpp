class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        vector<double> v;
        sort(nums.begin(),nums.end());


        int s=0;
        int l=nums.size()-1;
        while(l>=s){
            double avg=(nums[l]+nums[s])/2.0;
            v.push_back(avg);
            s++;
            l--;

        }
        sort(v.begin(),v.end());
        v.erase(unique(v.begin(),v.end()),v.end());
        
        return v.size();
        
    }
};