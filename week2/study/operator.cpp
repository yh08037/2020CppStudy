#include <iostream>
#include<algorithm>

class vector
{
public:
	vector();
	~vector();
	vector operator+(const vector a)const;
private:
	int mX, mY;
};

vector::vector() : mX(0), mY(0)
{
	;
}

vector::~vector()
{
}

vector vector::operator+(const vector a)const
{
	vector c;
	c.mX = a.mX + mX;
	c.mY = a.mY + mY;
	return c;
}

int main()
{

	vector a;
	vector b;
	a + b;// == 
	a.operator+(b);

	return;
}
