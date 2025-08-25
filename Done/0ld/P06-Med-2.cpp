// Problem #2: Find Maximum up to 10
// ● Read an integer N (2 <= N <= 10)
// ● Then read N integers, find which of them has the biggest value and print it.
// ● Inputs
// ○ 5 1 3 2 4 2 ⇒ 4
// ■ 5 means read 5 integers
// ■ Then we read them [1 3 2 4 2]. Their maximum is 4
// ○ 10 1 67 -9 88 -45 129 90 65 77 34 ⇒ 129
// ■ Same as last homework. This time we are given first N (10)


#include <iostream>
using namespace std;

int main() {
  int num, iterations, max;
  cin >> iterations;
  max = INT_MIN;
  if (iterations <= 0 || iterations > 10) {cout << "N must be btw 2-10!"; return 0;} //first check
  cin >> num; iterations--; //take input, N-- //9 remaining (if N was 10)
  if (num > max) max = num; //Max
  if (iterations == 0) {cout << max; return 0;} //Check
  cin >> num; iterations--; //take input, N-- //8 remaining 
  if (num > max) max = num; //Max
  if (iterations == 0) {cout << max; return 0;} //Check
  cin >> num; iterations--; //take input, N-- //7 remaining
  if (num > max) max = num; //Max
  if (iterations == 0) {cout << max; return 0;} //Check
  cin >> num; iterations--; //take input, N-- //6 remaining
  if (num > max) max = num; //Max
  if (iterations == 0) {cout << max; return 0;} //Check
  cin >> num; iterations--; //take input, N-- //5 remaining
  if (num > max) max = num; //Max
  if (iterations == 0) {cout << max; return 0;} //Check
  cin >> num; iterations--; //take input, N-- //4 remaining
  if (num > max) max = num; //Max
  if (iterations == 0) {cout << max; return 0;} //Check
  cin >> num; iterations--; //take input, N-- //3 remaining
  if (num > max) max = num; //Max
  if (iterations == 0) {cout << max; return 0;} //Check
  cin >> num; iterations--; //take input, N-- //2 remaining
  if (num > max) max = num; //Max
  if (iterations == 0) {cout << max; return 0;} //Check
  cin >> num; iterations--; //take input, N-- //1 remaining
  if (num > max) max = num; //Max
  if (iterations == 0) {cout << max; return 0;} //Check
  cin >> num; iterations--; //take input, N-- //now 0
  if (num > max) max = num; //Max
  if (iterations == 0) {cout << max; return 0;} //Check (must be 0)
}










