// stringstreams
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

 int factorial(int n) {
  // Base case
  if (n == 1) return 1;
  
  // Recursion
  return n * factorial(n-1);
}

int main()
{
  string mystr;   
  int number;
  cout << "Please enter an integer value: ";  
  getline (cin,mystr);
  stringstream(mystr) >> number;
  int z = factorial(number);
  std::cout << "The result is " << z;
}
