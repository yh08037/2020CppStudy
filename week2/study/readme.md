# quick sort random 시드 세팅에 따른 성능 비교


## 1. 고정 인덱스

퀵소트 테스트 돌리는데 피봇으로 고정 인덱스 박아넣으면
소팅하는 정렬상태는 비중복 값으로 완전랜덤으로 섞여있음

n = 10000000
횟수Hoare’s partitionlomuto’s partition
-------------------------

|    |  Hoare’s   | lomuto’s   |
|:----:|:----:|:----:|
|1회 | 0.748 |0.838 |
| 2회 |0.711|0.753|
|3회 |0.716 |0.757 |
|4회  |0.722|0.762 |
| 5회 |0.712|0.763 |
|6회|0.725 |0.754|
|7회|0.722|0.768|
|8회|0.709|0.746|
|9회| 0.732|0.743|
|10회|0.727|0.738|



## 2. 여기서 매 파티션마다 시드값을 새로 줄경우에

```c++
std::mt19937_64 rng;
rng.seed(std::random_device()());
std::uniform_int_distribution<int>distribution(start, end)
```
n = 1000000 첫번째보다 n은 10배 작음.

|    |  Hoare’s   | lomuto’s   |
|:----:|:----:|:----:|
|1회| 2.969| 2.919|
| 2회|2.874|2.911|
| 3회|2.897|2.889|
|4회|2.919|2.886|
|5회|2.916|2.875|
|6회|2.888|2.878|
|7회|2.9|2.883|
|8회|2.924|2.903|
|9회|2.891|2.871|
|10회|2.88|2.904|


## 3. 시드생성을 전역에

다음코드를 전역과 메인함수에 넣고,
```c++
std::mt19937_64 rng;
rng.seed(std::random_device()());
```

```c++
std::uniform_int_distribution<int>distribution(start, end)
```
이것만 재귀에 넣어서 구했을때
n은 두번째와 동일


|    |  Hoare’s   | lomuto’s   |
|:----:|:----:|:----:|
|1회|0.095|0.101|
|2회|0.088|0.104|
|3회|0.093|0.094|
|4회|0.101|0.098|
|5회|0.093|0.093|
|6회|0.088|0.091|
|7회|0.085|0.092|
|8회|0.083|0.089|
|9회|0.085|0.091|
|10회|0.085|0.091|

