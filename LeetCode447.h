#pragma once
#include <vector>
#include <unordered_map>

using namespace std;

class Solution447
{
public:
	int numberOfBoomerangs(vector<pair<int, int>>& points) 
	{
		int count = 0;
		for (int i = 0; i < points.size(); ++i)
		{
			unordered_map<int, int> map;
			for (int j = 0; j < points.size(); ++j)
			{
				int dis = (points[i].first - points[j].first) * (points[i].first - points[j].first) + (points[i].second - points[j].second) * (points[i].second - points[j].second);
				if (map.find(dis) == map.end())
				{
					map.insert(make_pair(dis, 0));
				}
				count += map[dis] * 2;
				map[dis] += 1;
			}
		}
		return count;
	}
};