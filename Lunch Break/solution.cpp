/*PROBLEM: http://codeforces.com/gym/101498/problem/C*/

#include <iostream>

using namespace std;

int main()
{
	int number_cases;

	cin >> number_cases;

	for(int i = 0; i < number_cases; i++)
	{
		long int a, b, c;

		cin >> a >> b >> c;

		long int shortest = min(min(a,b), c);

		if(shortest == a)
			cout << "First" << '\n';
		else if(shortest == b)
			cout << "Second" << '\n';
		else if(shortest == c)
			cout << "Third" << '\n';
	}

	return 0;
}