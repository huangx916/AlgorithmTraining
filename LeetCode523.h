#pragma once
#include <vector>
#include <unordered_map>

using namespace std;

class Solution523 {
public:
	// 遍历整个数组，依次加当前数组元素并将相加和求余k，求余结果只有0~k-1这k中情况，将求余结果存入Hash Table中。如果遍历到当前位置求余结果已经在Hash Table中，表明从上一求余结果相同的位置到当前位置的子数组相加和是k的倍数，否则将求余结果存入Hash Table。这里同样需要注意上面提到的边界情况，代码中hash[0] = -1这行即为了便于边界情况的处理。
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