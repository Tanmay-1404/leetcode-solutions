# 503. Next Greater Element II

Difficulty: Medium

Topics: Monotonic stack

https://leetcode.com/problems/next-greater-element-ii/

## Approach:
1. Core Idea: Create an illusion that the array has doubled itself to create a sense of a circular array without actually doubling the array.
2. This can be done by traversing i from 2n-1 to 0th position, and taking i mod n to stay in the range of 0 to n-1.
3. By implementing the same logic of the monotonic stack as done in Next Greater Element 1 on 2n elements, we can solve this question.

## Time Complexity:
O(2n)

## Space complexity:
stack + ans array = O(2n) + O(n) = O(3n)

## Learnings:
1. To create an illusion of a circular array, we can double the same array.
