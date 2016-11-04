/* If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
Find the sum of all the multiples of 3 or 5 below 1000. */

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
  int sum = 0;
  int n;

  cout << endl << endl
       << "This program contains the solutions for P1 of Project Euler,"
       << endl
       << "entitled 'Multipes of 3 and 5'."
       << "Please input an n (P1 requires 1000): ";
  cin >> n;

  for(int i = 0; i < n; i++){
    if( (i % 3 == 0) || (i % 5 == 0)){
      sum += i;
    }
  }

  cout << endl << sum << endl;

  return 0;
}

//~Pretzel
