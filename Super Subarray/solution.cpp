/*PROBLEM: http://codeforces.com/gym/101498/problem/G*/

#include <iostream>

using namespace std;

long long gcd(long long a, long long b)
{
	if (b == 0)
    	return a;
  	else
  	  return gcd(b, a%b);
}

long long SuperSubarray(long long *array, int start, int end)
{
	long long ans = 0, sum = 0, lcm = 1;

	for(int i = start; i <= end; i++)
	{
		sum += array[i];
		lcm = (lcm * array[i]) / gcd(lcm, array[i]);
	}

	if(sum % lcm == 0)
		ans++;

	return ans;
}

int main(){
	std::ios::sync_with_stdio(false);

	int numberCases;

	cin >> numberCases;

	while(numberCases--)
	{
		int length;

		cin >> length;

		long long array[length], ans = 0;

		for(int i = 0; i < length; i++)
			cin >> array[i];

	for(int i = 0; i < length; i++)
		for(int j = length; j > i; j--)
			ans += SuperSubarray(array, i, j - 1);

		cout << ans << '\n';
	}


	return 0;
}