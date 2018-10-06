#include <iostream>
using namespace std;

int main()
{
	/*int array[6];
	int x = 3;

	for (size_t i = 0; i < 6; i++)
	{
		
		array[i] = x;
	}
	cout << array[3] << array [4] << array[2] << endl;*/

	int arr[] = { 16, 25, 31, 15 };
	int sum = 0;

	for (size_t i = 0; i < 4; i++)
	{
		sum = sum + arr[i];
	}

	cout << sum << endl;




	system("pause");
}