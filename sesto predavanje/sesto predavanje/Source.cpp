#include <iostream>
#include <vector>
#include <string>

using namespace std;

class object
{
public:
	object() :
		active(false)
	{
	}

	~object()
	{
	}

	int x, y;

	bool isActive()
	{
		return active;
	}
	

private:

protected:

	bool active;
};


class entity : public object
{
public:
	entity(){}
	~entity(){}

	void activate()
	{
		active = true;
	}
private:

};



int main()
{

	/*int a = 7;
	int *ptrA = &a;
	
	cout << a << endl;
	cout << ptrA << endl;
	system("pause");

	object myObject = object();
	myObject.x = 5;
	myObject.y = 6;

	bool isMyObjectActive = myObject.isActive();

	entity entitiyObj = entity();
	cout << entitiyObj.isActive() << endl;
	entitiyObj.activate();
	cout << entitiyObj.isActive() << endl;*/

	{
		entity *anotherEntity = new entity;
		anotherEntity->x = 5;
		anotherEntity->y = 7;
		cout << "no" << endl;

		delete anotherEntity;
	}

	

	system("pause");
}

