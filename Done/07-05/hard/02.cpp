/*
Problem #2: Reverse number 
● Read an integer N, then find its reverse integer R 
  ○ Print R R*3 
● input ⇒ Output 
  ○ 123  ⇒ 321 963
  */

#include <iostream>
using namespace std;

int main(){
  int N;
  cin >> N;

  int result = 0;
  while (N > 0) {
    int last_digit = N % 10;
    result = result * 10 + last_digit;

    N /= 10;
  }

  cout << result << " " << result * 3 << endl;
}