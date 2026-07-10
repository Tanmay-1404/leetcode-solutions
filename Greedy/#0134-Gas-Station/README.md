# 134. Gas Station
Difficulty: Medium
Topics: Greedy Algorithm

https://leetcode.com/problems/gas-station/description/

## Approach: 
1. If gas - cost at a particular station is negative, that station can definitely not be the starting point.
2. If total gas - cost at all stations is negative, then the car can never complete the circle, hence return -1.
3. Keep a start pointer that indicates the starting station.
4. Calculate (gas - cost) at every station, if it is negative, then move the start pointer to the next station.

## Time Complexity: 
O(n)

## Space complexity:
O(1)
