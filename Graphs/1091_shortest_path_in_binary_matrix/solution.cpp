class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n = grid.size();
        int delRow[] = {0,1,1,1,0,-1,-1,-1};
        int delCol[] = {1,1,0,-1,-1,-1,0,1};
        queue<pair<int,pair<int,int>>> q;
        vector<vector<int>> dist(n, vector<int>(n, INT_MAX));
        dist[0][0]=0;
        if (grid[0][0]==1) return -1;
        if (grid[0][0]==0 && (n-1)==0) return 1;
        q.push({1,{0,0}});
        while (!q.empty()) {
            int currDis = q.front().first;
            int currNodeX = q.front().second.first;
            int currNodeY = q.front().second.second;
            q.pop();
            for (int i=0; i<8; i++) {
                int nextNodeX = currNodeX + delRow[i];
                int nextNodeY = currNodeY + delCol[i];
                if (nextNodeX >=0 && nextNodeX <n && nextNodeY >=0 && nextNodeY < n && grid[nextNodeX][nextNodeY]==0 && currDis+1 < dist[nextNodeX][nextNodeY]) {
                    dist[nextNodeX][nextNodeY] = currDis+1;
                    if (nextNodeX == n-1 && nextNodeY == n-1) return currDis+1;
                    q.push({1+currDis, {nextNodeX,nextNodeY}});
                }
            }
        }
        return -1;
    }
};
