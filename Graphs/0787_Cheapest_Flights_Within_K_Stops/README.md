# 787. Cheapest Flights Within K Stops
Difficulty: Medium
Topic: Graphs, Shortest path

https://leetcode.com/problems/cheapest-flights-within-k-stops/description/

## Approach:
1. Make the adjacency matrix
2. Queue structure stores : pair<STOPS, pair<NODE, DISTANCE>> : Hence, the priority here is the number of stops instead of the distance.
3. Initialize distance vector
4. Apply dijkstra's algorithm on the graph until it reaches the destination node.
5. If dist[destination] is infinite, return -1.

## Time Complexity:
Since priority queue is not used, logV is removed => O(E) where E=Number of Edges

## Space Complexity:
adjacency matrix + queue + distance vector => O(E) + O(E) + O(V)

## Learnings:
Instead of using distance as priority, we used the number of stops as the priority and then applied Dijkstra's Algorithm.
