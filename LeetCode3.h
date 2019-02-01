#pragma once
#include <string>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>

using namespace std;

class Solution3 
{
public:
	int lengthOfLongestSubstring(string s) {
		int maxLength = 0;
		for(int i = 0; i < s.length(); ++i)
		{
			unordered_set<char> set;
			int curLength = 0;
			for (int j = i; j < s.length(); ++j)
			{
				if (set.find(s[j]) == set.end())
				{
					set.insert(s[j]);
					curLength++;
				}
				else
				{
					break;
				}
			}
			maxLength = max(maxLength, curLength);
		}
		return maxLength;
	}

	int lengthOfLongestSubstring1(string s) {
		int res = 0, left = 0;
		unordered_map<char, int> m;
		for (int i = 0; i < s.size(); ++i)
		{
			left = max(left, m[s[i]]);
			m[s[i]] = i + 1;
			res = max(res, i - left + 1);
		}
		return res;
	}
};
