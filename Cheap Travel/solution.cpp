/*PROBLEM: http://codeforces.com/problemset/problem/466/A*/

#include <iostream>

using namespace std;

int main()
{
	int n, m , a, b, ans;

	cin >> n >> m >> a >> b;

	if(m > n && b < a)
		ans = b;
	else if(b < (float)a * m)
	{
		ans = n / m * b;
		if(a * (n % m) < b)
			ans += (n % m) * a;
		else if(n % m)
			ans += b;
	}
	else
		ans = n * a;

	cout << ans;

	return 0;
}