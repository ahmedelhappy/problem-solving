#include <iostream>
using namespace std;


// Problem #1: Arithmetic
// ● Read 2 integers A, B and print based on following cases:
// ○ if both are odd print their product A*B
// ○ if both are even print their division A/B (assume B != 0)
// ○ if the first is odd and the second is even then find their sum A+B
// ○ if the first is even and the second is odd then find their subtraction A-B
// ● Inputs ⇒ outputs
// ○ 5 7 => 35
// ○ 12 2 => 6
// ○ 5 6 => 11
// ○ 12 3 => 9

int main () {
  int A, B, result;
  cout << "Enter A and B\n";
  cin >> A >> B;
  bool A_is_even, B_is_even;
  A % 2 == 0 ? A_is_even = true : A_is_even = false; 
  B % 2 == 0 ? B_is_even = true : B_is_even = false; 
  if (!A_is_even && !B_is_even) result = A * B;
  if (A_is_even && B_is_even) result = A / B;
  if (!A_is_even && B_is_even) result = A + B;
  if (A_is_even && !B_is_even) result = A - B;
  cout << result;
}