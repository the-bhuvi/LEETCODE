class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        ios :: sync_with_stdio(false);
        cin.tie(nullptr);
        int n = nums.size();
        long long tot = 0;
        for(int &x : nums){
            x = (x*x);
            tot += 1LL*x;     
        }
        //cout << tot << endl;
        sort(nums.begin(),nums.end());
        
        for(int i = 0;i< n/2 ;i++){
            tot -= 1LL*2*nums[i];
            cout << tot << endl;
        }
         return tot;
    }
};