// minimum number of coin
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> coins = {1, 3, 5};
    int amount = 8;

    vector<vector<int>> dp(coins.size() + 1, vector<int>(amount + 1, INT_MAX)); 

    for (int i = 0; i <= coins.size(); i++)
    {
        dp[i][0] = 0; 
    }

    for (int i = 1; i <= coins.size(); i++)
    {
        for (int j = 1; j <= amount; j++)
        {
            if (j >= coins[i - 1])
            {
                dp[i][j] = min(dp[i - 1][j], dp[i][j - coins[i - 1]] + 1); 
            }
            else
            {
                dp[i][j] = dp[i - 1][j]; 
            }
        }
    }

    if (dp[coins.size()][amount] == INT_MAX)
    {
        cout << -1 << endl; 
    }
    else
    {
        cout << dp[coins.size()][amount] << endl; 
    }

    return 0;
}
