/*PROBLEMA: http://codeforces.com/problemset/problem/432/A*/

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n, k, i;

	cin >> n >> k;

	int participations[n];

	for(i = 0; i < n; i++)
		cin >> participations[i];

	sort(participations, participations + n);

	for(i = 0; i < n && participations[i] <= 5 - k; i++);

	if(i == n)
		cout << n / 3;
	else
		cout << i / 3;

	return 0;
}