# 42. Trapping Rain Water

Difficulty: Hard

Topics: Array, Dynamic Programming
(This is one approach I was able to understand, without space optimization)

https://leetcode.com/problems/trapping-rain-water/

## Approach:
Key Idea: Whenever the leftMax and rightMax at a particular position of the array are greater, then the water will get trapped till the level of the smaller of the LeftMax and RightMax.
1. Maintain two arrays leftMax and rightMax.
2. For leftMax, iterate from left to right, while storing the maximum elements till that position.
3. For rightMax, iterate from right to left, while storing the maximum element till that position.
4. Then, iterate the array, while the following conditions: if height[i] < leftMax and rightMax is true, then the water trapped will be : max(leftMax, rightMax) - height[i].

## Time Complexity
O(n)

## Space complexity:
Two arrays of size n => O(n)
