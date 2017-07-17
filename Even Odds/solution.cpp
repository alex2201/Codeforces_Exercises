/*PROBLEM: http://codeforces.com/problemset/problem/318/A*/

#include <iostream>

using namespace std;

int main()
{
	long long int n, k, ans;

	cin >> n >> k;

	if(n & 1)
		if(k <= n / 2 + 1)
			ans = 2 * (k - 1) + 1;
		else
			ans = 2 * (k - n / 2 - 1);
	else
		if(k <= n / 2)
			ans = 2 * (k - 1) + 1;
		else
			ans = 2 * (k - n / 2);


	cout << ans;

	return 0;
}