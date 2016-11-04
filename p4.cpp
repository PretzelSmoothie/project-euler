/*A palindromic number reads the same both ways. The largest palindrome
  made from the product of two 2-digit numbers is 9009 = 91 × 99.

  Find the largest palindrome made from the product of two 3-digit numbers.
  answer: 993 * 913 = 906609
*/

#include <iostream>
#include <sstream>
#include <string>

using std::string;
using std::cout;
using std::endl;
using std::ostringstream;

string intToString(int num);
bool palindromeTest(string word);


int main(){

  string word;
  int num, largest;

  for(int i = 999; i >= 100; i--){
    for(int j = 999; j >= 100; j--){
      num = i*j;
      word = intToString(num);
      if(palindromeTest(word) && largest < num)
        largest = num;

    }
  }

  cout << endl << endl
       << "The largest palindrome made from the product of two 3-digit "
       << " numbers is: " << endl
       << largest
       << endl << endl;

  return 0;
}

string intToString(int num){
  ostringstream convert;

  convert << num;
  return convert.str();

}

bool palindromeTest(string word){
  return word == string(word.rbegin(), word.rend());
}
