# 1091. Shortest Path In Binary Matrix

Difficulty: Medium
Topics: Graphs (Shortest path algorithms)

https://leetcode.com/problems/shortest-path-in-binary-matrix/description/

## Approach:
1. Make a distance array similar to given grid and initialize with INT_MAX.
2. Initialize delRow and delCol arrays to traverse all the neighbouring elements of a node.
3. Use a queue whose element stores : <pair<DISTANCE, pair<X,Y>>
4. Initialize (0,0) position of distance array to 0.
5. Push {1,{0,0}} into the queue.
6. Use the del arrays to go to the neighbouring nodes and update distance. Conditions: The neighbouring node must not go outside the boundary of the grid, and currect distance + 1 < neighbouring node distance.
7. If we reach {n-1, n-1} where n = grid.size(), then return the distance.
8. Edge cases:
9. - if grid[0][0]==1, return -1.
   - if n==1 return 1.

## Time Complexity:
Initialising distance matrix + BFS traversal : O(N^2)

## Space complexity:
Distance matrix + queue + direction arrays : O(N^2) + O(N^2) + constant = O(N^2)

## Learnings:
I learnt how to use BFS traversal in a grid question for the first time.
