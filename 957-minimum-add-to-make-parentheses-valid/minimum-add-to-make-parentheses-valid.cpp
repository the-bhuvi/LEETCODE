class Solution {
public:
    int minAddToMakeValid(string s) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
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