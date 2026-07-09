# 70. Climbing stairs
Difficulty: Easy
Topics: Dynamic programming

https://leetcode.com/problems/climbing-stairs/description/

## Optimization path:
- First, I attempted the question on my own using recursion, however the time limit exceeded.
- I had to see the solution to solve the problem, and I learnt about memoization and tabulation.

## Optimized Approach:
1. Base Case: if n = 0 or 1, return 1
2. Declare two variables prev and curr equal to 1
3. Start a for loop from 2 to n, and perform the following operations:
4. - declare a temporary variable = curr
   - curr = prev+curr
   - prev = temp
5. Return curr

## Time Complexity:
O(n)

## Space Complexity:
Constant space used => O(1)

## Learnings:
- This was the beginning of my Dynamic Programming journey.
- I learnt about memoization and tabulation, and how they are different from each other.
- I learnt how tabulation is a better approach than memoization as it follows a bottom up approach and does not use recursion, hence improves time as well as space complexity.
