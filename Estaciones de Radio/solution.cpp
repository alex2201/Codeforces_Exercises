#include <iostream>
#include <math.h>

using namespace std;

int main (void)
{
	int frecuencia, i;

	cin >> frecuencia;

	if(frecuencia < 540 || frecuencia > 1520)
	{
		cout << "error";
		return 0;
	}

	int estaciones[5] = {580,980,1190,1250,1420};

	if(frecuencia < 580)
	{
		cout << "adelante " << 580 - frecuencia;
		return 0;
	}
	for(i = 0; frecuencia > estaciones[i] && i < 5; i++);

	if(i == 5)
	{

		cout << "atras " << fabs(1420 - frecuencia);
	}
	else if(fabs(frecuencia - estaciones[i - 1]) == fabs(estaciones[i] - frecuencia))
	{
		cout << "adelante " << fabs(frecuencia - estaciones[i]);
	}
	else if(fabs(frecuencia - estaciones[i - 1]) < fabs(estaciones[i] - frecuencia))
	{
		cout << "atras " << fabs(frecuencia - estaciones[i - 1]);
	}
	else
	{
		cout << "adelante " << fabs(frecuencia - estaciones[i]);
	}


	return 0;
}