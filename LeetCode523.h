#pragma once
#include <vector>
#include <unordered_map>

using namespace std;

class Solution523 {
public:
	// �����������飬���μӵ�ǰ����Ԫ�ز�����Ӻ�����k��������ֻ��0~k-1��k�������������������Hash Table�С������������ǰλ���������Ѿ���Hash Table�У���������һ��������ͬ��λ�õ���ǰλ�õ���������Ӻ���k�ı�������������������Hash Table������ͬ����Ҫע�������ᵽ�ı߽������������hash[0] = -1���м�Ϊ�˱��ڱ߽�����Ĵ���
	bool checkSubarraySum(vector<int>& nums, int k) {
		int sum = 0;
		unordered_map<int, int> hash;
		hash[0] = -1;
		for (int i = 0; i < nums.size(); ++i)
		{
			sum += nums[i];
			if (k) sum %= k;
			if (hash.find(sum) != hash.end())
			{
				if (i - hash[sum] > 1) return true;
			}
			else
			{
				hash[sum] = i;
			}
		}
		return false;
	}
};