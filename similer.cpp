#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
	string s = "ab";
	string t = "ba";
	string result = "";
	sort(s.begin(), s.end());
	sort(t.begin(), t.end());
	if (s == t)
	{
		cout << true << "\n";
	}
	else
	{
		cout << false << "\n";
	}
	cout << s << "\n";
	cout << t << "\n";
	return 0;
}