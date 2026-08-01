class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int sum = 0; 
        int n = nums.size()-1;
        long  val = 0;
        for(int i = 0 ; i<=n ; i++){
            sum+=nums[i];
            val+=1LL * nums[i]*i;
        }
        long ans=val;
        for(int li = n ;li >=0 ;li--){
            val = val + sum - 1LL*(nums[li]*(n+1));  
            ans = max(val,ans); 
        }
        return (int)ans;
    }
};