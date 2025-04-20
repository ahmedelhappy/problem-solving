// Problem #2: Sort 3 numbers
// ● Given 3 integers, sort (order) them in ascending order and print them .
// ● Inputs ⇒ outputs
// ○ 1 2 3 ⇒ 1 2 3
// ○ 1 3 2 ⇒ 1 2 3
// ○ 2 1 3 ⇒ 1 2 3
// ○ 2 3 1 ⇒ 1 2 3
// ○ 3 1 2 ⇒ 1 2 3
// ○ 3 2 1 ⇒ 1 2 3
// ● Do you notice there are only 6 ways to permutate 3 numbers!
//==============================================================

// #include <iostream>
// using namespace std;

// int main() {
//   int num1, num2, num3, temp;
//   cin >> num1 >> num2 >> num3;
//   if (num2 < num1) //swap
//   {
//     temp = num1;
//     num1 = num2;
//     num2 = temp;
//   }
//   //now num1 and num2 are sorted.
//   //lets sort 2 & 3.
//   if (num3 < num2) //swap
//   {
//     temp = num2;
//     num2 = num3;
//     num3 = temp;
//   }
//   //now num2 & num3 are sorted.
//   //let's check if num2 & num 1 are sorted.
//   if (num2 < num1) //swap
//   {
//     temp = num1;
//     num1 = num2;
//     num2 = temp;
//   }
//   cout << num1 << " " << num2 << " " << num3;
//   cout << endl;


// }


// int main()
// {
//   int num1, num2, num3, temp;
//   cin >> num1 >> num2 >> num3;

//   if (num2 < num1) //swap them
//   {
//     temp = num1;
//     num1 = num2;
//     num2 = temp;
//     //now num1 and num2 are sorted.
//   }
//   if (num3 < num2) //swap them
//   {
//     temp = num2;
//     num2 = num3;
//     num3 = temp;
//     //now num2 and num3 are sorted
//     //check again num1 and num2
//     if (num2 < num1) 
//     {
//       temp = num1;
//       num1 = num2;
//       num2 = temp;
//       //now num1 and num2 are sorted, and num2 and num3 are already sorted.
//     }
//   }
//   cout << num1 << " " << num2 << " " << num3 << endl;

  //another way
  // if (num1 < num2 && num2 < num3 && num1 < num3) cout << num1 << " " << num2 << " " << num3; cout << endl;
  // if (num1 < num2 && num3 < num2 && num1 < num3) cout << num1 << " " << num3 << " " << num2; cout << endl;
  // if (num2 < num3 && num2 < num1 && num1 < num3) cout << num2 << " " << num1 << " " << num3; cout << endl;
  // if (num2 < num3 && num2 < num1 && num3 < num1) cout << num2 << " " << num3 << " " << num1; cout << endl;
  // if (num3 < num2 && num3 < num1 && num1 < num2) cout << num3 << " " << num1 << " " << num2; cout << endl;
  // if (num3 < num2 && num3 < num1 && num2 < num1) cout << num3 << " " << num2 << " " << num1; cout << endl;
// }


//Did it using flowchart, remember? XD
#include <iostream>
using namespace std;
int main () {
  int num1, num2, num3;
  int a, b, c;
  cin >> num1 >> num2 >> num3;
  if (num1 < num2) {
    if(num2 < num3) {
      a = num1;
      b = num2;
      c = num3;
    }else if (1 < 3) {
      a = num1;
      b = num3;
      c = num2;
    }
    else {
      a = num3;
      b = num1;
      c = num2;
    }
  }else if (num1 < num3) {
    a = num2;
    b = num1;
    c = num3;
  }else if (num2 < num3) {
    a = num2;
    b = num3;
    c = num1;
  }else {
    a = num3;
    b = num2;
    c = num1;
  }
  cout << a << " " << b << " " << c <<endl;
}