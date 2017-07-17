/*PROBLEM: http://codeforces.com/problemset/problem/490/A*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n, teams;
	vector<int> skills[3];

	cin >> n;

	for(int i = 0; i < n; i++)
	{
		int aux;

		cin >> aux;
		skills[aux - 1].push_back(i + 1);
	}

	teams = skills[0].size();

	for(int i = 0; i < 3; i++)
	{
		if(!skills[i].size())
		{
			cout << 0;
			return 0;
		}

		if(skills[i].size() < teams)
			teams = skills[i].size();
	}

	cout << teams << '\n';

	for(int i = 0; i < teams ; i++)
		cout << skills[0][i] << ' ' << skills[1][i] << ' ' << skills[2][i] << '\n';

	return 0;
}