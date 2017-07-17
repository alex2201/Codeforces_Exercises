/*PROBLEM: http://codeforces.com/problemset/problem/25/A*/

#include <iostream>

using namespace std;

int main()
{
	int n, even = 0, odd = 0;

	cin >> n;

	int array[n];

	for(int i = 0; i < n; i++)
	{
		cin >> array[i];

		if(array[i] & 1)
			odd++;
		else
			even++;
	}

	int  i;
	if(even > odd)
	{
		for(i = 0; !(array[i] & 1); i++);

		cout << i + 1;
	}
	else
	{
		for(i = 0; array[i] & 1; i++);

		cout << i + 1;
	}

	return 0;
}