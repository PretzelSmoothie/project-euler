/*

The sum of the squares of the first ten natural numbers is,

12 + 22 + ... + 102 = 385
The square of the sum of the first ten natural numbers is,

(1 + 2 + ... + 10)2 = 552 = 3025
Hence the difference between the sum of the squares of the first ten
natural numbers and the square of the sum is 3025 − 385 = 2640.

Find the difference between the sum of the squares of the first one
hundred natural numbers and the square of the sum.

Expected Answer: 25164150
*/

#include <iostream>
#include <cmath>

using std::cout;
using std::endl;

int main(){

  const int n = 100;
  int sum = n*(n+1)/2; //sum formula
  int squared = n*((n+1)*(2*n + 1))/6; //sum of squares formula
  int result = sum*sum - squared;

  cout << endl << endl
       << "the difference between the sum of the squares of the "
       << "first one hundred natural numbers and the square of the sum: "
       << result
       << endl << endl;

  return 0;
}
