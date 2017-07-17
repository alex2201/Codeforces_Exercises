/*PROBLEM: http://codeforces.com/problemset/problem/510/A*/

#include <iostream>

using namespace std;

int main()
{
	int n, m;

	cin >> n >> m;

	int val = m - 1, change = 0;

	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			if(!(i & 1))
				cout << '#';
			else if(j == val)
			{
				cout << '#';
			}
			else
				cout << '.';
			if(j == m - 1 && i & 1)
			{
				val += change;
				change = val - change;
				val -= change;
			}
		}
		cout << '\n';
	}

	return 0;
}