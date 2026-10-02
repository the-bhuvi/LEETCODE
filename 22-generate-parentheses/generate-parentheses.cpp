class Solution {
public:
    void backtrack(vector<string> &res,int open,int close,int n,string &s){
        
        if(open == close && open == n){
            res.push_back(s);
            return;
            //cout << s << endl;
        }
        if(open < n){
            s.push_back('(');
            backtrack(res,open+1,close,n,s);
            s.pop_back();

        }
        if(open > close){
            s.push_back(')');
            backtrack(res,open,close+1,n,s);
            s.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        string temp = "";
        backtrack(res,0,0,n,temp);
        return res;

    }
};