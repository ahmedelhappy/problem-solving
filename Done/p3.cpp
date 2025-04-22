// Problem #3: Maximum but constrained
// ● Given 3 integers, you have to find the biggest one of them which is < 100.
// ○ Print -1 if no such number
// ● Inputs
// ○ 22 90 115 ⇒ 90
// ■ Here [20 90] are only < 100. Maximum (20, 90) = 90
// ○ 200 300 400 ⇒ -1
// ■ All of them are > 100, so no answer
// ○ 50 100 150 ⇒ 50
// ■ Only 50 is < 100.
// ○ 10 30 20 ⇒ 30
// ■ The 3 numbers < 100, so their max is 30

#include <iostream>
using namespace std;
// My First Try
// int main()
// {
//   int num1, num2, num3, temp;
//   cin >> num1 >> num2 >> num3;
// //Now get the Max between them.
// if (num1 > num2) {
//   //swap
//   temp = num1;
//   num1 = num2;
//   num2 = temp;
// }
// if (num2 > num3) {
//   //swap
//   temp = num2;
//   num2 = num3;
//   num3 = temp;
// }
// if (num1 > num2) {
//   //swap
//   temp = num1;
//   num1 = num2;
//   num2 = temp;
// }
// //now they are sorted.
// //now pick the num3
// //if it's less than a 100, return it; if not return num2, if not return num1 if not return -1.
// if (num3 < 100) {
//   cout << num3;
//   return ;
// }
// if (num2 < 100) {
//   cout << num2;
//   return ;
// }
// if (num1 < 100) {
//   cout << num1;
//   return ;
// }
// else {
//   cout << -1;
// }

// Better solution
int main()
{
  int num1, num2, num3, temp;
  cin >> num1 >> num2 >> num3;
  temp = -1;
  if (num1 > temp && num1 < 100)
  {
    temp = num1;
  }
  if (num2 > temp && num2 < 100)
  {
    temp = num2;
  }
  if (num3 > temp && num3 < 100)
  {
    temp = num3;
  }
  cout << temp;
}