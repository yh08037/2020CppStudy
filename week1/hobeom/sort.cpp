#include <vector>
#include <iostream>
#include <algorithm>
int main(void)
{
	int n;
	std::cin >> n;
	std::vector<int> a;
	for(int i = 0; i < n; i++){
		a.push_back(i);
	}
	for(int i = 0; i < n; i++){
		std::cout << a[i] << ' ';
	}
	std::sort(a.begin(), a.end(), std::greater<int>());
	for(int i = 0; i < n; i++){
		std::cout << a[i] << ' ';
	}
	return 0;
}
