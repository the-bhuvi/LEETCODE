class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int> st;
        st.push(0);
        for(char x : s){
            if(x == '('){
                st.push(0);
            }else{
                int a = st.top();st.pop();
                int b = st.top();st.pop();
                st.push(b + max(a*2,1));
            }
        } 
        return st.top();
    }
};