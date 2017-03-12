#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	string nombres, grupos;
	long long cometa = 1, grupo = 1;

	cin >> nombres;

	for(int i = 0; i < nombres.size(); 	i++)
		cometa = cometa * (nombres[i] - 'A' + 1);

	cin >> grupos;

	for(int i = 0; i < grupos.size(); i++)
		grupo = grupo * (grupos[i] - 'A' + 1);

	if(cometa % 47 == grupo % 47)
		cout << "GO";
	else
		cout << "STAY";

	return 0;
}