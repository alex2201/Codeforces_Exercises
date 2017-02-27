#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main (void)
{
	int students, puzzles, difference = 1000 - 4;

	cin >> students >> puzzles;

	int pieces[puzzles];

	for(int i = 0; i < puzzles; i++)
		cin >> pieces[i];

	sort(pieces, pieces + puzzles);

	for(int i = students; i - 1 < puzzles; i++)
	{
		int auxiliar = pieces[i - 1] - pieces[i - students];
		if(auxiliar < difference)
			difference = auxiliar;
	}

	cout << difference;

	return 0;
}