#include <iostream>
#include <string>


using namespace std;


// 1. ZADATAK; 
//Rezervirajte memoriju za pohranu sljede�ih podataka: ime i prezime osobe, spol (m/z), datum ro�enja, bra�no stanje(true/false).
//Pridru�ite svim varijablama vrijednost i ispi�ite u zasebnim linijama sve unesene podatke.

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

	cout << "Hello " << name << " " << lastName << " you were born on " << birthDay << "." << birthMonth << "." << birthYear << "." << " as  a " << sexX << " child. You are currently " << marriedD << endl;

	system("pause");
}*/

//2. ZADATAK;
// Napisati konzolnu aplikaciju za izra�un zbroja, razlike, umno�ka i kvocijenta dva cijela broja.
//Brojevima pridru�ite proizvoljne vrijednosti i ispi�ite rezultate ra�unanja ( podrazumijeva se da je drugi broj razli�it od nule)

/*float x, y;
float sum = 0;
int racunskaR;

int main()
{
	cout << "Molim unesite dva broja te nakon toga izaberite ra�unsku radnju" << endl;
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
		cout << "Nije izabrada ponu�ena racunska radnja, molim pokusajte opet." << endl;
		break;
	}

	system("pause");
}*/

//3. ZADATAK;
//Napisati jednostavnu konzolnu aplikaciju u kojoj se od korisnika tra�i unos duljine letvice u cm i duljine dijela koji �e se izrezati.
//Izra�unajte i ispi�ite kolike se takvih dijelova mo�e izreuati i kolike �e letvice preostati.

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