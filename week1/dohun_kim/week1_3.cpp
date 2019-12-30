#include <iostream>
#include <list>


int main() {

  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);


  std::list<int> lst;

  for ( int i = 0; i <= 1000; i++ ) 
    lst.push_back(i);
  
  // iterator
  for ( std::list<int>::iterator it = lst.begin(); it != lst.end(); it++ ) 
    std::cout << *it << " ";
  std::cout << "\n";

  // range based for
  for ( int it : lst ) 
    std::cout << it << " ";
  std::cout << "\n";

  return 0;
}