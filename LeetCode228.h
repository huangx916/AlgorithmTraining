#pragma once
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

// 注意输入为[]的情况
class Solution228
{
public:
	vector<string> summaryRanges(vector<int>& nums) {
		vector<string> ret;
		string str = "";
		bool single = true;
		sort(nums.begin(), nums.end());
		for (int i = 0; i < nums.size(); ++i)
		{
			if (str == "")
			{
				str = std::to_string(nums[i]);
			}
			else if(nums[i] == nums[i-1] + 1)
			{
				single = false;
				continue;
			}
			else
			{
				if (single)
				{
					ret.push_back(str);
					str = std::to_string(nums[i]);
				}
				else
				{
					str += "->" + std::to_string(nums[i-1]);
					ret.push_back(str);
					str = std::to_string(nums[i]);
					single = true;
				}
			}
		}
		if (str != "")
		{
			if (!single)
			{
				str += "->" + std::to_string(nums[nums.size() - 1]);
				ret.push_back(str);
			}
			else
			{
				ret.push_back(str);
			}
		}
		return ret;
	}
};