# 496. Next Greater Element 1

Difficulty: Easy

Topics: Monotonic stack

https://leetcode.com/problems/next-greater-element-i/

## Approach:
1. Create a stack to implement monotonic stack.
2. Create an unordered map to store the resulting values as per the array keys in for constant search time.
3. Core Idea: Traverse the array from the last, and create a monotonic stack.
4. Conditions:
    - if stack is empty, key=-1 for the element
    - if top of stack is greater than the element, then the next greater element is st.top()
    - if top of stack is smaller than the element, then pop the stack until st.top() is greater.
    - after checking all this, push the current element into the stack, and move the pointer backwards.

## Time Complexity:
Traversing the array: O(n)

## Space complexity:
unordered map + stack + ans array = O(n) + O(n) + O(m) (m=size of nums1 <= n) = O(3n)

## Learnings:
- What is a monotonic stack, and its implementation.
- Another implementation of an unordered map.
