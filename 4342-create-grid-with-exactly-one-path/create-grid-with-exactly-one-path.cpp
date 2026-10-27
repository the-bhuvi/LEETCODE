class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string> res(m);
        string r = "";
        
        for(int i = 0;i < m;i++){
            for(int  j = 0 ; j < n;j++){
                if(i == 0){
                    r.push_back('.');
                }else if(j == n-1){
                    r.push_back('.');
                }else{
                    r.push_back('#');
                }
            }
            res[i] = r;
            r = "";
            
        }
        return res;
    }
};