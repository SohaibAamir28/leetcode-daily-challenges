
### Constraints:

- `1 <= nums.length, k <= 10^5`
- `1 <= nums[i] <= 10^9`

## Approach

1. Use a **max heap** (priority queue) to keep track of the largest element in `nums`.
2. For each of the `k` operations:
   - Pop the largest element from the heap.
   - Add the element to the score.
   - Replace the element with `ceil(nums[i] / 3)` and push it back into the heap.
3. If the largest element becomes `1`, add the remaining number of operations directly to the score since further operations will only give a score of `1`.

## Time Complexity

- **Heap Operations** (push and pop) take `O(log n)`.
- Therefore, the overall complexity is `O(k log n)`, where `k` is the number of operations and `n` is the size of the array.

## Solution Code

```cpp
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        make_heap(nums.begin(), nums.end());
        long long score = 0;

        for (int i = 0; i < k; ++i) {
            pop_heap(nums.begin(), nums.end());
            int x = nums.back();
            score += x;
            nums.pop_back();

            if (x == 1) {
                score += (k - 1 - i);
                break;
            }

            nums.push_back((x + 2) / 3);
            push_heap(nums.begin(), nums.end());
        }

        return score;
    }
};

// Faster I/O
auto init = []() 
{ 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 'c';
}();
