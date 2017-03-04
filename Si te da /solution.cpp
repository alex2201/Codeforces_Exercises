#include <iostream>

using namespace std;

int main (void)
{
	int numero_1, numero_2, contador =0, auxiliar_1, auxiliar_2;

	cin >> numero_1 >> numero_2;

	auxiliar_1 = numero_1;
	auxiliar_2 = numero_2;

	cout << numero_1 << ' ' << numero_2 << ' ';

	do
	{
		auxiliar_1 = auxiliar_1 + auxiliar_2;
		if(auxiliar_1 > 9)
			auxiliar_1 = auxiliar_1 % 10;
		cout << auxiliar_1 << ' ';
		auxiliar_1 += auxiliar_2;
		auxiliar_2 = auxiliar_1 - auxiliar_2;
		auxiliar_1 = auxiliar_1 - auxiliar_2;
		contador++;
	}while(auxiliar_1 != numero_1 || auxiliar_2 != numero_2);

	cout << '\n' << contador;

	return 0;
}