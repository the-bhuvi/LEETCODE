class Solution {
    public List<List<Integer>> shiftGrid(int[][] grid, int k) {
        for(int i =0;i<k;i++){
            grid = shift(grid,grid.length,grid[0].length);
        }
        List<List<Integer>> a=new ArrayList<>();
        for(int []arr : grid){
            List<Integer> t=new ArrayList<>();
            for(int x:arr){
                t.add(x);

            }
            a.add(t);
        }
        return a;
        
    }
    public int[][] shift(int[][] grid,int i,int j){
        int[][] e=new int[i][j];
        for(int k=0;k<i;k++){
            for(int l=0;l<j;l++){
                if(l<j-1){
                e[k][l+1]=grid[k][l];
            }else if(l==j-1 && k!=i-1){
                e[k+1][0]=grid[k][l];
            }else if(k==i-1 && l==j-1){
                e[0][0]=grid[k][l];
            }
            }
        }
        return e;
    }
}