// i/o example

#include <iostream>
using namespace std;
int result = 0;
template <typename T,unsigned S>
inline unsigned arraysize(const T (&v)[S]) { return S; }

int returnEven(int foo [], int length) {
   
  for (int n ; n<length ; ++n )
  {
    result += foo[n];
  }
  cout << result<<endl;
  return 0;
}

int main ()
{
  
  int foo [] = {16, 2, 77, 40, 129, 2, 4};
   
  //cout << arraysize(foo); 
  int length = arraysize(foo); 
  //cout << length;
  returnEven(foo, length); 
  
}