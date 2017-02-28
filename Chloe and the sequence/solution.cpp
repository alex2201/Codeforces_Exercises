#include <iostream>
#include <math.h>

using namespace std;

int main (void)
{
	int secuence;
	long long position;

	cin >> secuence >> position;

	long long significant_number = pow(2, secuence - 1);

	while (position != significant_number)
	{
		while(position > significant_number)
		{
			position -= significant_number;
			significant_number = pow(2, --secuence - 1);
		}
		while(position < significant_number)
			significant_number = pow(2, --secuence - 1);
	}

	cout << secuence;

	return 0;
}