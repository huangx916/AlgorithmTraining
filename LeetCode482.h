#pragma once
#include <string>

using namespace std;

// 简单，注意reverse用法
class Solution482
{
public:
	string licenseKeyFormatting(string S, int K) {
		string ret;
		int count = 0;
		for (int i = S.size() - 1; i >= 0; --i)
		{
			if (S[i] == '-')
			{
				continue;
			}
			else if (count == K)
			{
				ret += '-';
				ret += toupper(S[i]);
				count = 1;
			}
			else
			{
				ret += toupper(S[i]);
				count++;
			}
		}
		reverse(ret.begin(), ret.end());
		return ret;
	}
};
