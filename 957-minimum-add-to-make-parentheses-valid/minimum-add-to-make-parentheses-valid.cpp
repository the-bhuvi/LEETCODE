class Solution {
public:
    int minAddToMakeValid(string s) {
        int a = 0;
        stack<int> stk;
        for(char x : s){
            if(x == '('){
                stk.push(1);

                
            }else{
                if(stk.empty()){
                    a++;
                }else{
                    stk.pop();
                }
            }
        }
        
        return a + stk.size();
    }
};