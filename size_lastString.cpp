#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
	string s = "s ";
	int count = 0;
	string result = "";
	for (int i = 0; i <s.length(); i++)
	{
		if (s[s.length() - 1] == ' ')
		{
			s.pop_back();
		}
	}
	for(int i = s.length()-1; i >= 0; i--)
	{
		if(s[i] != ' ')
		{
			count++;
		}
		else
		{
			break;
		}
	}
	cout << count;
	return 0;
}