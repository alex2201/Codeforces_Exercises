/*PROBLEM: https://omegaup.com/arena/problem/Creando-un-Miguelito#problems*/

#include <iostream>
#include<vector>
#include <algorithm>

using namespace std;

int main()
{
	long long n, m;
	vector<long long> materiales;

	cin >> n;

	for(long long i = 0; i < n; i++)
	{
		long long material;
		cin >> material;
		materiales.push_back(material);
	}

	sort(materiales.begin(), materiales.end());

	cin >> m;

	for(long long i = 0; i < m; i++)
	{
		long long material;

		cin >> material;

		if(binary_search(materiales.begin(), materiales.end(), material))
			cout << "SI\n";
		else
			cout << "NO\n";
	}

	return 0;
}