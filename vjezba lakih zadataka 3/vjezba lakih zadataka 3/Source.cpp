#include <iostream>
#include <string>
#include <cmath>


using namespace std;



//	1. ZADATAK;
//	Napišite konzolnu aplikaciju za unos bodova iz dva kolokvija. Raspon bodova je of 0 do 100. Ako je uneseni broj izvan raspona napiasati odgovarajuæu poruku
//	i završiti program. Ako iz svakog kolokvija student ima barem 40 bodova i prosjeèna vrijednost osvojenih bodova je barem 50 napišite "Prolaz" inaèe
//	 napišite "Pad". Koristite logièki operator And.




//int firstKol;
//int secondKol;
//
//int main()
//{
//	cout << "Molim unesite bodove iz prvog kolokvija" << endl;
//	cin >> firstKol;
//	cout << "Molim unesite bodove iz drugog kolokvija" << endl;
//	cin >> secondKol;
//
//	if (firstKol > 100 || secondKol > 100)
//	{
//		cout << "Nije pravilan unos bodova, molim ponovo pokrenite program." << endl;
//	}else
//		if (firstKol >= 40 && secondKol >= 40 && firstKol + secondKol >= 100)
//		{
//			cout << "Prolaz" << endl;
//		}else
//			if (true)
//			{
//				cout << "Pad" << endl;
//			}
//
//		system("pause");
//}


//	2. ZADATAK;
//	Napišite program koji æe uèitati tri prirodna broja i provjeriti da li ti brojevi mogu biti duljine stranica trokuta. Ako mogu, raèuna se površina trokuta
//	i ispisuje rezultat. U suprotnom se ispisuje poruka "Uneseni brojevi ne mogu biti stranice trokuta!".
//	Uputa:
//	- Podrazumjeva se da su uneseni brojevi prirodni.
//	- Za stranice trokuta vrijedi da zbroj bilo koje dvije stranice mora biti veæi od treæe stranice
// - Koristi se Herenova formula za površinu trokuta

//	Složeni uvijet provjere jesu li tri broja duljine stranica trokuta prvo zadajte koristeæi logièki operator And. Kad se ubjerite da program radi ispravno 
//	promijenite program tako da uvjet zadate koristeæi logièki prerator Or. Pri tom, naravno, morate napraviti još nene uzmjene unutar If..Then strukture grananja


//int a, b, c; //  unesene stranice
//int k; // kateta
//float s; // s = (a + b + c)/2
//int s1, s2; // stranice
//float p; // površina
//int sqS1, sqS2; // kvadrati stranica 
//
//int main()
//{
//	cout << "Molim unesite tri prirodna broja koja predstavljaju duljine stranica" << endl;
//	
//	cin >> a;
//	cin >> b;
//	cin >> c;
//	
//	cout << "unesene vrijednosti su  " << a << ", " << b << " i " << c << endl;
//
//	if (a > b && a > c)
//	{
//		k = a;
//		s1 = b;
//		s2 = c;
//
//	}else
//		if (b > a && b > c)
//		{
//			k = b;
//			s1 = a;
//			s2 = c;
//		}else
//			if (c > b && c > a)
//			{
//				k = c;
//				s1 = b;
//				s2 = a;
//			}
//
//		cout << "duljine stranica su " << s1 << " i " << s2 << " a duljina katete je " << k << endl;
//
//
//		sqS1 = pow(s1, 2);
//		sqS2 = pow(s2, 2);
//
//		s = (a + b + c) / 2;
//
//		cout << "kvadrat prve stranice je " << sqS1 << endl;
//		cout << "kvadrat druge stranice je " << sqS2 << endl;
//
//		cout << "duljina katete je " << k << endl;
//		cout << "vrijednost s je " << s << endl;
//	
//
//		if (k > s1 + s2 || k != sqrt(sqS1 + sqS2))
//		{
//			cout << "Uneseni brojevi ne mogu biti stranice trokuta!" << endl;
//		}
//		else
//		{
//			p = sqrt(s * (s - a) * (s - b) * (s - c));
//			cout << "Povrsina trokuta je " << p << endl;
//		}
//		
//	
//	system("pause");
//}


//	3. ZADATAK;
//	Napišite konzolnu aplikacuju za unos cijelog broja. Ako je zadnja znamenka neparna ispisuje se tekstualno - npr. ako je zadnja znamenka 7 ispisuje se "sedam",
//	a ako je parna ispisuje se samo poruka "zadnja znamenka broja je parna".

//int a; // uneseni broj
//
//int main()
//{
//	cout << "Molim unesite jedan prirodni broj" << endl;
//	cin >> a;
//
//	if (a % 2 == 0)
//	{
//		cout << a << endl;
//	}else
//		if (a == 1)
//		{
//			cout << "jedan" << endl;
//		}else
//			if (a == 3)
//			{
//				cout << "tri" << endl;
//			}
//			else
//				if (a == 5)
//				{
//					cout << "pet" << endl;
//				}
//				else
//					if (a == 7)
//					{
//						cout << "sedam" << endl;
//					}
//					else
//						if (a == 9)
//						{
//							cout << "devet" << endl;
//						}
//						else                 // STAO SAM NA BROJU 9 JER MI SE NE DA DALJE PISATI A NE ZNAM POSTOJI LI MOGUÈNOST DA SE INT BROJ PREPOZNA I AUTOMATSKI PRETVORI U STRING ODGOVARAJUÆEG IMENA
//						{
//							cout << "STAO SAM NA BROJU 9 JER MI SE NE DA DALJE PISATI A NE ZNAM POSTOJI LI MOGUCNOST DA SE INT BROJ PREPOZNA I AUTOMATSKI PRETVORI U STRING ODGOVARAJUCEG IMENA" << endl;
//						}
//
//		system("pause");
//
//}


//	4. ZADATAK;
//	Napisati program koji æe na osnovu unesenog atomskog broja elementa ispisati ime elementa i propadajuæi sumbol. Ukoli atomsku broj nije meðu ponuðenima
//	napisati poruku " Nije u tabelu". Zadatak ruješite pomoæu Select Case strukture grananja.


//int atomicNumber;
//
//
//int main()
//{
//	cout << "Molim unesite atomski broj." << endl;
//	cin >> atomicNumber;
//
//	switch (atomicNumber)
//	{
//	case 13:
//		cout << "Naziv spoja je Aluminij i njegov kemijski znak je Al" << endl;
//		break;
//
//	case 26:
//		cout << "Naziv spoja je Zelezo i njegov kemijski znak je Fe" << endl;
//		break;
//
//	case 29:
//		cout << "Naziv spoja je Bakar i njegov kemijski znak je Cu" << endl;
//		break;
//
//	case 47:
//		cout << "Naziv spoja je Srebro i njegov kemijski znak je Ag" << endl;
//		break;
//
//	case 79:
//		cout << "Naziv spoja je Zlato i njegov kemijski znak je Au" << endl;
//		break;
//
//	default:
//		cout << "Navedeni element nije u tabeli" << endl;
//		break;
//	}
//
//
//	system("pause");
//}



//	5. ZADATAK;
//	Napišite program koji na osnovu uèitane godine g ispisuje naziv povijesnog razdoblja. Koristiti Switch.

int g;
int razdoblje;

int main()
{
	cout << "Molim unesite godinu:" << endl;
	cin >> g;

	if (g < -3500)
	{
		razdoblje = 1;
	}else
		if (g >= -3500 && g < 0)
		{
			razdoblje = 2;
		}else
			if (g >= 0 && g < 476)
			{
				razdoblje = 3;
			}else
				if (g >= 476 && g < 1492)
				{
					razdoblje = 4;
				}else
					if (g >= 1492 && g < 1918)
					{
						razdoblje = 5;
					}else
						if (g >= 1918)
						{
								razdoblje = 6;
						}

						cout << "godina je " << g << " a razdoblje je ";

	switch (razdoblje)
	{
	case 1:
		cout << "Prapovijest" << endl;
		break;

	case 2:
		cout << "Povijest" << endl;
		break;

	case 3:
		cout << "Stari vijek" << endl;
		break;

	case 4:
		cout << "Srednji vijek" << endl;
		break;

	case 5:
		cout << "Novi vijek" << endl;
		break;

	case 6:
		cout << "Moderno doba" << endl;
		break;

	default:
		cout << "do ovoga ne bi smjelo doci tu je onda neka greska" << endl;
		break;
	}

	system("pause");
}