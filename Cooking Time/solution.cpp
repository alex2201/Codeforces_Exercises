/*PROBLEM: http://codeforces.com/gym/101498/problem/F*/

#include <iostream>

using namespace std;

long long IngredientsChanged(long long *actualIngredients, long long *nextIngredients, long long k)
{
	long long ans = 0;

	for(long long i = 0; i < k; i++)
		for(long long j = 0; j < k; j++)
			if(nextIngredients[i] == actualIngredients[j])
			{
				ans += 1;
				break;
			}

	return ans;
}

int main()
{
	std::ios::sync_with_stdio(false);

	int numberCases;

	cin >> numberCases;

	while(numberCases--)
	{
		long long n, k, i, j, indexNext;

		cin >> n >> k;

		long long listIngredients[n], actualIngredients[k], nextIngredients[k], ans;

		if(n >= k)
			ans = k;
		else
			ans = n;

		for(j = 0; j < n; j++)
			cin >> listIngredients[j];
		for(j = 0; j < n && j < k; j++)
			actualIngredients[j] = listIngredients[j];

		while (j < n)
		{
			for(indexNext = 0; j < n && indexNext < k; j++, indexNext++)
				nextIngredients[indexNext] = listIngredients[j];

			ans += IngredientsChanged(actualIngredients, nextIngredients, indexNext);

			for(i = 0; j < n && i < indexNext; i++)
				actualIngredients[i] = nextIngredients[i];
		}

		cout << ans << '\n';
	}

	return 0;
}