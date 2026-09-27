class Solution {
    public String reverseParentheses(String s) {
        Stack<StringBuilder> stk = new Stack<>();
        StringBuilder curr = new StringBuilder(); 
        for(char c : s.toCharArray()){
            if(c == '('){
                stk.push(curr);
                curr = new StringBuilder();
            }else if(c == ')'){
                curr.reverse();
                StringBuilder p = stk.pop();
                p.append(curr);
                curr = p;
            }else{
                curr.append(c);
            }
        }
        return curr.toString(); 
    }
}