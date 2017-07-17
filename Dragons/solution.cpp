/*PROBLEM: http://codeforces.com/problemset/problem/230/A*/

#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

int main()
{
	int s, n, i;

	cin >> s >> n;

	pair<int, int>dragons_and_bonus[n];

	for(i = 0; i < n; i++)
		cin >> dragons_and_bonus[i].first >> dragons_and_bonus[i].second;

	sort(dragons_and_bonus, dragons_and_bonus + n);

	for(i = 0; i < n && s > dragons_and_bonus[i].first; i++)
		s += dragons_and_bonus[i].second;

	if(n == i)
		cout << "YES";
	else
		cout << "NO";

	return 0;
}