#include <iostream>
#include <vector>
#include <string>
#include <xstring>



using namespace std;

int main()
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
	}

	string myString = "Marko";
	string reverseString;

	size_t j = 0;

	for (size_t i = myString.size() - 1; i > 0; i--)
	{
		reverseString[j] =  myString[i];
	}
	cout << myString << endl;


	system("pause");
}