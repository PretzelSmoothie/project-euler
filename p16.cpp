/*


215 = 32768 and the sum of its digits is 3 + 2 + 7 + 6 + 8 = 26.

What is the sum of the digits of the number 21000?


*/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
  unsigned long long  x, sum = 0;

  x = pow(2, 1000);

  cout << endl << x;

  while(x > 0){
    sum += x % 10;
    x /= 10;
  }
  cout << endl << "Sum: " << sum << endl;
  return 0;
}
