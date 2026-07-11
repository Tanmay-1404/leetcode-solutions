class Solution {
public:
    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        vector<int> adj[n];
        for (auto it : edges) {
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }
        vector<int> vis(n,0);
        int ans=0;
        for (int i=0; i<n; i++) {
            if (!vis[i]) {
                vector<int> component;
                queue<int> q;
                q.push(i);
                vis[i]=1;
                while (!q.empty()) {
                    int node = q.front();
                    q.pop();
                    component.push_back(node);
                    for (int it : adj[node]) {
                        int nextNode = it;
                        if (!vis[nextNode]) {
                            q.push(nextNode);
                            vis[nextNode]=1;
                        }
                    }
                }
                bool isComplete = true;
                for (int node : component) {
                    if (adj[node].size() != component.size()-1) {
                        isComplete = false;
                        break;
                    }
                }
                if (isComplete) ans++;
            }
        }
        return ans;
    }
};
