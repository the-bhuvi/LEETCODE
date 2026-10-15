class Solution {
    public int sumCounts(List<Integer> nums) {
        int ans = 0, n = nums.size();

        // Step 1: every index i is a start of a subarray
        for (int i = 0; i < n; i++) {
            
            Set<Integer> set = new HashSet<>();

          
            for (int j = i; j < n; j++) {
                set.add(nums.get(j));      
                int count = set.size();     
                ans += count * count;       
            }
        }
        return ans;
    }
}