class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int diff[5] = {0,-1,0,1,0};
        queue<pair<int,int>> q;
        int oranges = 0;
        int R = grid.size();
        int C = grid[0].size();
        for(int row=0;row<R;row++){
            for(int col=0;col<C;col++){
                if(grid[row][col] == 2){
                    q.push(make_pair(row,col));
                
                }
                if(grid[row][col] == 1){
                    oranges++;
                }
            }
        }
        if(oranges == 0) return 0;
        int day = -1;
        while(!q.empty()){
            int qsize = q.size();
            day++;
            while(qsize--){
                auto [row,col] = q.front(); q.pop();
                for(int i = 0;i<4;i++){
                    int ar = row + diff[i],ac = col + diff[i+1];
                    if(ar>=0 && ar<R && ac >=0 &&ac<C ){
                        if(grid[ar][ac] == 1){
                            grid[ar][ac] = 2;
                            oranges--;
                            q.push(make_pair(ar,ac));
                        }
                    }
                }

            }

        }
        return oranges == 0 ? day : -1;

        
    }
};