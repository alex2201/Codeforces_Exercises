#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	int num_airports, start, finish;
	string airports;

	cin >> num_airports >> start >> finish >> airports;

	if(airports[start - 1] != airports[finish - 1])
		cout << 1;
	else
		cout << 0;

	return 0;
}