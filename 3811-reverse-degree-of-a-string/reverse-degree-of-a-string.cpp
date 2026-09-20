class Solution {
public:
    int reverseDegree(string s) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int sum = 0 ;
        for(int i = 0 ;i < s.length();i++){
            sum += (('z' - s[i])+1) * (i+1);
        }
        return sum;
    }
    
};