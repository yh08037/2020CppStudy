#include <vector>
#include <iostream>
#include <algorithm>
#include <random>
//code from https://gabble-workers.tistory.com/7
int getRandomNumber ( int min, int max )
{
    //< 1단계. 시드 설정
    std::random_device rn;
    std::mt19937_64 rnd( rn() );
 
    //< 2단계. 분포 설정 ( 정수 )
    std::uniform_int_distribution<int> range(min, max);
	//std::uniform_real_distribution
	//std::normal_distribution
    //< 3단계. 값 추출
    return range( rnd );
}

int main(void)
{
	int n;
	std::cin >> n;
	std::vector<int> a;
	for(int i = 0; i < n; i++){
		a.push_back(getRandomNumber(0,n));
	}
	for(int x: a){
		std::cout << x << ' ';
	}
	std::sort(a.begin(), a.end(), std::greater<int>());
	for(int x: a){
		std::cout << x << ' ';
	}
	return 0;
}
