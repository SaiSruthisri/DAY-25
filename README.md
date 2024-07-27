# DAY-25
Longest subarray of 1's after deleting one element

Problem Statement

Given a binary array nums, should delete one element from it.Return the size of the longest non-empty subarray containing only 1's in the resulting array. Return 0 if there is no such subarray.

Solution Approach

Collected Segments - The v vector collects the lengths of segments of 1s separated by 0s. Each 0 is explicitly added to v to represent the positions where we can remove a zero.
In 'v' vector add the alternating non zero digits & update the maxi value.Lookout for edge cases such as all 0's & all 1's followed after 0's.


 
