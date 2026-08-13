class Solution {
    private int find(int ldr[], int node) {
        if (ldr[node] != node) {
            ldr[node] = find(ldr, ldr[node]);
        }
        return ldr[node];
    }

    private void join(int ldr[], int lt, int rt) {
        ldr[find(ldr, rt)] = find(ldr, lt);
    }

    public int findCircleNum(int[][] g) {
        int N = g.length;
        int[] ldr = new int[N];

        for (int i = 0; i < N; i++) {
            ldr[i] = i;
        }

        for (int row = 0; row < N; row++) {
            for (int col = row + 1; col < N; col++) {
                if (g[row][col] == 1) {
                    join(ldr, row, col);
                }
            }
        }

        int provinces = 0;
        for (int i = 0; i < N; i++) {
            if (find(ldr, i) == i) {
                provinces++;
            }
        }
        return provinces;
    }
}