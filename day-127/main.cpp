class Solution {
<<<<<<< HEAD
    public:
        vector<int> constructDistancedSequence(int n) {
            vector<int> result(2 * n - 1, 0);
            vector<bool> used(n + 1, false);
            backtrack(result, used, n, 0);
            return result;
        }
    
    private:
        bool backtrack(vector<int>& result, vector<bool>& used, int n, int index) {
            while (index < result.size() && result[index] != 0) {
                index++;
            }
            if (index == result.size()) {
                return true;
            }
    
            for (int i = n; i >= 1; i--) {
                if (used[i]) continue;
    
                if (i == 1) {
                    result[index] = 1;
                    used[1] = true;
                    if (backtrack(result, used, n, index + 1)) return true;
                    result[index] = 0;
                    used[1] = false;
                } else if (index + i < result.size() && result[index + i] == 0) {
                    result[index] = i;
                    result[index + i] = i;
                    used[i] = true;
                    if (backtrack(result, used, n, index + 1)) return true;
                    result[index] = 0;
                    result[index + i] = 0;
                    used[i] = false;
                }
            }
            return false;
        }
    };
=======
public:
    static inline bool partition(int x, int target) {
        if (x==target) return 1;
        if (x==0) return target==0; 
        const int m0=min(x, 1000); 
        [[unroll]] 
        for (int m=10; m<=m0; m*=10) {
            if (partition(x/m, target-x%m)) return 1;
        }
        return 0;
    }

    static int punishmentNumber(int n) {
        int sum=0;
        for (int i=1; i<=n; i++) {
            const int x=i*i;
            sum+=(partition(x, i))?x:0;
        }
        return sum;
    }
};
>>>>>>> 8a32fa5f47e8a31c37821d168c71de5b96d860e6
