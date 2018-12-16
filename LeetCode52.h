#pragma once
#include <vector>

using namespace std;

// N皇后问题，使用DSF及回溯法
class Solution52
{
public:
	int totalNQueens(int n) {
		int total = 0;
		vector<int> state;
		vector<vector<string>> ret;
		DFS(0, n, state, total, ret);
		return total;
	}

	void DFS(int row, int n, vector<int>& state, int& total, vector<vector<string>>& ret)
	{
		if (row == n)
		{
			total += 1;
			convert(state, ret, n);
			return;
		}
		for (int i = 0; i < n; ++i)
		{
			if (isValid(row, i, state))
			{
				state.push_back(i);
				DFS(row + 1, n, state, total, ret);
				// 回溯法
				state.pop_back();
			}
		}
	}

	void convert(vector<int>& state, vector<vector<string>>& ret, int n)
	{
		vector<string> vct;
		for (int i = 0; i < state.size(); ++i)
		{
			string str(n, '.');
			str[state[i]] = 'Q';
			vct.push_back(str);
		}
		ret.push_back(vct);
	}

	bool isValid(int row, int col, vector<int>& state)
	{
		for (int i = 0; i < state.size(); ++i)
		{
			if (state[i] == col || abs(row - i) == abs(col - state[i]))
			{
				return false;
			}
		}
		return true;
	}
};