/*PROBLEM: http://codeforces.com/problemset/problem/151/A*/

#include <iostream>

using namespace std;

int main () {
	int n,k,l,c,d,p,nl,np;
	cin >> n >> k >> l >> c >> d >> p >> nl >> np;
	int ml = (k * l) / nl;
	int limes = c * d;
	int salt = p / np;
	int minimum = min(min(ml, limes),salt);
	minimum /= n;
	cout << minimum << endl;
	return 0;
}