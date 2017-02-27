#include <iostream>
#include <utility>
#include <vector>
#include <set>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int numero_moscas, vivas = 0, maximo_vivas = vivas, muertas = 0;
// Set que va a guardar los puntos de nacimiento y muerte para revisarlos después.
	set<int> puntos;
	set<int>::iterator it;

	cin >> numero_moscas;

// Vector que va a guardar los intervalos de vida de cada mosca.
	vector<pair<int,int> > intervalos_vida(numero_moscas);

	for (int i = 0; i < numero_moscas; i++)
	{
		cin >> intervalos_vida[i].first >> intervalos_vida[i].second;
		puntos.insert(intervalos_vida[i].first);
		puntos.insert(intervalos_vida[i].second);
	}

// Vector que nos ayudará a encontrar los intervalos donde estuvieron vivas el máximo número de moscas.
	vector<int> soluciones (puntos.size(), 0);

	it = puntos.begin();
	for (int i = 0; it != puntos.end(); it++, i++)
	{
		for (int j = 0; j < intervalos_vida.size(); j++)
		{
			if(*it == intervalos_vida[j].second)
			{
				muertas++;
				vivas--;
			}
			if(*it == intervalos_vida[j].first)
			{
				vivas++;
			}
		}
		if(vivas >= maximo_vivas)
			{
				maximo_vivas = vivas;
				soluciones[i] = maximo_vivas;
			}
	}

	cout << maximo_vivas << '\n';

	if(maximo_vivas == 0)
	{
		cout << "0 0";
	}

	it = puntos.begin();
	for (int i = 0; i < soluciones.size(); i++, it++)
		if(soluciones[i] == maximo_vivas)
		{
			cout << *it << ' ';
			it++;
			cout << *it <<'\n';
			it--;
		}

	return 0;
}