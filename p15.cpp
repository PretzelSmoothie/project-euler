/*



Starting in the top left corner of a 2×2 grid, and only being able to move to
the right and down, there are exactly 6 routes to the bottom right corner.

How many such routes are there through a 20×20 grid?
*/

#include <iostream>

using namespace std;

int main(){
  long long arr[20][20];

  arr[0][0] = 2;

  for(int i = 1; i < 20; i++){
    arr[0][i] = arr[0][i-1] + 1;
    arr[i][0] = arr[i-1][0] + 1;
  }

  for(int row = 1; row < 20; row++){
    for(int col = 1; col < 20; col++){
      //arr[row][col] = left + top
      arr[row][col] = arr[row-1][col]+arr[row][col-1];
    }
  }


  cout << endl << "There are " << arr[20-1][20-1] << " routes." << endl;


  return 0;
}

/*
   row - 1
 0 0
 0 0
col - 1
 2 0
 0 0

 2 3
 3 6


*/
