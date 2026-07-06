## 802. Find Eventual Safe States

Difficulty: Medium
Topic: Graphs

https://leetcode.com/problems/find-eventual-safe-states/

# Approach:
1. Initiate an indegree array that stores the indegree of the nodes.
2. Reverse the edges of the graph while updating the indegree array.
3. Perform BFS using queue: 
4. If indegree==0 push node into queue and store into an array.
5. Pop the front elements of the queue while reducing the indegree of its neighbours by 1, indicating removal of that node from the graph.
6. Return the sorted array.

# Time complexity: 
Topological sort + array sorting time : O(V+E) + O(VlogV) for worst case

# Space complexity:
Storing reversed adjecency array + indegree array + queue + answer array : O(V+E) + O(V) + O(V) + O(V) : O(V+E)

# Learnings:
1. Safe nodes and Terminal nodes.
2. Reversing the edges of the graph.
