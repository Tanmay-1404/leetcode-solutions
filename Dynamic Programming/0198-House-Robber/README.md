# 198. house Robber
Difficulty: Medium
Topics: Dynamic Programming
https://leetcode.com/problems/house-robber/

## Approach -
1. Recursion (Exceeds time limit):
   - Base cases: if (index == 0) return nums[idx], if (index == negative) return 0
   - Left recursion = nums[idx] + f(idx - 2)  // Include the non adjacent element
   - Right recursion = f(idx-1)  // Don't include the non-adjacent element
   - return max(left, right)

2. Memoization (dp):
   - Initialise dp(n,-1)
   - Add another base case: if (dp[idx] != -1) return dp[idx]  // this means if the index has already been visited then return that value
   - return dp[idx] = max(left,right)

3. Tabulation (removes recursion stack space):
   - initialise dp(n,-1)
   - let 0th index = nums[0]
   - use a for loop from 1 to n-1
   - to take the non-adjacent index : if i>1 take = nums[idx] + dp[i-2]
   - to not take the adjacent index : notTake = dp[i-1]
   - dp[i] = max(left,right)
   - return the n-1 th dp value.

## Time Complexity:
Tabulation : O(n)

## Space complexity:
dp array : O(n)
