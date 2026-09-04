class Solution {
public:
    int minAddToMakeValid(string s) {
        int count=0;
        int sum=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('&&s[i+1]==')'){
                continue;
            }
            else (s[i]==')'){
                sum++;
            }
        }
        return abs(sum-count);
        
    }
};