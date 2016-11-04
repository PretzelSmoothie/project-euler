//Project Euler Problem 9

#include <iostream>
#include <cmath>

using std::cout;
using std::endl;

bool isTriplet(int, int, int);
int Euclid(int);


int main(){
  const int size = 100;


  cout << endl << endl << endl;

  cout << Euclid(size) << endl;


  return 0;
}

bool isTriplet(int a, int b, int c){
  if(a > b || a > c || b > c) return false;

  return a + b == c;

}

int Euclid(int size){
  int a, b, c;
  for(int n = 1; n < size; n++){
    for(int m = n + 1; m < size; m++){
      //cout << endl << m << " " << n;
      a = (m*m - n*n);
      b = (2*m*n);
      c = (m*m + n*n);
      if((a + b + c) == 1000){
        return a*b*c;
      }
    }
  }
  return -1;
}
