/*PROBLEM: http://codeforces.com/problemset/problem/459/A*/

#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

int main()
{
	vector<int> x(2), y(2);

	for(int i = 0; i < 2; i++)
		cin >> x[i] >> y[i];

	if(x[0] == x[1] || y[0] == y[1])
	{
		if(x[0] == x[1])
		{
			int dis = fabs(y[0] - y[1]);
			x.push_back(x[0] + dis);
			x.push_back(x[0] + dis);
			x.push_back(x[0] - dis);
			x.push_back(x[0] - dis);
			y.push_back(y[0]);
			y.push_back(y[1]);
			y.push_back(y[0]);
			y.push_back(y[1]);
		}
		else
		{
			int dis = fabs(x[0] - x[1]);
			x.push_back(x[0]);
			x.push_back(x[1]);
			x.push_back(x[0]);
			x.push_back(x[1]);
			y.push_back(y[0] + dis);
			y.push_back(y[0] + dis);
			y.push_back(y[0] - dis);
			y.push_back(y[0] - dis);
		}
	}
	else
	{
		if(fabs(x[0] - x[1]) != fabs(y[0] - y[1]))
		{
			cout << -1;
			return 0;
		}

		x.push_back(x[0]);
		y.push_back(y[1]);
		x.push_back(x[1]);
		y.push_back(y[0]);
	}

	for(int i = 2; i < 4; i++)
		cout << x[i] << ' ' << y[i] << ' ';

	return 0;
}