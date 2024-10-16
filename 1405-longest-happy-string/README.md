# 1405. Longest Happy String

## Problem Statement
A string `s` is called happy if it satisfies the following conditions:
- `s` only contains the letters `'a'`, `'b'`, and `'c'`.
- `s` does not contain any of `"aaa"`, `"bbb"`, or `"ccc"` as a substring.
- `s` contains at most `a` occurrences of the letter `'a'`.
- `s` contains at most `b` occurrences of the letter `'b'`.
- `s` contains at most `c` occurrences of the letter `'c'`.

Given three integers `a`, `b`, and `c`, return the longest possible happy string. If there are multiple longest happy strings, return any of them. If there is no such string, return the empty string `""`.

A substring is a contiguous sequence of characters within a string.

### Constraints:
- `0 <= a, b, c <= 100`
- `a + b + c > 0`

## Example 1:
**Input**:
```text
a = 1, b = 1, c = 7

**Output:**:
"ccaccbcc"

### Explanation: One possible valid output is "ccbccacc". In this example, we have successfully grouped the characters without violating the happy string conditions (no consecutive "aaa", "bbb", or "ccc").


## Example 2:
**Input**:
```text
a = 7, b = 1, c = 0

**Output:**:
"aabaa"

### Explanation: It is the only correct answer in this case as we can only use at most 2 consecutive a characters, and we have a single b character.


## Solution
## Approach:
### The solution can be tackled by using a max heap to always prioritize the letter with the highest count. Each time we add a letter, we reduce its count and check if adding it would create a forbidden sequence (like "aaa", "bbb", or "ccc"). If such a sequence is created, we backtrack and choose the second-highest letter. This process ensures that we maximize the string length while maintaining the "happy" conditions.

### We maintain a heap of the available characters where the priority is determined by the count of the characters. We always pick the character with the highest count and append it to the result. If the top character cannot be appended (due to violating the "happy" condition), we pick the second-highest character and push the first one back into the heap.

## Time Complexity:
### O(n log 3): We are building a result string of length n = a + b + c. For each addition to the string, ### we perform an operation on the heap, which takes log 3 time (since we only have 3 characters).
## Space Complexity:
### O(1): The algorithm uses constant extra space, apart from the space needed for the result string.

How to Contribute
Feel free to fork this repository, open a pull request, and contribute with solutions in C++, Java, Python, or other languages, or improve existing solutions.

## License
### This project is licensed under the MIT License.