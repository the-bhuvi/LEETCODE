class Solution {
    public int findLength(int[] nums1, int[] nums2) {
        int n1 = nums1.length;
        int n2 = nums2.length;
        int mat[][] = new int[n1+1][n2+1];
        
        int maxlen = 0;
        for(int i =1 ;i<=n1 ;i++){
            for(int j=1;j<=n2;j++){
                if(nums1[i-1] == nums2[j-1]){
                    mat[i][j] = mat[i-1][j-1] + 1;
                    maxlen = Math.max(mat[i][j],maxlen);
                }
            }
        }
        return maxlen;
    }
}