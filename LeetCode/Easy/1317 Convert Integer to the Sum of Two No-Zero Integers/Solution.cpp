class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {
        vector <int> v;
        int j=1;
        for(int i=1;i<n;i++){
            
                if(i+j==n){
                    v.push_back(i);
                    v.push_back(j);
                    j++;
                }
            
        }
        return v;
    }
};