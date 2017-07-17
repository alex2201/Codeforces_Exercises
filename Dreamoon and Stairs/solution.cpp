/*PROBLEM: http://codeforces.com/problemset/problem/476/A*/

#include <iostream>

using namespace std;

int main()
{
	int n, m, number_twos, ans;

	cin >> n >> m;

	if(n < m)
	{
		cout << -1;
		return 0;
	}

	ans = number_twos = n / 2;

	if(n % 2 != 0)
		ans++;

	while(ans % m != 0 && number_twos)
	{
		ans++;
		number_twos--;
	}

	if(ans % m == 0)
		cout << ans;
	else
		cout << -1;

	return 0;
}