#pragma once
#include <vector>
#include <unordered_map>

using namespace std;

class Solution1 
{
public:
	vector<int> twoSum(vector<int>& nums, int target)
	{
		for (int i = 0; i < nums.size(); i++)
		{
			for (int j = i + 1; j < nums.size(); j++)
			{
				if (nums[j] == target - nums[i])
				{
					return vector<int>{ i, j };
				}
			}
		}
		return vector<int>{};
	}

	vector<int> twoSum1(vector<int>& nums, int target)
	{
		unordered_map<int, int> hash;
		for (int i = 0; i < nums.size(); ++i)
		{
			int other = target - nums[i];
			if (hash.find(other) != hash.end())
			{
				return vector<int>{hash[other], i};
			}
			hash[nums[i]] = i;
		}
		return vector<int>{};
	}
};