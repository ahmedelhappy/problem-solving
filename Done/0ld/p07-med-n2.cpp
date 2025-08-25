#include <iostream>
using namespace std;

/*
Problem #2: Special Multiples 1
Read in a positive integer N, and print all integers from 0-N that satisfy the following properties:
  Either the number is perfectly divisible by 8
  Or it is divisible by both 3 and 4
Input: 100
Output: 0 8 12 16 24 32 36 40 48 56 60 64 72 80 84 88 96
*/

int main() {
  int N;
  cin >> N;
  int i = 0;
  while(i <= 100) {
    if (i % 8 == 0 || (i % 4 == 0 && i % 3 == 0)) {
      cout << i << " ";
    }
    i++;
  }
  cout << endl;
}