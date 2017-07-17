/*PROBLEM: http://codeforces.com/problemset/problem/313/A*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	long n;
	string number;

	cin >> n;

	if(n >= 0)
		cout << n;
	else
	{
		long num1, num2;

		num1 = n % 10;
		num2 = n % 100 - num1;
		num2 = (n - num2) / 10 + num1;
		num1 = n / 10;

		if(num1 > num2)
			cout << num1;
		else
			cout << num2;
	}

	return 0;
}