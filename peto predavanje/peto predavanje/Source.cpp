#include <iostream>
#include <vector>
#include <string>

using namespace std;

enum haircol
{
	blond,
	brown,
	black,
};

enum eyscol
{
	green,
	brownE,
	blue,
};

struct person
{
	string name;          //inicijalizacijska lista
	string lastName;
	string SSN;
	int yearsOld;
	string workField;
    haircol hairColor;
	eyscol eyscolor;
	int hight;
	int weight;
};


class osobe // naslijeðivanje: class osobe : public person
{
public:

	osobe() :
		name(""), lastName(""), SSN("11111111111"), yearsOld(0), workField(""), hairColor(haircol::black), eyscolor(eyscol::blue), hight(0), weight(0) // inicijalizacijska lista
	{

	}


	osobe(string Uname, string UlastName, string USSN, int UyearsOld, string UworkField, haircol UhairColor, eyscol UeysColor, int Uhight, int Uweight) // CONSTRUCTOR

	{
	    name = Uname;
		lastName = UlastName;
		SSN = USSN;
		yearsOld = UyearsOld;
		workField = UworkField;
		hairColor = UhairColor;
		eyscolor = UeysColor;
		hight = Uhight;
		weight = Uweight;
	}

	string name;                     //PROPERTIES OR ATRIBUTES // deklaracija podataka
	string lastName;
	int yearsOld;
	string workField;
	haircol hairColor;
	eyscol eyscolor;
	int hight;
	int weight;

	string getSSN()
	{
		return SSN;
	}

	void setSSN(string promSSN)
	{
		SSN = promSSN;
	}
private:
	string SSN;

};

//void printOsobe()
//{
//
//}

int main()
{
	person Mark;
	Mark.name = "Mark";
	Mark.lastName = "Farell";
	Mark.SSN = 12345678901;
	Mark.yearsOld = 25;
	Mark.workField = "Soldier";
	Mark.hairColor = haircol::blond;
	Mark.eyscolor = eyscol::green;
	Mark.hight = 183;
	Mark.weight = 85;

	osobe Petar = osobe("Petar", "Stanic", "12345678901", 31, "Army", haircol::brown, eyscol::green, 183, 85 );

	string PetarsSSN = Petar.getSSN();

	cout << PetarsSSN << endl;

	cout << "Molim upisite novi OIB" << endl;
	Petar.setSSN ("10987654321");
	string PetarssSSN = Petar.getSSN();
	cout << PetarssSSN << endl;


	system("pause");
}