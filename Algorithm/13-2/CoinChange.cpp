// max number of ways
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> coins = {1, 3, 5};
    int amount = 8;

    vector<vector<int>> dp(coins.size() + 1, vector<int>(amount + 1, 0));

    for (int i = 0; i <= coins.size(); i++)
    {
        dp[i][0] = 1;
    }

    for (int i = 1; i <= coins.size(); i++)
    {
        for (int j = 1; j <= amount; j++)
        {
            if (j >= coins[i - 1])
            {
                dp[i][j] = dp[i - 1][j] + dp[i][j - coins[i - 1]];
            }
            else 
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    // for (int i = 0; i < dp.size(); i++)
    // {
    //     for (int j = 0; j < dp[0].size(); j++)
    //     {
    //         cout << dp[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    // cout << endl;

    cout << dp[coins.size()][amount] << endl;

    return 0;
}