#include <iostream>
#include <Cstdlib>
#include <Time.h>

using namespace std;

int main()
{
	int siderMax = 6;
	int Terning;
	srand(time(0));

	cout << "Hvor mange terninger vil du gerne slaa med :\n";
	cin >> Terning;

	for (int i = 0; i < Terning; i++)
	{
		cout << "Resultatet af kast nummmer " << i << " er : " << rand() % siderMax + 1 << " \n";
	}

}