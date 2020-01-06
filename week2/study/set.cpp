#include <iostream>
#include <set>
#include <random>
#include <algorithm>
typedef long long ll;

int main()
{ 
	int a = 0x7FFFFFFF;//max 0111 1111 1111 1111 11111111 1111 1111 
	int b = 0X80000000; //min
	std::cout << a << ' ' << b << '\n';


	std::mt19937_64 rng;
	rng.seed(std::random_device()());
	std::uniform_int_distribution<int>distribution(0x7FFFFFFF, );

	std::set<int> Set;
	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 10; ++j)
		{
			int num = distribution(rng);
			std::set<int>::const_iterator itr = std::find(Set.begin(), Set.end(), num);
			if (itr == Set.end()) //
			{
				Set.insert(itr, num);
			}
			else
			{
				std::cerr << "error" << '\n';
				//cerr
				// iostream
				// cout >>
				// cerr >>
				// clog >> 
				// 콘솔창에서 값을 출력을 해줌
				//  stdin defalut
				// txt log 
			}
		}

		for (int i : Set)
		{
			std::cout << i << ' ';
		}
		std::cout << '\n';
	}
	return 0;
}
