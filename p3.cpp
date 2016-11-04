/*
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
Answer: 6857
*/
#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

bool isPrime(long long n);
long long findLargestPrime(long long k);

int main(){
  unsigned long long n;

  cout << endl << endl
       << "Please input n (n > 1): ";
  cin >> n;
  long long x = findLargestPrime(n);
  cout << endl << "The largest prime factor of " << n
       << " is: " << x << endl << endl;

  return 0;
}

bool isPrime(long long n){

    if ( n <= 3 )
      return true;
    if ( n % 2 == 0 || n % 3 == 0 )
      return false;

    long long i = 5;
    long long j = 2;

    while( i*i <= n ) {
      if(n%i == 0)
        return false;
      i += j;
      j = 6 - j;
    }
    return true;
}

long long findLargestPrime(long long k){

  for(long long i = floor(sqrt(k)); i >= 2; i--){
    cout << i << endl;
    if( k % i == 0 && isPrime(i) ){
      return i;
    }
  }
  return 1;
}
