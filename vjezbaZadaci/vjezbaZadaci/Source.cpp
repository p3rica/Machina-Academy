#include <iostream>
using namespace std;



/*#include <ctime>

int main()
{
	cout << time(0) << endl;
	system("pause");

	cout << time(0) << endl;
	system("pause");
}*/


/*#include <cstdlib>


int main()
{
	for (size_t i = 0; i < 20; i++)
	{
		cout << 3 +(rand() % 5) << endl;

	}
	

	system("pause");
}*/


#include <vector>

int main()
{
	std::vector<int> myvector;
	int myint;

	std::cout << "Please enter some integers (enter 0 to end):\n";

	do {
		std::cin >> myint;
		myvector.push_back(myint);
	} while (myint);

	std::cout << "myvector stores " << int(myvector.size()) << " numbers.\n";
	std::cout << myvector[1] << endl;
	cout << "the size of vector is" << sizeof(myvector) << endl;

	system("pause");
	return 0;
}

// 1. Zadatak**************************************************************************************************************************************************************************************************

/*Requires:
variables, data types, and numerical operators
basic input / output
logic(if statements, switch statements)

Write a program that allows the user to enter the grade scored in a programming class (0 - 100).
If the user scored a 100 then notify the user that they got a perfect score.

★ Modify the program so that if the user scored a 90 - 100 it informs the user that they scored an A

★★ Modify the program so that it will notify the user of their letter grade
0 - 59 F 60 - 69 D 70 - 79 C 80 - 89 B 90 - 100 A*/


//int x;
//char ocjena;
//
//
//int main()
//{
//	cout << "Molim vas unesite svoje bodove" << endl;
//	cin >> x;
//
//	if (x == 100)
//	{
//		cout << "Cestitam ostvarili ste najveci moguci broj bodova!" << endl;
//	}else 
//
//		if (90 <= x && x < 100)
//		{
//			cout << "Cestitam ostvarili ste ocjenu 5!" << endl;
//		}else
//			if (80 <= x && x < 90)
//			{
//				cout << "Cestitam ostvarili ste ocjenu 4!" << endl;
//			}else
//				if (70<= x && x < 80)
//				{
//					cout << "Dobro uradeno, ostvarili ste ocjenu 3!" << endl;
//				}else
//					if (60<= x && x < 70)
//					{
//						cout << "Vasa ocjena je 2!" << endl;
//					}else
//						if (0<= x && x < 60)
//						{
//							cout << "Nazalost niste zadovoljili potreban rezultat" << endl;
//						}
//						else {
//							cout << "Molim vas unesite svoj broj bodova, brojevima od 1 do 100" << endl;
//						}
//
//
//
//	system("pause");
//}




// 2. Zadatak**************************************************************************************************************************************************************************************************

/*Requires:
variables, data types, and numerical operators
basic input/output
logic (if statements, switch statements)

Write a program that presents the user w/ a choice of your 5 favorite beverages (Coke, Water, Sprite, ... , Whatever).
Then allow the user to choose a beverage by entering a number 1-5.
Output which beverage they chose.

★ If you program uses if statements instead of a switch statement, modify it to use a switch statement.
If instead your program uses a switch statement, modify it to use if/else-if statements.

★★ Modify the program so that if the user enters a choice other than 1-5 then it will output "Error. choice was not valid, here is your money back."*/


//int x;
//
//int main()
//{
//	cout << "Molim odaberite pice" << endl;
//	cout << "1 - CocaCola" << endl;
//	cout << "2 - Fanta" << endl;
//	cout << "3 - Sprite" << endl;
//	cout << "4 - PepsiCola" << endl;
//	cout << "5 - 7up" << endl;
//	cout << "6 - Miranda" << endl;
//	cin >> x;
//
//	switch (x)
//	{
//	case 1:
//		cout << "Odabrali ste CocaColu" << endl;
//		break;
//	case 2:
//		cout << "Odabrali ste Fantu" << endl;
//		break;
//	case 3:
//		cout << "Odabrali ste Sprite" << endl;
//		break;
//	case 4:
//		cout << "Odabrali ste PepsiColu" << endl;
//		break;
//	case 5:
//		cout << "Odabrali ste 7up" << endl;
//		break;
//	case 6:
//		cout << "Odabrali ste Mirandu" << endl;
//		break;
//	default:
//		cout << "Error. choice was not valid, here is your money back." << endl;
//	}
//
//	system("pause");
//}



//3. Zadatak***************************************************************************************************************************************************************************************************
/*Requires:
variables, data types, and numerical operators
basic input/output
logic (if statements, switch statements)
loops (for, while, do-while)

Write a program that ccontinues to asks the user to enter any number other than 5 until the user enters the number 5.
Then tell the user "Hey! you weren't supposed to enter 5!" and exit the program.

★ Modify the program so that after 10 iterations if the user still hasn't entered 5 will tell the user "Wow, you're more patient then I am, you win." and exit.

★★ Modify the program so that it asks the user to enter any number other than the number equal to the number of times they've been asked to enter a number. 
(i.e on the first iteration "Please enter any number other than 0" and on the second iteration "Please enter any number other than 1"m etc. etc. 
The program must behave accordingly exiting when the user enters the number they were asked not to.) */

//int x;
//int i = 0;
//int y = 0;
//
//int main()
//{
//	
//	
//
//	while (x != 5)
//	{
//		cout << "Please enter any number other than 5 and other than " << y << endl;
//		cin >> x;
//		cout << "You chose number " << x << endl;
//		i++;
//		
//
//		
//
//		if (x == 5)
//		{
//			cout << "Hey! you weren't supposed to enter 5!" << endl;
//		}else
//			if (i >= 10)
//			{
//				cout << "Wow, you're more patient then I am, you win." << endl;
//				break;
//			}else
//				if (x == y)
//				{
//					cout << "Hey! you weren't supposed to enter " << y << endl;
//					break;
//				}
//
//			y++;
//
//	}
//
//   system("pause");
//}



//4. Zadatak****************************************************************NEDOSTATAK************************************************************************************************************************

/*Requires:
variables, data types, and numerical operators
basic input/output
logic (if statements, switch statements)
loops (for, while, do-while)
arrays

Write a program that asks the user to enter the number of pancakes eaten for breakfast by 10 different people (Person 1, Person 2, ..., Person 10)
Once the data has been entered the program must analyze the data and output which person ate the most pancakes for breakfast.

★ Modify the program so that it also outputs which person ate the least number of pancakes for breakfast.

★★★★ Modify the program so that it outputs a list in order of number of pancakes eaten of all 10 people.
i.e.
Person 4: ate 10 pancakes
Person 3: ate 7 pancakes
Person 8: ate 4 pancakes
...
Person 5: ate 0 pancakes*/


/*int osoba[10];
int i;
int nMax = 0;


int main()
{
	

	for ( i = 1; i <= 10; i++)
	{
		cout << "unesite broj pojedenih palacinki za osobu: " << i  << endl;
		cin >> osoba[i];
	}

	if (nMax < osoba[0])
	{
		nMax = osoba[0];
		osoba[0 + 1];
	}
	
	
	cout << "najveci broj pojedenih palacinaka je " << nMax << endl;
	
	system("pause");
}*/



