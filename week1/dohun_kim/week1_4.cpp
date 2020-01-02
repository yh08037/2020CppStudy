#include <iostream>
#include <list>
#include <random>
#include <limits>
#include <ctime>


int main() {

  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);


  // std::default_random_engine engine(std::random_device{}());   
  std::default_random_engine engine((unsigned int)time(NULL));   

  // std::uniform_int_distribution<int> distribution(
  //   std::numeric_limits<int>::min(), 
  //   std::numeric_limits<int>::max()
  // );
  std::uniform_int_distribution<int> distribution(0, 100);


  std::list<int> lst;

  int elem;
  std::list<int>::iterator iter;

  for ( int i = 0; i < 5; i++ ) {
    for ( int j = 0; j < 10; j++ ) {
      elem = distribution(engine);
     
      if ( lst.size() == 0 ) 
        lst.push_back(elem);
     
      else {
        for ( iter = lst.begin(); iter != lst.end(); iter++ ) {      
          if ( *iter == elem ) {
            std::cout << "duplicated. (" << elem << ")\n";
            break;
          }
          if ( *iter > elem ) {
            lst.insert(iter, elem);
            break;
          }
        }
        if ( iter == lst.end() )
          lst.push_back(elem);
      }
    }

    for ( int it : lst )
      std::cout << it << " ";
    std::cout << "\n\n";
  }

  return 0;
}