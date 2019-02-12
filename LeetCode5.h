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
	��̬�滮 DP�㷨
	���ȶ���״̬���̺�ת�Ʒ��̣�
	P[i, j] = false:��ʾ�Ӵ�[i, j]���ǻ��Ĵ���P[i, j] = true : ��ʾ�Ӵ�[i, j]�ǻ��Ĵ���
	P[i, i] = true : ���ҽ���P[i + 1, j - 1] = true && (s[i] == s[j]��
	����p[i, j] = false;*/
	string longestPalindrome1(string s) {
		if (s == "")
			return "";
		int len = s.length();
		int start = 0;
		int maxlength = 0;
		vector<vector<bool>> p(s.length(),vector<bool>(s.length(), false));
		// �Ӵ�����Ϊ1��Ϊ2�ĳ�ʼ��
		for (int i = 0; i < len; i++) {
			p[i][i] = true;
			if (i < len - 1 && s[i] == s[i + 1]) {
				p[i][i + 1] = true;
				start = i;
				maxlength = 2;
			}
		}
		// ʹ�������������dp���Ӵ�����Ϊ3~len -1���Ӵ�
		for (int strlen = 3; strlen <= len; strlen++) {
			for (int i = 0; i <= len - strlen; i++) {
				int j = i + strlen - 1; // �Ӵ�������λ��
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