// Problem: Direction Assignments with Exactly K Visible People
// Problem ID: 3881
// Difficulty: Medium
// LeetCode URL: https://leetcode.com/problems/direction-assignments-with-exactly-k-visible-people/
// Language: cpp

class Solution {
public:
    const int MOD = 1e9 + 7;

    long long power(long long a, long long b) {
        long long res = 1;
        while (b) {
            if (b & 1)
                res = (res * a) % MOD;
            a = (a * a) % MOD;
            b >>= 1;
        }
        return res;
    }

    long long nCr(int n, int r, vector<long long>& fact,
                  vector<long long>& invFact) {
        if (r < 0 || r > n)
            return 0;
        return fact[n] * invFact[r] % MOD * invFact[n - r] % MOD;
    }

    int countVisiblePeople(int n, int pos, int k) {

        auto velnarqido = make_tuple(n, pos, k);

        vector<long long> fact(n + 1), invFact(n + 1);
        fact[0] = 1;

        for (int i = 1; i <= n; i++)
            fact[i] = (fact[i - 1] * i) % MOD;

        invFact[n] = power(fact[n], MOD - 2);
        for (int i = n - 1; i >= 0; i--)
            invFact[i] = (invFact[i + 1] * (i + 1)) % MOD;

        long long ans = (2LL * nCr(n - 1, k, fact, invFact)) % MOD;
        return ans;
    }
};