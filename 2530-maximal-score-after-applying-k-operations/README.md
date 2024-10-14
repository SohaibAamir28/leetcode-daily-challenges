# Maximal Score After Applying K Operations

## Problem Description

You are given a `0`-indexed integer array `nums` and an integer `k`. You start with a score of 0.

In one operation:
- Choose an index `i` such that `0 <= i < nums.length`.
- Increase your score by `nums[i]`, and replace `nums[i]` with `ceil(nums[i] / 3)`.

You need to perform exactly `k` operations. The goal is to maximize the score after `k` operations.

The **ceiling function** `ceil(val)` is the least integer greater than or equal to `val`.

### Example 1:

Input: nums = [10,10,10,10,10], k = 5 Output: 50 Explanation: Apply the operation to each array element exactly once. The final score is 10 + 10 + 10 + 10 + 10 = 50.

### Example 2:

Input: nums = [1,10,3,3,3], k = 3 Output: 17 Explanation:

Operation 1: Select i = 1, so nums becomes [1,4,3,3,3]. Score increases by 10.
Operation 2: Select i = 1, so nums becomes [1,2,3,3,3]. Score increases by 4.
Operation 3: Select i = 2, so nums becomes [1,1,1,3,3]. Score increases by 3. The final score is 10 + 4 + 3 = 17.


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

Visit Solution.cpp

## How to Run

### Clone the repository.
Compile the code using a C++17 compatible compiler:
    g++ -std=c++17 -o solution solution.cpp
### Run the executable:
    ./solution

## License
### This project is licensed under the MIT License.
    This `README.md` includes the problem description, example, approach, time complexity, and steps to run the code, making it suitable for a GitHub repository.
