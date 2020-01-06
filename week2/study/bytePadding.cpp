
//byte padding test 
#include<iostream>

using namespace std;
class Test1
{
public:   // 패딩을 고려하지 않은 변수 나열
	char c0;
	int  i0;
	char c1;
	int  i1;
	char c2;
	int  i2;
	char c3;
	int  i3;
};



class Test2
{
public:   // 조금은 정렬된 변수 나열
	char c0;
	char c1;
	int  i0;
	int  i1;
	char c2;
	char c3;
	int  i2;
	int  i3;
};



class Test3
{
public:   // 패딩을 고려한 변수 나열
	char c0;
	char c1;
	char c2;
	char c3;
	int  i0;
	int  i1;
	int  i2;
	int  i3;
};


int main()
{
	Test1 ts1;
	Test2 ts2;
	Test3 ts3;
	cout << sizeof(ts1) << ' ' << sizeof(ts2) << ' ' << sizeof(ts3) << endl;
}
