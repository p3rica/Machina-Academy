#include <iostream>
using namespace std;

//1 zadatak
//napisati program koji æe uzet unos 2 broja te ih podijeliti i ispisati rezultat ******************************** dodaj još dijeljenje sa 0

/*int prvib, drugib, rezultat;


int main()
{
	cin >> prvib;
	system("pause");

	cin >> drugib;
	rezultat = prvib / drugib;

	cout << rezultat << endl;
	system("pause");
}*/


//2 zadatak
//napisati program koji uzima unos 2 godine, te ispisuje sve prijestupne godine u tom intervalu************************** odrediti i koja je prijestupna

/*int prvgod, drugod;

int main()
{
	cin >> prvgod;

	cin >> drugod;

	system("pause");

	int i = prvgod + 4;
	

	while (i < drugod)
	{
		cout << i << endl;
		i+= 4;
	}
	
	

	
	
	system("pause");
}*/

//3 zadatak
//napisati program koji trazi unos korisnika jedan broj, te ispisuje toliko znamenki fibonacijevog reda

//4 zadatak
//napisati program koji trazi unos od korisnika za radius kruznice te ispisati povrsinu kruznice

float r, P;

int main()
	{
	cout << "molimo unesite radius" << endl;
	cin >> r;
	P = (r * r) * 3.14;

	cout << "povrsina kruga je " << P << endl;
	system("pause");
	}
