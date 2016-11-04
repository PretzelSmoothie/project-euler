/*
By listing the first six prime numbers:2, 3, 5, 7, 11, and 13,
we can see that the 6th prime is 13.

What is the 10 001st prime number?
*/

#include <iostream>
#include <cmath>

using std::cout;
using std::endl;


bool isPrime(long long n);

int main(){

  const long N = 10001;
  long primeCounter = 0,
       primeNum,
       num = 2;

  while(primeCounter < N){

    if(isPrime(num)){
      primeCounter++;
      primeNum = num;
    }
    //
    num++;
  }

  cout << endl << endl
       << "The 10,001st prime number is: " << primeNum
       << endl << endl;

  return 0;
}

/**********************************************************
**Description: returns whether a given number is prime
**
************************************************************/

bool isPrime(long long n){
    //numbers less than or equal to 3 are prime
    if ( n == 2 || n == 3)
      return true;
    //if it is divisible by 2 or 3 OR less than or equal to 1,
    //it is not prime
    if ( n % 2 == 0 || n % 3 == 0 || n <= 1 )
      return false;

    long long counter = 3;

    while( counter * counter <= n ) {
      if(n%counter == 0)
        return false;

      counter +=2; 
    }

    //If we make it out of the loop, then it's a prime!
    return true;
}
