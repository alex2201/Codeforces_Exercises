/*PROBLEM: http://codeforces.com/problemset/problem/151/A*/

#include <iostream>

using namespace std;

int main () {
	int n,k,l,c,d,p,nl,np;
	int sol[3];
	cin >> n >> k >> l >> c >> d >> p >> nl >> np;
	int ml = (k * l) / nl;
	int limes = c * d;
	int salt = p / np;
	sol[0] = ml;
	sol[1] = limes;
	sol[2] = salt;
	int minimum = min(min(sol[0], sol[1]),sol[2]);
	minimum /= n;
	cout << minimum << endl;
	return 0;
}