#include "stdlib.h"
#include <iostream>
#include <string>
#include "LeetCode51.h"
#include "LeetCode52.h"
#include "LeetCode343.h"
#include "LeetCode482.h"

using namespace std;

int main()
{


	/*Solution51 sln51;
	sln51.solveNQueens(4);*/

	/*Solution52 sln52;
	int ret = sln52.totalNQueens(4);
	std::cout << ret << std::endl;*/

	/*Solution343 sln343;
	int ret = sln343.integerBreak(10);
	cout << ret << endl;*/

	Solution482 sln482;
	string ret = sln482.licenseKeyFormatting("t5F3Z-2e-9-w", 4);
	cout << ret << endl;



	system("pause");
	return 0;
}