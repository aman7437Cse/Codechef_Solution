class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<char> st;
        for(char a:s){
            if(a=='('){
                st.push(a);

            }
        }
        return st.size();
    }
};