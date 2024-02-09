#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
	vector<int> nums = {2, 7, 11, 15};
	vector<int> result;
	int target = 17;
	for (int i = 0; i < nums.size(); i++)
	{
		for (int j = nums.size() - 1; j >= 0; j--)
		{
			if (nums[j] + nums[i] == target)
			{
				if (i == j)
				{
					continue;
				}
				result.push_back(i);
				result.push_back(j);
				break;
			}
		}
	}
	return 0;
}