#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <sstream>

using namespace std;


//	1. ZADATAK;************************************************************************************************************************************************************************************************
//	Napisati program koji prima string od 8 znakova za datum roðenja npr "20.02.93" i ispisuje slijedece :
//
//	Dan rodenja : 20
//	Mjesec rodenja : 02
//	Godina rodenja : 93


//string unos = "00.00.00";
//
//int main()
//{
//	cout << "Molim unesite svoj datum rodenja brojevima u formatu DD.MM.GG npr. 25.09.99" << endl;
//	cin >> unos;
//
//	
//		cout << "Dan rodjena je: " << unos[0] << unos[1] << endl;
//		cout << "Mjesec rodjena je: " << unos[3] << unos[4] << endl;
//		cout << "Godina rodjena je: " << unos[6] << unos[7] << endl;
//
//
//	system("pause");
//}






//	2. ZADATAK;
//	Napisati program za hrvatsku lutriju. Korisnik radi unos od 7 brojeva u rasponu od 1 - 49, nakon toga program radi "izvlacenje" tj.radnom generira 7 brojeva od 1 - 49, 
//	te ispisuje korisnikov unos, zatim izvucene brojeve te na kraju koliko pogodataka korisnik ima.

int x1, x2, x3, x4, x5, x6, x7; // odabrano brojevi
vector <int> z; // vektor zakljucanih brojeva
int gbr; // generirani broj
vector <int> y; // vektor generiranih brojeva


int main()
{
	cout << "molimo unesite sedam brojeva od 1 do 49: " << endl;
	cin >> x1;
	if (x1 > 49 || x1 <= 0)
	{
		cout << "uneseni broj nije u rasponu od 1 do 49, molim krenite ponovo" << endl;
		system("pause");
		return 0;
	}
	z.push_back(x1);

	
	cin >> x2;
	if (x2 > 49 || x2 <= 0)
	{
		cout << "uneseni broj nije u rasponu od 1 do 49, molim krenite ponovo" << endl;
		system("pause");
		return 0;
	}

	if (x2 == x1)
	{
		cout << "uneseni broj ne moze biti jednak nekom od prije unesenih brojeva, molim krenite ponovo" << endl;
		system("pause");
		return 0;
	}
	z.push_back(x2);


	cin >> x3;
	if (x3 > 49 || x3 <= 0)
	{
		cout << "uneseni broj nije u rasponu od 1 do 49, molim krenite ponovo" << endl;
		system("pause");
		return 0;
	}

	if (x3 == x1 || x3 == x2)
	{
		cout << "uneseni broj ne moze biti jednak nekom od prije unesenih brojeva, molim krenite ponovo" << endl;
		system("pause");
		return 0;
	}
	z.push_back(x3);


	cin >> x4;
	if (x4 > 49 || x4 <= 0)
	{
		cout << "uneseni broj nije u rasponu od 1 do 49, molim krenite ponovo" << endl;
		system("pause");
		return 0;
	}

	if (x4 == x1 || x4 == x2 || x4 == x3)
	{
		cout << "uneseni broj ne moze biti jednak nekom od prije unesenih brojeva, molim krenite ponovo" << endl;
		system("pause");
		return 0;
	}
	z.push_back(x4);


	cin >> x5;
	if (x5 > 49 || x5 <= 0)
	{
		cout << "uneseni broj nije u rasponu od 1 do 49, molim krenite ponovo" << endl;
		system("pause");
		return 0;
	}

	if (x5 == x1 || x5 == x2 || x5 == x3 || x5 == x4)
	{
		cout << "uneseni broj ne moze biti jednak nekom od prije unesenih brojeva, molim krenite ponovo" << endl;
		system("pause");
		return 0;
	}
	z.push_back(x5);


	cin >> x6;
	if (x6 > 49 || x6 <= 0)
	{
		cout << "uneseni broj nije u rasponu od 1 do 49, molim krenite ponovo" << endl;
		system("pause");
		return 0;
	}

	if (x6 == x1 || x6 == x2 || x6 == x3 || x6 == x4 || x6 == x5)
	{
		cout << "uneseni broj ne moze biti jednak nekom od prije unesenih brojeva, molim krenite ponovo" << endl;
		system("pause");
		return 0;
	}
	z.push_back(x6);


	cin >> x7;
	if (x7 > 49 || x7 <= 0)
	{
		cout << "uneseni broj nije u rasponu od 1 do 49, molim krenite ponovo" << endl;
		system("pause");
		return 0;
	}

	if (x7 == x1 || x7 == x2 || x7 == x3 || x7 == x4 || x7 == x5 || x7 == x6)
	{
		cout << "uneseni broj ne moze biti jednak nekom od prije unesenih brojeva, molim krenite ponovo" << endl;
		system("pause");
		return 0;
	}
	z.push_back(x7);







	srand(time(0));// RNG sa lokalnim vremenom kao seed brojem

	

	
	for (int i = 1; i <= 7; i++)
	{
		gbr = (1 + (rand() % 49));

		/*if (gbr != y[0] && gbr != y[1] && gbr != y[2] && gbr != y[3] && gbr != y[4] && gbr != y[5] && gbr != y[6])
		{
			y.push_back(gbr);
		}
		else
		{
			i--;
		}*/
		cout << gbr << endl;
	}

	cout << "vasi izabrani brojevi su: " << x1 <<", " << x2 << ", " << x3 << ", " << x4 << ", " << x5 << ", " << x6 << " i " << x7 << endl;
	cout << "izvuceni brojevi su: " << y[0] << ", " << y[1] << ", " << y[2] << ", " << y[3] << ", " << y[4] << ", " << y[5] << " i " << y[6] << endl;

	system("pause");
}






//	3. ZADATAK;**********************************************************************************************************************************************************************************************
//	Napisati program koji ce dati korisniku da unese jedan broj i ispisati 30 brojeva Fibonacijevog niza, pocevsi od broja koji je korisnik unio.


//int x, y,z;
//
//int main()
//{
//	
//	cout << "Molimo unesite jedan broj koji ce posluziti kao osnova za fibonacijev niz" << endl;
//	cin >> x;
//
//	y = x;
//
//	for (int i = 0; i < 30; i++)
//	{
//		z = x + y;
//		cout << z << endl;
//		x = y;
//		y = z;
//	}
//
//
//
//	system("pause");
//}






//	4. ZADATAK;
//	Napisati program koji ce primiti unos texta i ispisati isti unazad.






//	5. ZADATAK************************************************************************************************************************************************************************************************
//	Napisati program koji prima unos 3 broja koji ce simulirati kuteve. Ispisati korisniku jel moguce da se napravi trokut od tih kuteva.

//int a, b, g;
//
//int main()
//{
//	cout << "Molim unesite vrijednosti kuteva" << endl;
//	cin >> a;
//	cin >> b;
//	cin >> g;
//
//	if (a + b + g == 180)
//	{
//		cout << "Od ovih kuteva moguce je napraviti trokut" << endl;
//	}else
//		cout << "Od ovih kuteva nije moguce napraviti trokut" << endl;
//
//
//	system("pause");
//}






//	6. ZADATAK;
//	Napisati program koji prima text i character od strane korisnika, te ispisuje taj text bez tog charactera.


//vector <string> split(const string s, char delimeter)
//{
//	vector <string> rezultat;
//	stringstream ss(s);
//	string item;
//
//	while (getline(ss, item, delimeter))
//	{
//		rezultat.push_back(item);
//	}
//
//	return rezultat;
//}
//
//
//int main()
//{
//	string unos;
//	char delimeter;
//
//	cout << "Molim unesite tekst." << endl;
//	cin >> unos;
//
//	cout << "Molim unesite slovo." << endl;
//	cin >> delimeter;
//
//	vector <string> a = split(unos, delimeter);
//	
//	for (auto i : a) cout << i << endl;
//	
//	system("pause");
//}
//
//
//



//	7. ZADATAK;***********************************************************************************************************************************************************************************************
//	Napisati program koji æe primiti vector brojeva, i ispisati korisniku koji brojevi su parni, a koji neparni


//vector <int> parni;
//vector <int> neparni;
//
//int input;
//
//
//int main()
//{
//	cout << "Unesite brojeve, 0 zatvara unos" << endl;
//
//
//	do
//	{
//		cin >> input;
//
//		if (input % 2 == 0 && input != 0)
//		{
//			parni.push_back(input);
//		}else
//			if (input % 2 != 0)
//			{
//				neparni.push_back(input);
//			}
//	} while (input != 0);
//
//
//	cout << "Parni brojevi su: " << endl;
//
//	for (int i = 0; i < parni.size(); i++)
//	{
//		cout << parni[i] << endl;
//	}
//
//
//	cout << "Neparni brojevi su: " << endl;
//
//	for (int i = 0; i < neparni.size(); i++)
//	{
//		cout << neparni[i] << endl;
//	}
//
//
//
//	system("pause");
//}






//Bonus :
//Napraviti pojednostavljenu simulaciju kartaske igre blackjack.Korisnika se pita hoce li uzeti kartu, y znaci da, n znaci ne.Ukoliko se korisnik odluci za kartu, 
//dodaje mu se ta karta.Cilj je skupiti zbroj 21 ili sto blize tom broju.Ukoliko korisnik ima zbroj veci od 21, automatski gubi igru.Nakon korisnika racunalo bira karte,
//racunalo ce odustati tj.nece vise uzimati karte ukoliko ili ima bolji zbroj od igraca ili je u rasponu 13 - 21.





