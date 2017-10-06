/*PROBLEM: http://codeforces.com/gym/101498/problem/B*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	int number_cases;

	cin >> number_cases;

	for(int t = 0; t < number_cases; t++)
	{
		string cad1, cad2;
		int ocurrence[27], i;
		bool val = true;

		for(i = 0; i < 27; i++)
			ocurrence[i] = 0;

		cin >> cad1 >> cad2;

		for(i = 0; i < cad2.size(); i++)
			ocurrence[cad2[i] - 'a']++;

		for(i = 0; i < cad1.size(); i++)
			if(ocurrence[cad1[i] - 'a'])
				ocurrence[cad1[i] - 'a']--;
			else
			{
				val = false;
				break;
			}

		cout << i << '\n';
	}

	return 0;
}