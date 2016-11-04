/*
2520 is the smallest number that can be divided by each of the numbers from 1
to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of
the numbers from 1 to 20?

Expected Answer: 232792560
*/

#include <iostream>

using std::cout;
using std::endl;

bool isDivisible(int num);

int main(){
  int counter = 20;

  while (!isDivisible(counter))
    counter += 20; // as counter MUST be divisible by 20, we can increase
                  // counter by 20 each iteration - improving runtime

  cout << endl << endl
       << "the smallest positive number that is evenly divisible by all of "
       << "the numbers from 1 to 20: " << counter
       << endl << endl;

  return 0;
}


/*******************************************************************
** Description: isDivisible will check if the passed in integer
**              is evenly distributed by all numbers from 1 to 20
*********************************************************************/

bool isDivisible(int num){
  if(num % 2 != 0 || num % 3 != 0 || num % 4 != 0 || num % 5 != 0
     || num % 6 != 0 || num % 7 != 0 || num % 8 != 0 || num % 9 != 0
     || num % 10 != 0 || num % 11 != 0 || num % 12 != 0 || num % 13 != 0
     || num % 14 != 0 || num % 15 != 0 || num % 16 != 0 || num % 17 != 0
     || num % 18 != 0 || num % 19 != 0 || num % 20 != 0)
      return false;
  return true;
}
