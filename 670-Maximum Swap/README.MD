# 670. Maximum Swap

## Problem Statement
You are given an integer `num`. You can swap two digits at most once to get the maximum valued number.

Return the maximum valued number you can get.

### Constraints:
- `0 <= num <= 10^8`

## Example 1:
**Input**:
```text
num = 2736

**Output:**
7236

### Explanation: Swap the number 2 and the number 7 to get 7236, which is the largest possible number you can get by swapping two digits.


## Example 2:
**Input:**
num = 9973

**Output:**
9973

**Explanation:** No swap can make the number larger, so the output remains 9973.
Solution

## Approach:
### Convert the number to a list of characters: This allows us to manipulate each digit easily.
### Track the last occurrence of each digit: We store the last index of each digit (from 0 to 9) in the number.
### Traverse the number: We iterate from left to right, and for each digit, we check if there's a larger digit (from 9 down to the current digit) that appears later in the number.
### Swap and return: If we find such a larger digit, we swap it with the current digit and return the new number.
No swap needed: If no valid swap is found, return the original number as it's already the maximum possible.
## Time Complexity:
### O(n): We traverse the number twice, once to record the last occurrence of each digit and another to check for possible swaps, where n is the number of digits in num.
## Space Complexity:
### O(n): We use extra space for the list of characters representing the digits of num.