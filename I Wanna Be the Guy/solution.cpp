#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	int number_levels, p, q;

	cin >> number_levels >> p;

	vector<int> levels(number_levels, 0);

	for(int i = 0; i < p; i++)
	{
		int auxiliar;
		cin >> auxiliar;
		if(auxiliar == 0)
			continue;
		levels[auxiliar - 1]++;
	}

	cin >> q;

	for(int i = 0; i < q; i++)
	{
		int auxiliar;
		cin >> auxiliar;
		if(auxiliar == 0)
			continue;
		levels[auxiliar - 1]++;
	}

	for(int i = 0; i < number_levels; i++)
		if(levels[i] == 0)
		{
			cout << "Oh, my keyboard!";
			return 0;
		}
	cout << "I become the guy.";

	return 0;
}