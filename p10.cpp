/*
The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.
*/

#include <iostream>
#include <cmath>

using std::cout;
using std::endl;

long long sieveOfEratosthenes(long long n);

int main(){
  long long size = 2000000;

  cout << endl << endl << sieveOfEratosthenes(size) << endl << endl;

  return 0;
}

long long sieveOfEratosthenes(long long n){

  bool A[n+1];
  long long sum = 0;

  std::memset(A, true, sizeof(A));

  int nSqrt = (int)sqrt((double)n);

  for(int i = 2; i < sqrt(n); i++){
    if(A[i]){
      for( int j = i*2; j <= n; j += i )
        A[j] = false;
    }
  }

  for (int k = 2; k <= n; k++){
    if(A[k]){
      sum += k;
    }
  }

  return sum;
}
