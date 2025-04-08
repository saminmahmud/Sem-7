#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }

    vector<int> dp(n + 1);
    dp[0] = 0;
    dp[1] = 1;

    for (int i = 2; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    // for(int i = 0; i <dp.size(); i++) {
    //     cout << dp[i] << " ";
    // }
    // cout << endl;

    return dp[n];
}

int main() {
    int n;
    cin >> n;

    int result = fibonacci(n);

    cout << result << endl;

    return 0;
}
// another way 
int fibonacci(int n, vector<int>& memo) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    if (memo[n] != -1) {
        return memo[n];
    }
    memo[n] = fibonacci(n - 1, memo) + fibonacci(n - 2, memo);
    
    return memo[n];
}

int main() {
    int n;
    cin >> n;

    vector<int> memo(n + 1, -1);

    int result = fibonacci(n, memo);

    cout << result << endl;

    return 0;
}
