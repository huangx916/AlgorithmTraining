#pragma once
#include <string>
#include <stdlib.h>
#include <vector>
#include <algorithm>

using namespace std;

class Solution5
{
public:
	string longestPalindrome(string s) 
	{
		int maxLength = 0;
		int startIndex = 0;
		for (int i = 0; i < s.size(); ++i)
		{
			for (int j = i; j < s.size(); ++j)
			{
				int index1, index2;
				for (index1 = i, index2 = j; index1 < index2; index1++, index2--)
				{
					if (s[index1] != s[index2])
					{
						break;
					}
				}
				if (index1 >= index2 && maxLength < j-i+1)
				{
					maxLength = j - i + 1;
					startIndex = i;
				}
			}
		}
		if (maxLength > 0)
		{
			return s.substr(startIndex, maxLength);
		}
		else
		{
			return "";
		}
	}

	/*
	动态规划 DP算法
	首先定义状态方程和转移方程：
	P[i, j] = false:表示子串[i, j]不是回文串。P[i, j] = true : 表示子串[i, j]是回文串。
	P[i, i] = true : 当且仅当P[i + 1, j - 1] = true && (s[i] == s[j]）
	否则p[i, j] = false;*/
	string longestPalindrome1(string s) {
		if (s == "")
			return "";
		int len = s.length();
		int start = 0;
		int maxlength = 0;
		vector<vector<bool>> p(s.length(),vector<bool>(s.length(), false));
		// 子串长度为1和为2的初始化
		for (int i = 0; i < len; i++) {
			p[i][i] = true;
			if (i < len - 1 && s[i] == s[i + 1]) {
				p[i][i + 1] = true;
				start = i;
				maxlength = 2;
			}
		}
		// 使用上述结果可以dp出子串长度为3~len -1的子串
		for (int strlen = 3; strlen <= len; strlen++) {
			for (int i = 0; i <= len - strlen; i++) {
				int j = i + strlen - 1; // 子串结束的位置
				if (p[i + 1][j - 1] && s[i] == s[j]) {
					p[i][j] = true;
					maxlength = strlen;
					start = i;
				}
			}
		}
		if (maxlength > 0)
		{
			return s.substr(start, maxlength);
		}
		else
		{
			return s.substr(0, 1);
		}
	}

};