/*



The following iterative sequence is defined for the set of positive integers:

n → n/2 (n is even)
n → 3n + 1 (n is odd)

Using the rule above and starting with 13, we generate the following sequence:
13 → 40 → 20 → 10 → 5 → 16 → 8 → 4 → 2 → 1

It can be seen that this sequence (starting at 13 and finishing at 1) contains 10 terms. Although it has not been proved yet (Collatz Problem), it is thought that all starting numbers finish at 1.

Which starting number, under one million, produces the longest chain?

 Once the chain starts the terms are allowed to go above one million.

837799
*/

#include <iostream>

using namespace std;

typedef unsigned long long int ullint;

void collatzTest(ullint n, int &count);

int main(){
  int counter = 0, greatestCount = 0;
  ullint answer;

  for(ullint n = 999999; n > 0; n--){
    collatzTest(n, counter);
    if(counter > greatestCount){
      greatestCount = counter;
      answer = n;
    }
    counter = 0;
  }

  collatzTest(13, greatestCount);
  cout << endl << greatestCount << endl << answer;
  counter = 0;
  greatestCount = 0;



  return 0;
}

void collatzTest(ullint n, int &count){
  count++;
  if(n == 1){
    return;
  }

  if(n % 2 == 0){
    collatzTest(n/2, count);
  }
  else{
    collatzTest(3*n+1, count);
  }
}
