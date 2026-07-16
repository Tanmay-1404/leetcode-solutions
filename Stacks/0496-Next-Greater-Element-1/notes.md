## Monotonic stack:
It is a stack that maintains its elements in a strictly increasing or decreasing order from bottom to top (Strictly decreasing for this question).
Unlike a standard stack (LIFO behaviour), a monotonic stack enforces an ordering constraint: when a new element is pushed, it compares with the top of the stack, and pops any elements that violate the monotonic property before adding the new element.

## Unordered Map Implementation:
The keys are integers from nums2.
Values are their respective next greater elements.
After processing nums2, the algorithm iterates through nums1. For each element in nums1, it performs an average O(1) search time in the map to retrieve the next greater elements.
