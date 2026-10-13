class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n = nums.size();
        long long tot = 0;
        for(int &x : nums){
            tot +=1LL * (x * x);
            if( x < 0){
                x += abs(2*x);
            }
        }
        cout << tot << endl;
        sort(nums.begin(),nums.end());
        
        for(int i = 0;i< n/2 ;i++){
            tot -= 1LL * 2*abs((nums[i]*nums[i]));
            cout << tot << endl;
        }
         return tot;
    }
};