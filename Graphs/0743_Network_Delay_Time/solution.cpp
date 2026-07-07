class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<pair<int,int>> adj[n+1];
        for (auto it : times) {
            adj[it[0]].push_back({it[1],it[2]});
        }
        vector<int> dist(n+1,INT_MAX);
        dist[k]=0;
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> q;
        q.push({0,k});
        while (!q.empty()) {
            int currDis = q.top().first;
            int node = q.top().second;
            q.pop();
            if (currDis > dist[node]) continue;
            for (auto it : adj[node]) {
                int nextNode = it.first;
                int weight = it.second;
                if (currDis + weight < dist[nextNode]) {
                    dist[nextNode] = currDis + weight;
                    q.push({currDis+weight, nextNode});
                }
            }
        }
        int ans = 0;
        for (int i=1; i<=n; i++) {
            if (dist[i]==INT_MAX) return -1;
            ans = max(ans, dist[i]);
        }
        return ans;
    }
};
