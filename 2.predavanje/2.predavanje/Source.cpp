#include <iostream>
using namespace std;

//Varijable(primitivni tipovi)
int integer;
float floatingpointnumber;
bool boolean;
char character;


/*int velicina(int x, int y)
{
	
	int result = x + y;

	return result;
}*/

int rezultat(int x)
{
	switch (x)
	{
	case 1:
		cout << "pobjeda!!!!" << endl;
		return x;

	case 2:
		cout << "gubitak" << endl;
		return x;

	default:
		cout << "neispravan unos" << endl;
		return x;
	}
}



int main()
{
	sizeof(integer);
	sizeof(floatingpointnumber);
	sizeof(boolean);
	sizeof(character);

	//int kraj = velicina(2, 7);
	int kraj = rezultat(4);
	cout << kraj << endl;
	system("pause");
}