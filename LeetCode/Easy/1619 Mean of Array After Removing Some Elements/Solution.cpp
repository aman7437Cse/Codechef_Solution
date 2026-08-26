class Solution {
public:
    double trimMean(vector<int>& arr) {
       sort(arr.begin(),arr.end());
        int sum=0;
        int remove=arr.size()*0.05;
        for(int i=remove;i<arr.size()-remove;i++){
            sum=sum+arr[i];
        }
        
        double avg=(double)sum/(arr.size()-2*remove);
        return avg; 
    }
};