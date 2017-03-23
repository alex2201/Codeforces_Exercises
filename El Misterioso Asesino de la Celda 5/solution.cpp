#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int main (void)
{
	int large, width, places, positions = 0;
	bool validate = true;

	cin >> large >> width >> places;

	int room[large][width];

	for(int i = 0; i < large; i++)
		for(int j = 0; j < width; j++)
			room[i][j] = 0;

	for(int i = 0; i < places; i++)
	{
		int x, y;
		cin >> x >> y;
		room[x - 1][y - 1]++;
	}

	for(int i = 0; i < large - 1; i++)
		for(int j = 0; j < width - 1; j++)
		{
			for(int k = 0; k < 2; k++)
			{
				for(int l = 0; l < 2; l++)
					if(room[i + k][j + l] != 0)
					{
						validate = false;
						break;
					}
					
				if(!validate)
					break;
			}

			if(!validate)
			{
				positions--;
				validate = true;
			}
			else
				positions++;
		}

	cout << positions;

	return 0;
}