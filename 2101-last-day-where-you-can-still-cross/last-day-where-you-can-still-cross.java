class Solution {
    private int find(int ldr[], int node) {
        if (ldr[node] != node){
              ldr[node] = find(ldr,ldr[node]);
        }
        return ldr[node];
    }

    private void join(int ldr[], int lt, int rt) {
        ldr[find(ldr, rt)] = find(ldr, lt);
    }
    public int latestDayToCross(int R, int C, int[][] cells) {
        int diff[] = {-1,0,1,0,-1,-1,1,1,-1};
        
         int ldr[]=new int[(R*C) + 2];
         for(int n = 1 ; n<R*C+2 ;n++){
            ldr[n] = n;
         }
         boolean iswtr[] = new boolean[(R*C)+2];
         int days = 0;
         for(int[] cols : cells){
            int r = cols[0]-1;
            int c = cols[1]-1;
            int curr = r * C + c + 1;
            iswtr[curr] = true;
            if(c == 0){
                join(ldr,0,curr);
            }
            if(c == C-1){
                join(ldr,curr,R*C+1);
            }
            for(int i = 0 ;i < 8;i++ ){
                int ar = r + diff[i] , ac = c + diff[i+1];
                if(ar >= 0 && ar < R && ac >= 0 && ac < C){
                    int adj = ar * C + ac + 1;
                    if(iswtr[adj] == true){
                        join(ldr,curr,adj);
                    }
                }
                if(find(ldr,0) == find(ldr,R*C+1)){
                    return days;
                }
            }
                days++;
                

            
            
        }
        return days;
    }
}