#include <iostream>
#include <vector>


int main() {

  // for PS
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);


  // empty vector container constructor
  std::vector<int> v;  


  // push 1 ~ 10
  for ( int i = 0; i <= 10; i++ )
    v.push_back(i);


  // print by index
  for ( std::vector<int>::size_type i = 0; i < v.size(); i++ )
    std::cout << v.at(i) << " ";  
    // std::cout << v[i] << " ";  // vector can be referenced by []
  std::cout << std::endl;


  // pop last element
  v.pop_back();


  // print by iterator
  std::vector<int>::iterator iter;
  for ( iter = v.begin(); iter != v.end(); iter++ ) 
    std::cout << *iter << " ";
  std::cout << std::endl;


  return 0;
}