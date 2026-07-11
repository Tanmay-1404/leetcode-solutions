# 2685. Count the number of Complete Components
Difficulty: Medium

Topics: Graphs, BFS

https://leetcode.com/problems/count-the-number-of-complete-components/?envType=daily-question&envId=2026-07-11

## Approach:
1. I implemented the idea of BFS using visited array and a queue.
2. Initialise an array (components) that stores the connected components of the graph.
3. To check whether the connected components are complete, we compare the length of the components array with the length of each of the nodes in the adjacency list present in the connected component.
4. If they are equal, then it is a complete connected component.

## Time complexity:
BFS traversal : O(n+m)

## Space complexity:
Adjacency list : O(n+m)

## Learnings: 
- If the length of the components array is equal to the length of every node of the adjacency list present in the array, then it is a complete connected component.
