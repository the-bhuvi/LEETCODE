class Solution {
public:
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
        ios::sync_with_stdio(false);
	    cin.tie(nullptr);
        int diff[5] = {0, -1, 0, 1, 0};
        int R = maze.size(), C = maze[0].size();
        queue<pair<int, int>> q;
        q.push(make_pair(entrance[0], entrance[1]));
        maze[entrance[0]][entrance[1]] = '+';
        int steps = -1;
        while (!q.empty()) {
            steps++;
            int qsize = q.size();
            while (qsize--) {
                auto [row, col] = q.front();
                q.pop();
                if (row == 0 || col == 0 || row == R - 1 || col == C - 1) {
                    if (steps > 0) {
                        return steps;
                    }
                }
                for (int i = 0; i < 4; i++) {
                    int ar = row + diff[i], ac = col + diff[i + 1];
                    if (ar >= 0 && ar < R && ac >= 0 && ac < C) {
                        if (maze[ar][ac] == '.') {
                            maze[ar][ac] = '+';
                            q.push(make_pair(ar, ac));
                        }
                    }
                }
            }
        }
        return -1;
    }
};