# 2938. Separate Black and White Balls

## Problem Statement
There are `n` balls on a table, each ball has a color, either black or white.

You are given a 0-indexed binary string `s` of length `n`, where `1` and `0` represent black and white balls, respectively.

In each step, you can choose two adjacent balls and swap them.

Return the minimum number of steps to group all the black balls to the right and all the white balls to the left.

### Constraints:
- `1 <= n == s.length <= 10^5`
- `s[i]` is either `'0'` or `'1'`.

## Example 1:
**Input**: 
```text
s = "101"

## **Output:**
    1

##  Explanation: We can group all the black balls to the right in the following way:

Swap s[0] and s[1], resulting in s = "011". Initially, the 1's are not grouped together, requiring at least 1 step.

Example 3:

**Input:**
s = "0111"

**Output:**
0

## Solution
### Approach:
We can solve the problem by counting the number of steps it takes to move all the black balls (1s) to the right. As we traverse the string, we count how many 1s (black balls) we've encountered so far and calculate how many swaps are required to bring all the 1s to the right by swapping them over the 0s (white balls).

## Time Complexity:
### O(n): We traverse the string s once, where n is the length of the string.
## Space Complexity:
### O(1): The algorithm uses a constant amount of extra space regardless of the input size.

## How to Contribute
### Feel free to fork this repository, open a pull request, and contribute with solutions in C++, Java, Python, or other languages, or improve existing solutions.

## License
### This project is licensed under the MIT License.


### Folder Structure:
- **Folder Name**: `2938-separate-black-and-white-balls/`
- **Files**:
  - `solution.py` (Python solution)
  - `solution.cpp` (C++ solution)
  - `Solution.java` (Java solution)
  - `README.md` (which includes the problem statement, solution approach, and complexity analysis)

---

This setup ensures that the problem is well-documented with solutions in multiple languages and also includes a clear explanation of the time and space complexity analysis. Feel free to extend the folder with more language solutions like C++ or Java!
