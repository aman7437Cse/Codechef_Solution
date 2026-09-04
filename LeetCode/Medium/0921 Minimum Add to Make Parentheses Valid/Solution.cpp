class Solution {
public:
    int minAddToMakeValid(string s) {
        
        stack<int> s;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                s.push(s[i]);
            }
            else if(s[i]==')'&&{
                sum++;
            }
        }
        return abs(sum-count);
        
    }
};