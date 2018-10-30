#include <iostream>
#include <string>
#include <vector>

using namespace std;


//1. Zadatak - napraviti program pomocu kojega korisnik moze dodavati nove klijente za banku
//           - mogucnost dodavanja i skidanja sredstava sa racuna
//           - program neka ima podrsku za dodavanje beskonacno mnogo klijenata

// Person - mora imati: ime, prezime, OIB
//get imena, prezimena, OIB-a; privatno set imena, prezimena, OIB-a
//osoba neka ima instancu u Account klase

//Account - mora imati IBAN, balance
//public get iban, balance; public withrow, deposit, IBAN - inicijalizacija u konstruktoru

//Bank - mora sadržavati: osobe i racune te mogucnost dodavanja istih
//vector korisnika, mogucnost dodavanja novih korisnika, provjeru IBAN-a (ne smiju biti dva ista)
//mogucnost pretrazivanja korisnika i printanje IBAN-a i trenutnog stanja racuna

class Person
{
public:
	
	

	string getName()
	{
		return name;
	}
	void setName(string enteredName)
	{
		name = enteredName;
	}

private:
	string name;
	string prezime;
	string OIB;
};

class Account
{
public:
	string IBAN;
	float balance;
	
private:

};

class Bank
{
public:
	class Person;


private:

};





int main()
{

	Person osoba;
	osoba.setName("Marko");
	system("pause");
}