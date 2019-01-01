#pragma once
#include <vector>
#include <algorithm>

using namespace std;

class Solution268
{
public:
	int missingNumber(vector<int>& nums) {
		sort(nums.begin(), nums.end());
		for (int i = 0; i < nums.size(); ++i)
		{
			if (i != nums[i])
			{
				return i;
			}
		}
		return nums.size();
	}
};
