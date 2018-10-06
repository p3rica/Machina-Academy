#include <iostream>
#include <string>
#include <vector>

using namespace std;

enum sex
{
male,
female,
undefined
};

enum stupanjObrazovanja
{
	NSS,
	SSS,
	VSHS,
	VSS,
};
	
struct Osoba
{
	sex spol;
	unsigned int godine;
	string OIB;
	string name;
	string prezime;
	bool bracnoStanje;
	string zvanje;
	stupanjObrazovanja stupanjO;
};

class Person
{
	public:
	sex spol;
	unsigned int godine;
	string OIB;
	string name;
	string prezime;
	bool bracnoStanje;
	string zvanje;
	stupanjObrazovanja stupanjO;
};


int main()
{

	int MyArray[5];
	MyArray[0] = 1;
	MyArray[1] = 6;
	MyArray[2] = 2;
	MyArray[3] = 7;
	MyArray[7] = 5;

	vector<int> MyVector;
	MyVector.push_back(5);

	for (int i = 0; i < MyVector.size(); i++)
	{

	}

	string StringOfText = "Hello World!";
	StringOfText += " Peace";


	Osoba Tin;
	Tin.bracnoStanje = false;
	Tin.godine = 29;
	Tin.name = "Tin";
	Tin.prezime = "Vukic";
	Tin.OIB = 12345678914;
	Tin.stupanjO = stupanjObrazovanja::SSS;
	Tin.spol = sex::male;
	Tin.zvanje = "The Tin";
	
	Person Bruno;
	Bruno.bracnoStanje = false;
	Bruno.godine = 29;
	Bruno.name = "Tin";
	Bruno.prezime = "Vukic";
	Bruno.OIB = 12345678914;
	Bruno.stupanjO = stupanjObrazovanja::SSS;
	Bruno.spol = sex::male;
	Bruno.zvanje = "The Tin";


	system("pause");

}

