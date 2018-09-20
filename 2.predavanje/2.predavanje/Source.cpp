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

//int rezultat(int x)
//{
//	switch (x)
//	{
//	case 1:
//		cout << "pobjeda!!!!" << endl;
//		return x;
//
//	case 2:
//		cout << "gubitak" << endl;
//		return x;
//
//	default:
//		cout << "neispravan unos" << endl;
//		return x;
//	}
//}


void rezultat(int x)
{
	switch (x)
	{
	case 1:
		cout << "pobjeda!!!!" << endl;
		break;

	case 2:
		cout << "gubitak!!!!" << endl;
		break;
	}
}


int main()
{
	sizeof(integer);
	sizeof(floatingpointnumber);
	sizeof(boolean);
	sizeof(character);
	

	rezultat(2);
	system("pause");
	
	cin.get();
}
