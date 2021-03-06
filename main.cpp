﻿#include "stdlib.h"
#include <iostream>
#include <string>
#include "LeetCode1.h"
#include "LeetCode2.h"
#include "LeetCode3.h"
#include "LeetCode5.h"
#include "LeetCode9.h"
#include "LeetCode51.h"
#include "LeetCode52.h"
#include "LeetCode228.h"
#include "LeetCode268.h"
#include "LeetCode343.h"
#include "LeetCode447.h"
#include "LeetCode482.h"
#include "LeetCode523.h"
#include "LeetCode560.h"
#include "LeetCode938.h"

using namespace std;

int main()
{
	/*Solution1 sln1;
	vector<int> nums = { 2, 7, 11, 15 };
	sln1.twoSum(nums, 9);*/

	/*Solution2 sln2;
	ListNode l11(2);
	ListNode l12(4);
	ListNode l13(3);
	l11.next = &l12;
	l12.next = &l13;
	ListNode l21(5);
	ListNode l22(6);
	ListNode l23(4);
	l21.next = &l22;
	l22.next = &l23;
	sln2.addTwoNumbers(&l11, &l21);*/

	/*Solution3 sln3;
	int ret = sln3.lengthOfLongestSubstring("pwwkew");
	cout << ret << endl;*/

	Solution5 sln5;
	string ret = sln5.longestPalindrome("babad");
	cout << ret << endl;

	/*Solution9 sln9;
	bool ret = sln9.isPalindrome(10);
	cout << ret << endl;*/

	/*Solution51 sln51;
	sln51.solveNQueens(4);*/

	/*Solution52 sln52;
	int ret = sln52.totalNQueens(4);
	std::cout << ret << std::endl;*/

	/*Solution228 sln228;
	vector<int> nums = { 0,1,2,4,5,7 };
	sln228.summaryRanges(nums);*/

	/*Solution268 sln268;
	vector<int> nums = { 9,6,4,2,3,5,7,0,1 };
	int ret = sln268.missingNumber(nums);
	cout << ret << endl;*/

	/*Solution343 sln343;
	int ret = sln343.integerBreak(10);
	cout << ret << endl;*/

	/*Solution447 sln447;
	vector<pair<int, int>> points = { { 0,0 },{ 0,1 },{ 0,2 } };
	int ret = sln447.numberOfBoomerangs(points);
	cout << ret << endl;*/

	/*Solution482 sln482;
	string ret = sln482.licenseKeyFormatting("t5F3Z-2e-9-w", 4);
	cout << ret << endl;*/

	/*Solution523 sln523;
	vector<int> vec = { 0,0 };
	bool ret = sln523.checkSubarraySum(vec, 0);
	cout << ret << endl;*/

	/*Solution560 sln560;
	vector<int> vec = { 1, 1, 0, 1, 1 };
	int ret = sln560.subarraySum1(vec, 2);
	cout << ret << endl;*/

	/*Solution938 sln938;
	TreeNode n1(10);
	TreeNode n2(5);
	TreeNode n3(15);
	TreeNode n4(3);
	TreeNode n5(7);
	TreeNode n6(18);
	n1.left = &n2;
	n1.right = &n3;
	n2.left = &n4;
	n2.right = &n5;
	n3.right = &n6;
	int ret = sln938.rangeSumBST(&n1, 7, 15);
	cout << ret << endl;*/


	system("pause");
	return 0;
}