/*PROBLEM: http://codeforces.com/problemset/problem/439/A*/

#include <iostream>

using namespace std;

int main()
{
	int n, d, sum = 0;

	cin >> n >> d;

	for(int i = 0; i < n; i++)
	{
		int aux;

		cin >> aux;

		sum += aux;
	}

	if(sum > d || (n - 1) * 10 > d - sum)
	{
		cout << -1;
		return 0;
	}

	cout << (d - sum) / 5;

	return 0;
}