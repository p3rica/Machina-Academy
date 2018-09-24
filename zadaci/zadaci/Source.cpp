#include <iostream>
#include <memory>
using namespace std;

//1 zadatak
//napisati program koji æe uzet unos 2 broja te ih podijeliti i ispisati rezultat *

//float prvib, drugib, rezultat;
//
//
//
//
//int main()
//{
//	
//	cout << "unesite prvi broj?" << endl;
//	cin >> prvib;
//	
//	cout << "unesite drugi broj?" << endl;
//	cin >> drugib;
//
//	if (drugib == 0)
//	{
//		cout << "nemoguce je dijeliti sa nulom" << endl;
//
//	}
//	else
//	{
//		rezultat = prvib / drugib;
//
//		cout << "rezultat dijeljenja je ";
//		cout << rezultat << endl;
//	}
//
//	system("pause");
//}


//2 zadatak
//napisati program koji uzima unos 2 godine, te ispisuje sve prijestupne godine u tom intervalu************************** odrediti i koja je prijestupna 

/*int pg, zg;

void pocetnagodina(int pg, int zg)
{
	int pocetnagod;
	int zadnjagod;

	if (pg < zg)
	{
		pocetnagod = pg;
		zadnjagod = zg;
	}
	else if (pg > zg)
	{
		pocetnagod = zg;
		zadnjagod = pg;
	}
	else
	{
		cout << "obje godine ne mogu biti iste" << endl;
		return;
	}

	

	while ((pocetnagod % 4) != 0)
	{
		pocetnagod++;
	}

	if (pocetnagod > zadnjagod)
	{
		cout << "u zadanom intervalu nema prijestupne godine" << endl;
	}

	cout << "u intervalu od " << pg << " godine do " << zg << " godine" << endl;
	cout << " prijestupne godine su: " << endl;

	

	for (size_t i = pocetnagod; i <= zadnjagod; i += 4)
	{
		cout << i << endl;
	}
}



int main()
{
	cout << "unesit prvu godinu" << endl;
	cin >> pg;

	cout << "unesit drugu godinu" << endl;
	cin >> zg;

	pocetnagodina(pg, zg);
	

	system("pause");
}*/


//3 zadatak
//napisati program koji trazi unos korisnika jedan broj, te ispisuje toliko znamenki fibonacijevog reda


int a;

void brojponavljanja(int a)
{
	int prethbroj = 0;
	int prvbroj = 1;
	int trenutrezul;

	for (size_t i = 1; i <= a; i++)
	{
	trenutrezul = prvbroj;
	prvbroj += prethbroj;
	prethbroj = trenutrezul;
	cout << prvbroj << endl;

	}
}

int main()
{
	cin >> a;

	brojponavljanja(a);

	system("pause");
}



//4 zadatak
//napisati program koji trazi unos od korisnika za radius kruznice te ispisati povrsinu kruznice

/*float r, P;

int main()
	{
	cout << "molimo unesite radius" << endl;
	cin >> r;
	P = (r * r) * 3.14;

	cout << "povrsina kruga je " << P << endl;
	system("pause");
	}*/


	

