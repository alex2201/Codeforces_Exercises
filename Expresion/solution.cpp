#include <iostream>

using namespace std;

int main (void)
{
	int numero_1, numero_2, numero_3, auxiliar, resultado = 0;

	cin >> numero_1 >> numero_2 >> numero_3;

	for (int i = 1; i <= 6; i++)
	{
		int auxiliar;
		switch(i)
		{
			case 1:
				auxiliar = numero_1 + numero_2 + numero_3;
				break;
			case 2:
				auxiliar = numero_1 * numero_2 + numero_3;
				break;
			case 3:
				auxiliar = numero_1 * (numero_2 + numero_3);
				break;
			case 4:
				auxiliar = numero_1 + numero_2 * numero_3;
				break;
			case 5:
				auxiliar = numero_1 * numero_2 * numero_3;
				break;
			case 6:
				auxiliar = (numero_1 + numero_2) * numero_3;
				break;
		}
		if(auxiliar > resultado)
			resultado = auxiliar;
	}

	cout << resultado;

	return 0;
}