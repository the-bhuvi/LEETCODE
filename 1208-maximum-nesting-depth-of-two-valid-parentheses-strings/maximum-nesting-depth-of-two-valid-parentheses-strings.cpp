class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        int d = 0;
        vector<int> ans;
        for (auto &ch : seq) {
            if (ch == '(') {
                d++;
                ans.emplace_back(d % 2);
            } else {
                ans.emplace_back(d % 2);
                d--;
            }
        }
        return ans;
    }
};