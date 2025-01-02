# Count Vowel Strings in Ranges

## Problem Description

You are given a 0-indexed array of strings `words` and a 2D array of integers `queries`.

Each query `queries[i] = [li, ri]` asks us to find the number of strings present in the range `li` to `ri` (both inclusive) of `words` that start and end with a vowel.

Return an array `ans` of size `queries.length`, where `ans[i]` is the answer to the `i`th query.

### Notes:
- Vowel letters are `'a'`, `'e'`, `'i'`, `'o'`, and `'u'`.

---

## Examples

### Example 1:

**Input:**  
`words = ["aba", "bcb", "ece", "aa", "e"]`  
`queries = [[0, 2], [1, 4], [1, 1]]`

**Output:**  
`[2, 3, 0]`

**Explanation:**  
- The strings starting and ending with a vowel are "aba", "ece", "aa", and "e".
- For the query `[0, 2]`, the answer is `2` (strings "aba" and "ece").
- For the query `[1, 4]`, the answer is `3` (strings "ece", "aa", "e").
- For the query `[1, 1]`, the answer is `0`.

### Example 2:

**Input:**  
`words = ["a", "e", "i"]`  
`queries = [[0, 2], [0, 1], [2, 2]]`

**Output:**  
`[3, 2, 1]`

**Explanation:**  
- Every string satisfies the conditions, so we return `[3, 2, 1]`.

---

## Constraints

- `1 <= words.length <= 10^5`
- `1 <= words[i].length <= 40`
- `words[i]` consists only of lowercase English letters.
- `sum(words[i].length) <= 3 * 10^5`
- `1 <= queries.length <= 10^5`
- `0 <= li <= ri < words.length`

---

## Approach

The problem involves querying ranges to count strings starting and ending with vowels. To efficiently handle multiple queries, we use a **prefix sum technique**:

### Steps:
1. Preprocess the `words` array to create a `prefix_sum` array where:
   - `prefix_sum[i]` stores the cumulative count of vowel strings up to the `i`th index.
2. For each query `[li, ri]`, calculate the result as:
   - `prefix_sum[ri + 1] - prefix_sum[li]`
   
This ensures efficient query handling in `O(1)` per query after preprocessing.

---

## Code

```python
class Solution:
    def vowelStrings(self, words: List[str], queries: List[List[int]]) -> List[int]:
        n = len(words)
        prefix_sum = [0] * (n + 1)
        vowels = {'a', 'e', 'i', 'o', 'u'}

        for i in range(n):
            prefix_sum[i + 1] = prefix_sum[i]
            if words[i][0] in vowels and words[i][-1] in vowels:
                prefix_sum[i + 1] += 1

        results = []
        for li, ri in queries:
            results.append(prefix_sum[ri + 1] - prefix_sum[li])

        return results
```

---

## Complexity Analysis

### Time Complexity:
- **Preprocessing:** `O(n)` for creating the `prefix_sum` array.
- **Query Handling:** `O(1)` per query, resulting in `O(q)` for `q` queries.

**Total:** `O(n + q)`

### Space Complexity:
- `O(n)` for the `prefix_sum` array.

---

## Usage

To use the solution:
1. Import the `Solution` class.
2. Create an instance of the class.
3. Call the `vowelStrings` method with `words` and `queries` as inputs.

### Example:
```python
solution = Solution()
words = ["aba", "bcb", "ece", "aa", "e"]
queries = [[0, 2], [1, 4], [1, 1]]
print(solution.vowelStrings(words, queries))  # Output: [2, 3, 0]
