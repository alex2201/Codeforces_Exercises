#include <iostream>
#include <stdio.h>
#include <set>

using namespace std;

int main (void)
{
	char letras[1001];
	set<char> numero_letras;

	fgets(letras, 1000, stdin);

	for (int i = 0; letras[i] != '\0'; i++)
		if(letras[i] >= 'a' && letras[i] <= 'z')
			numero_letras.insert(letras[i]);

	cout << numero_letras.size();

	return 0;
}