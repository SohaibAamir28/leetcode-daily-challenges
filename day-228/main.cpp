class Solution {
public:
<<<<<<< HEAD
    int candy(vector<int>& ratings, int cnt = 0) {
        int n = ratings.size();
        vector<int> candies(n, 1);

        for (int i = 1; i < n; i++) 
            if (ratings[i] > ratings[i - 1])
                candies[i] = candies[i - 1] + 1;
        
        for (int i = n - 1; i > 0; i--) {
            if (ratings[i - 1] > ratings[i])
                candies[i - 1] = max(candies[i] + 1, candies[i - 1]);
            cnt += candies[i - 1];
        }
        return cnt + candies[n - 1];
=======
    long long distributeCandies(int n, int m) {
        long long res = (n + 2LL) * (n + 1) / 2;
        for (int i = 1; i <= 3; i++) {
            long long rem = n - 1LL * i * (m + 1);
            if (rem < 0) break;
            long long val = (rem + 2) * (rem + 1) / 2;
            long long c = (i < 3 ? 3 : 1);
            res += (i % 2 ? -c * val : c * val);
        }
        return res;
>>>>>>> 99eb42d4b0d0da45b1bb023f1a1c46a149453d9e
    }
};