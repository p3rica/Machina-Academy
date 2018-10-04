#include <iostream>
using namespace std;

int recursion(int a)
{
	if (a <= 0)
	{
		return 0;
	}

	cout << "recursion" << a << endl;
	return recursion (a - 1);
}

int main()
{
	
	
	
	
	
	
	recursion(10);
	system("pause");
}