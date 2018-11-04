#include <iostream>
#include <string>
#include <cmath>


using namespace std;


// 1. ZADATAK; 
//Rezervirajte memoriju za pohranu sljedeæih podataka: ime i prezime osobe, spol (m/z), datum roðenja, braèno stanje(true/false).
//Pridružite svim varijablama vrijednost i ispišite u zasebnim linijama sve unesene podatke.

// PREPRAVLJENO


/*int main()
{
	string name;
	string lastName;
	char sex;
	int birthDay;
	int birthMonth;
	int birthYear;
	bool married;

	cout << "Please enter your name" << endl;
	cin >> name;

	cout << "Please enter your last name" << endl;
	cin >> lastName;

	cout << "Please enter your sex with m for male and w for women" << endl;
	cin >> sex;

	string sexX;

	if (sex == 'w')
	{
		sexX = "woman";
	}else
		if (sex == 'm')
		{
			sexX = "male";
		}

	cout << "Please enter your birthday with presing ENTER between day, month and year" << endl;
	cin >> birthDay;
	cin >> birthMonth;
	cin >> birthYear;

	cout << "Please enter your married status with 0 for not married and 1 for married" << endl;
	cin >> married;

	string marriedD;

	if (married == 1)
	{
		marriedD = "married.";
	}else
		if (married == 0)
		{
			marriedD = "not married.";
		}

	cout << "Hello " << name << " " << lastName << " you were born on " << birthDay << "." << birthMonth << "." << birthYear << "." << " as  a " << sexX << ". You are currently " << marriedD << endl;

	system("pause");
}*/

//2. ZADATAK;
// Napisati konzolnu aplikaciju za izraèun zbroja, razlike, umnoška i kvocijenta dva cijela broja.
//Brojevima pridružite proizvoljne vrijednosti i ispišite rezultate raèunanja ( podrazumijeva se da je drugi broj razlièit od nule)

/*float x, y;
float sum = 0;
int racunskaR;

int main()
{
	cout << "Molim unesite dva broja te nakon toga izaberite raèunsku radnju" << endl;
	cout << "1 - zbrajanje" << endl;
	cout << "2 - oduzimanje" << endl;
	cout << "3 - mnozenje" << endl;
	cout << "4 - dijeljenje" << endl;

	cout << "Prvi broj je :";
	cin >> x;
	cout << "Drugi broj je :";
	cin >> y;
	cout << "Radnja je :";
	cin >> racunskaR;

	switch (racunskaR)
	{
	case 1:
		sum = x + y;
		cout << "Rezultat je " << sum << endl;
		break;

	case 2:
		sum = x - y;
		cout << "Rezultat je " << sum << endl;
		break;

	case 3:
		sum = x * y;
		cout << "Rezultat je " << sum << endl;
		break;

	case 4:
		sum = x / y;
		cout << "Rezultat je " << sum << endl;
		break;

	default:
		cout << "Nije izabrada ponuðena racunska radnja, molim pokusajte opet." << endl;
		break;
	}

	system("pause");
}*/

//3. ZADATAK;
//Napisati jednostavnu konzolnu aplikaciju u kojoj se od korisnika traži unos duljine letvice u cm i duljine dijela koji æe se izrezati.
//Izraèunajte i ispišite kolike se takvih dijelova može izreuati i kolike æe letvice preostati.

/*int lenght;
int part;
int partNumber;
int rest;

int main()
{
	cout << "Molim unesite duljinu ljestvice u cm" << endl;
	cin >> lenght;

	cout << "Molim unesite duljinu dijela koji su potrebni u cm" << endl;
	cin >> part;

	partNumber = lenght / part;
	rest = lenght % part;

	cout << "Broj dijelova koje ste dobili je: " << partNumber << ". A ostatak je: " << rest << "." << endl;
	system("pause");
}*/


//4. ZADATAK;
//Napšite program koji raèuna i ispisuje dijagonalu pravokutnika

//PREPRAVLJENO

/*float a, b, d;

int main()
{
	cout << "Upisite duljinu prve stranice" << endl;
	cin >> a;

	cout << "Upisite duljinu druge stranice a ako je duzina druge stranice nepoznata upisite 0 i poslije toga upisite duljinu dijagonale" << endl;
	cin >> b;

	if (b == 0)
	{
		cin >> d;
		float squareA = pow(a, 2);
		float squareD = pow(d, 2);

		float squareB = squareD - squareA;
		b = sqrt(squareB);

		cout << "Duljina druge stranice je " << b << "." << endl;
	}else

		if (b != 0)
		{
			float squareA = pow(a, 2);
			float squareB = pow(b, 2);

			float squareD = squareA + squareB;

			d = sqrt(squareD);

			cout << "Duljina dijagonale je " << d << "." << endl;
		}

	
	system("pause");
}*/


//5. ZADATAK;
//Napišite program za izraèun i ispis trajanja filma u satima i minutama. Vrijeme poèetka i kraja filma unosi se u satima i minutama.
//Podrazumijeva se da je film zapoèeo i završio u istom danu

/*int sh; // starting hour
int sm; // starting minute
int eh; // ending hour
int em; // ending minute

int main()
{
	cout << "Molim u prvom redu pisite u koliko sati je film poceo a u drugom redu upistite u koliko minuta tog sata je film poceo" << endl;
	cin >> sh;
	cin >> sm;

	cout << "Molim u prvom redu pisite u koliko sati je film zavrsio a u drugom redu upistite u koliko minuta tog sata je film zavrsio" << endl;
	cin >> eh;
	cin >> em;

	int dms; // minute of the day the movie has started
	dms = (sh * 60) + sm;

	int dme; // minute of the day the movie hast ended
	dme = (eh * 60) + em;

	int mlm; // movie lenght minutes
	mlm = dme - dms;

	int mlh; // movie lenght hours
	mlh = mlm / 60;

	int mlml; // movie lenght minutes left that were not convertet into hours
	mlml = mlm % 60;

	if (mlh == 1 && mlml == 1)
	{
		cout << "The movie playtime is " << mlh << " hour and " << mlml << " minute" << endl;
	}else
		if (mlh == 1 && mlml != 1)
		{
			cout << "The movie playtime is " << mlh << " hour and " << mlml << " minutes" << endl;
		}else
			if (mlh != 1 && mlml == 1)
			{
				cout << "The movie playtime is " << mlh << " hours and " << mlml << " minute" << endl;
			}else
				if (true)
				{
					cout << "The movie playtime is " << mlh << " hours and " << mlml << " minutes" << endl;
				}

	system("pause");
}*/
