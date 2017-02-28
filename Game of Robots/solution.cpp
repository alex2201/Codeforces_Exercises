#include <iostream>

using namespace std;

int main(void)
{
	int robots, position, answer;

	cin >> robots >> position;

	int ids[robots];

	for(int i = 0; i < robots; i++)
		cin >> ids[i];

	for(int i = 0, current = 0; i < robots; i++)
	{
		current += i + 1;
		if(current >= position)
		{
			answer = ids[i - (current - position)];
			break;
		}
	}

	cout << answer;

	return 0;
}