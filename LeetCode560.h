#pragma once
#include <vector>
#include <unordered_map>

using namespace std;

// 和为K的子数组
class Solution560 {
public:
	// 最直观的想法是遍历数组并依次加当前位置的数字，同时用数组sum记录下当前位置之前所有数字的相加和，这样下标[i, j)之间的数字之和就可以用sum[j]-sum[i]来计算，然后通过双层循环，遍历所有情况来统计满足条件的子数组个数。
	int subarraySum(vector<int>& nums, int k) {
		int sz = nums.size(), cnt = 0;
		vector<int> sum(sz + 1, 0);
		for (int i = 0; i < sz; ++i) sum[i + 1] = sum[i] + nums[i];
		for (int i = 0; i < sz; ++i) {
			for (int j = i + 1; j <= sz; ++j) {
				if (sum[j] - sum[i] == k) ++cnt;
			}
		}
		return cnt;
	}

	// 用sum表示从数组开始位置到当前位置的数字相加和，有了第523题的经验，我们还可以用Hash Table来存储sum出现的次数，如果当前位置之前有相加和为sum-k的位置，则这两个位置之间的数字相加和为k，以当前位置结尾的相加和为k的子数组个数为hash[sum-k]，这样遍历整个数组即可得出满足条件的子数组个数。
	int subarraySum1(vector<int>& nums, int k) {
		int sum = 0, cnt = 0;
		unordered_map<int, int> hash;

		hash[0] = 1;
		for (auto n : nums) {
			sum += n;
			cnt += hash[sum - k];
			++hash[sum];
		}

		return cnt;
	}
};