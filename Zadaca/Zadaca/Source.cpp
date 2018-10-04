#include <iostream>
#include <string>
using namespace std;


/*1. Napisati program koji prima string od 8 znakova za datum rodenj npr "20.02.93" i ispisuje slijedece :

Dan rodenja : 20
Mjesec rodenja : 02
Godina rodenja : 93*/

int main()
{
	string 
}
/*string datumrodj;
string delimiter = ".";

int main()
{
	cout << "unesite datum svog rodendana sa tockama izmedu dana, mjeseca i godine" << endl;
	cin >> datumrodj;

	size_t pos = 0;
	string token;


	while ((pos = datumrodj.find(delimiter)) != string::npos)
	{
		token = datumrodj.substr(0, pos);
		cout << token << endl;
		datumrodj.erase(0, pos + delimiter.length());
	}

	cout << datumrodj << endl;
	system("pause");
}*/

/*string s;
string delimiter = ".";

int main()
{
	cin >> s;
	size_t pos = 0;
	string token;
	while ((pos = s.find(delimiter)) != string::npos) {
		token = s.substr(0, pos);
		cout << token << endl;
		s.erase(0, pos + delimiter.length());
	}
	cout << s << endl;
	system("pause");
}*/




/*int main()
{
	string yourString;

	cout << "Enter string: ";
	cin >> yourString;
	std::cout << "Your string backwards is: " << std::endl;

	for (int i = yourString.length() - 1; i >= 0; i--)
	{
		std::cout << yourString[i];
	}
	std::cout << std::endl;
	system("pause");

}*/