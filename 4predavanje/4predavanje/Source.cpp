#include <iostream>
#include <vector>
#include <string>
#include <xstring>




using namespace std;

int factorial(int n) {
	if (n == 1) {
		return 1;
	}
	else {
		cout << n << endl;
		return n * factorial(n - 1);
		
	}
}
int main() {
	cout << factorial(4) << endl;
	system("pause");
}


/*int n;


int main()
{
	cin >> n;

	int factorial = n;

	int z = n - 1;
	for (size_t i = 1; i < n; i++)
	{
		cout << factorial << " puta " << z << " je " << endl;
		factorial = factorial * z;
		z = z - 1;
	}

	cout << factorial << endl;
	system("pause");
}*/

/*void cinto(int a, int b)
{
	int sum = a + b;
	cout << sum << endl;
}


void cinto(int a, int b, int c)
{
	int mul = a * b * c;
	cout << mul << endl;
}


int main()
{
	cinto(1,3,3);
	system("pause");
}*/

/*int main()
{
	int myArray[10];
	myArray[0] = 1;
	myArray[1] = 9;
	myArray[2] = 2;
	myArray[3] = 1;
	myArray[4] = 1;
	myArray[5] = 2;
	myArray[6] = 6;
	myArray[7] = 6;
	myArray[8] = 1;
	myArray[9] = 3;

	for (size_t i = 0; i < 10; i++)
	{
		cout << myArray[i] << endl;

	}

	vector<int> myVector;
	myVector.push_back(5);
	myVector.push_back(4);
	myVector.push_back(9);
	myVector.push_back(3);

	for (size_t i = 0; i < myVector.size(); i++)
	{
		cout << "values " << myVector[i] << endl;
	}*/

	/*string myString = "Marko";
	string reverseString;

	size_t j = 0;

	for (size_t i = myString.size() - 1; i > 0; i--)
	{
		reverseString[j] =  myString[i];
	}
	cout << reverseString << endl;


	system("pause");
}*/


	/*int main()
	{
		vector<int> vector2;
		

		vector2.push_back(1);
		vector2.push_back(2);
		vector2.push_back(3);
		vector2.push_back(4);
		vector2.push_back(5);
		vector2.push_back(6);
		vector2.push_back(7);
		vector2.push_back(8);
		vector2.push_back(9);
		vector2.push_back(10);
		vector2.push_back(11);
		vector2.push_back(12);
		vector2.push_back(13);
		vector2.push_back(22);


		int myArray[10];
		myArray[0] = 1;
		myArray[1] = 9;
		myArray[2] = 2;
		myArray[3] = 1;
		myArray[4] = 1;
		myArray[5] = 2;
		myArray[6] = 6;
		myArray[7] = 6;
		myArray[8] = 1;
		myArray[9] = 3;


		

		cout << vector2[3] << endl;
		cout << sizeof(vector2) << endl;
		cout << sizeof(myArray) << endl;





		system("pause");
		
	}*/