#pragma once
#include <string>

using namespace std;

class Solution9 {
public:
	bool isPalindrome(int x) {
		if (x < 0)
		{
			return false;
		}
		string str = to_string(x);
		string ret;
		for (int i = str.size()-1; i >=0; --i)
		{
			ret += str[i];
		}
		return str == ret;
	}

	bool isPalindrome1(int x) {
		int z = x;
		if (x < 0)
		{
			return false;
		}
		int y = 0;
		while (x > 0)
		{
			y = y * 10 + x % 10;
			x /= 10;
		}
		return z == y;
	}
};