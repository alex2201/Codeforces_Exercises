/*PROBLEM: http://codeforces.com/gym/101498/problem/E*/

#include <iostream>

using namespace std;

int main()
{
	std::ios::sync_with_stdio(false);

	int number_cases;

	cin >> number_cases;

	for(int i = 0; i < number_cases; i++)
	{
		long long n, k, ans;

		cin >> n >> k;

		ans = k * (n / k) + k + n % k - 1;

		cout << ans << '\n';
	}

	return 0;
}