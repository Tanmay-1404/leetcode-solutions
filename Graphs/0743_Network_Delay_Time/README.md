# 743. Network Delay Time
Difficulty: Medium
Topics: Dijkstra's Algorithm

## Approach:
1. Make adjacency matrix.
2. Initialise distance vector.
3. Initialise and min heap and store pair<DISTANCE, NODE> in the heap.
4. Apply Dijkstra's Algorithm to find the distances of each node.
5. Return the maximum valeu from distance vector or -1 if INT_MAX is found.

## Time Complexity:
Dijkstra's Algorithm on a DAG using priority queue: O(ElogV)

## Space complexity:
Adjacency list + Distance vector + priority queue : O(V+E) + O(V) + O(E) = O(V+E)
