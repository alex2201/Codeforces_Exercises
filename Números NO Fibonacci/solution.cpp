#include <iostream>

using namespace std;

int main(void)
{
	int limit;

	cin >> limit;

	int anterior, siguiente, numero;

	for(anterior = 2, siguiente = 3; siguiente + anterior < limit;)
	{
		int auxiliar = siguiente;
		siguiente += anterior;
		anterior = auxiliar;
		for(numero = anterior + 1; numero < siguiente; numero++)
			cout << numero << ' ';
	}

	for(numero = siguiente + 1; numero < limit; numero++)
		cout << numero << ' ';

	return 0;
}