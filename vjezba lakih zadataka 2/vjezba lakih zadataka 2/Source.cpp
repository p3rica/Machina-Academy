#include <iostream>
#include <cmath>

using namespace std;


// 1. ZADATAK;
//Napi�ite program koji od korisnika tra�i unos stranice kvadrata. Ako je uneseni broj pozitivan izra�unava se i ispisuje dijagonala kvadrata.


//float a, d;// a = duljina stranice, d = duljina dijagonale
//
//int main()
//{
//	cout << "molim upisite duljinu stranice" << endl;
//	cin >> a;
//	if (a > 0)
//	{
//
//		float squarea = pow(a, 2);
//		float squared = squarea * 2;
//		d = sqrt(squared);
//
//		cout << "duljina dijagonale je " << d << "." << endl;
//		
//	}
//	else
//
//		cout << "duljina stranice ne mo�e biti jednaka 0 niti negativan broj" << endl;
//
//	system("pause");
//
//}
	


// 2. ZADATAK;
//Napi�ite program koji od korisnika tra�i unos cijelog broja a potom unos suprotnog broja.
//Ukoliko je korisnik to�no napisao suprotni broj ispisuje se poruka "odgovor je to�an" u suprotnom se ispisuje poruka "odgovor nije to�an".

//int a, b; // dva broja za usporedbu
//
//int main()
//{
//	cout << "molim unesite jedan broj " << endl;
//	cin >> a;
//	cout << "molim unesite broj koji predstavlja suprotnu vrijednost prvog broja" << endl;
//	cin >> b;
//
//	if (a + b == 0)
//	{
//		cout << "odgovor je tocan" << endl;
//	}
//	else
//
//		cout << "odgovor je netocan" << endl;
//
//	system("pause");
//}


//3. ZADATAK;
//Napi�ite program koji �e za u�itani cijeli broj provjeriti je li djeljiv sa 7 te ako jest napisati odgovaraju�u poruku, a ako nije napisati za koliko 
//ga treba uve�ati da bi bio dijeljiv sa 7.


//int a, b, c;
//int y = 0;
//
//int main()
//{
//
//	cout << "molim upisite jedan  broj" << endl;
//	cin >> a;
//
//	b = a / 7;
//	c = a % 7;
//
//	if (a % 7 == 0)
//	{
//		cout << "broj 7 u vas broj stane " << b << " puta" << endl;
//	}
//	else
//		if (a % 7 != 0)
//		{
//			for (int i = c; i < 7; i++)
//			{
//				y++;
//			}
//			cout << "vas broj treba uvecati za " << y << endl;
//		}
//
//	system("pause");
//
//}


//4. ZADATAK;
//Napi�ite program koji �e u�itati cijeli broj, te na osnovu unesene vrijednosti obaviti izra�un i ispis:
// - ako je vroj jednak 0 ispisat �e se poruka "ni�ta ne ra�unam"
// - ako je broj negativan ra�una se i ispisuje apsolutna vrijednost broja
// - ako je broj ve�i of 0 a manji ili jednak 20 ra�una se i ispisuje 2broj
// - ako je ve�i of 20 ra�una se i ispisuje drugi korjen broja



//int a;
//
//int main()
//{
//	cin >> a;
//	
//
//	if (a == 0)
//	{
//		cout << "nista ne racunam" << endl;
//	}else
//		if (a < 0)
//		{
//			a = a * (-1);
//			cout << a << endl;
//		}else
//			if (0 < a && a <= 20)
//			{
//				int sqA = 0;
//				sqA = pow(2, a);
//				cout << sqA << endl;
//			}else
//				if (20 < a)
//				{
//					float korjen = sqrt(a);
//					cout << korjen << endl;
//				}
//
//	system("pause");
//}



//5. ZADATAK;
//Neki trgova�ki centar pakira uskr�nje pakete sastavljene od jodnog �okoladnog zeke, 5 �okoladnih jaja i 3 �okoladna pili�a. 
//Na skladi�tu treno imaju (unijeti brojeve za sve tri kategorije)
//Napi�it program koji �e na osnovu unesenih vrijednosti ispisati koliko najvi�e paketi�a mogu napraviti.


int z, j, p;

int main()
{
	cout << "unesite broj cokoladnih zeka" << endl;
	cin >> z;

	cout << "unesite broj cokoladnih jaja" << endl;
	cin >> j;

	cout << "unesite broj cokoladnih pilica" << endl;
	cin >> p;

	int pakZ = z;
	int pakJ = j / 5;
	int pakP = p / 3;

	int pakB = pakZ;

	if (pakJ < pakP && pakJ < pakB)
	{		
		pakB = pakJ;
	}else
		if (pakP < pakJ && pakB > pakP)
		{
			pakB = pakP;
		}

	cout << "maksimalan broj paketa koje je moguce satstaviti je " << pakB << endl;
	system("pause");
}