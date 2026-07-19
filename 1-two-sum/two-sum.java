class Solution {
    public int[] twoSum1(int[] nums, int target) {
        int n = nums.length;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]+nums[j]==target){
                    return new int[] {i,j};
                }
            }
        }
        return new int[] {0,0};
    }
    public int[] twoSum(int[] nums, int target) {
        HashMap <Integer,Integer> map= new HashMap<>();
        map.put(nums[0],0);
        for(int i=1;i<nums.length;i++){
            int n=target-nums[i];
            if(map.containsKey(n)){
                return new int[] {i,map.get(n)};
            }
            map.put(nums[i],i);

            }
        return new int[]{0,0};
        }
    }
        
