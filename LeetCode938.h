#pragma once
#include <stdlib.h>
#include<vector>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

// 二叉搜索树使用中序遍历、深度优先(用递归简单，用stack中序后序比较复杂)
class Solution938
{
public:
	int rangeSumBST(TreeNode* root, int L, int R) {
		int ret = 0;
		bool start = false;
		vector<int> vct;
		inOrderTraverse(root, vct);
		for (int i = 0; i < vct.size(); ++i)
		{
			if (vct[i] == L)
			{
				ret += vct[i];
				start = true;
			}
			else if (vct[i] == R)
			{
				ret += vct[i];
				break;
			}
			else if(start)
			{
				ret += vct[i];
			}
		}
		return ret;
	}

	void inOrderTraverse(TreeNode* node, vector<int>& vct)
	{
		if (node->left)
		{
			inOrderTraverse(node->left, vct);
		}
		vct.push_back(node->val);
		if (node->right)
		{
			inOrderTraverse(node->right, vct);
		}
	}
};