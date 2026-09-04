class Solution {
public:
    int minAddToMakeValid(string s) {
        
        stack<int> s;
        int count;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                s.push(s[i]);
            }
            else if(s[i]==')'&& s.top()=='('{
               s.pop();
            }
            else{
                count++;
            }
        }
        return abs(sum-count);
        
    }
};