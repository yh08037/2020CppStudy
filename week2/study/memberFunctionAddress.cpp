#include<iostream>
#include<cstdio>
using namespace std;
class sample
{
public:
	int ssample()
	{
	}

	static void sssample()
	{
		;
	}
	sample() = default;
	~sample() = default;
	void f() { ; } 
};


class sampleInheritance // public sample
{ 
public:
	void f() 
	{ ; }
};

void hello()
{
	;
}

int main()
{
	sample sam;
	cout << sizeof(sam) << endl ;
	
	sampleInheritance mae;
	cout << sizeof(mae) << endl;

	// fuction address
	cout << "function address  " << &hello  << ' '<<  sizeof(&hello) << endl;

	//static member function address
	cout << "static member fuction address: "   << sample::sssample << ' ' << sizeof(&sample::sssample) << endl;

	//member fucntion address
	int(sample:: * fp)() = &sample::ssample;
	printf("sample::ssample address address %p  %d\n", fp, sizeof(fp));

	void(sample:: * fffp)() = &sample::f;
	printf("sample::f address %p  %d\n ", fffp, sizeof(fffp));
	//std::cout << "sample::f address" << fffp << ' ' << sizeof(fffp) << std::endl;

	//cout << endl << endl;

	void(sampleInheritance:: * ffp)() = &sampleInheritance::f;
	std::cout << "sampleInheritance::f address" <<  (void*)&ffp << ' '<< sizeof(ffp) << std::endl;
	//cout << &sample::f << endl;
	printf("sampleInheritance::f address %p  %d\n", ffp, sizeof(ffp));
	
	return 0;
}