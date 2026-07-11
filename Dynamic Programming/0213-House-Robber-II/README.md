# 213. House Robber II
Difficulty: Medium

Topics: Dynamic Programming

https://leetcode.com/problems/house-robber-ii/

## Approach:
- It is an extension of House Robber I.
- Make a separate function of the same code as House Robber I.
- Basic idea is to prevent the first and last elements from being adjacent.
- Hence, make two separate vectors, in which one stores the first element excluding the last one, and the other stores the last element excluding the first one.
- Then run the function on both the arrays, and return the maximum answer.

## Time Complexity:
O(n) + O(n) = O(n)

## Space Complexity:
dp array + temp1 + temp2 = O(n)+O(n)+O(n) = O(n)

## Learning:
Divide the array into two arrays, two prevent the first and last element from being adjacent to each other.
