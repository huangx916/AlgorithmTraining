#pragma once
#include <vector>
#include <algorithm>

using namespace std;

// 整数拆分，动态规划dp
class Solution343
{
public:
	int integerBreak(int n) {
		vector<int> dp(n + 1 ,-1);
		dp[1] = 1;
		dp[2] = 1;
		for (int i = 3; i <= n; ++i)
		{
			for (int j = 1; j < i; ++j)
			{
				//dp[i] = max(dp[i], dp[i - j] * j);
				// i-j拆分情况下为dp[i - j] * j，不拆分情况下为(i - j)*j
				dp[i] = max(dp[i], max(dp[i - j] * j, (i - j)*j));
			}
		}
		return dp[n];
	}
};