class Solution {
public:
    int maxDepth(string s) {
        int maxi  = 0 ;
        int cnt = 0 ;
        for(char x : s){
            if(x == '('){
                cnt++;
            }
            if(x == ')'){
                cnt--;
            }
            maxi = max(cnt,maxi);
        } 
        return maxi;
    }
};