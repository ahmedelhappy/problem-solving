// Problem #1: Intervals
// ● Read number X then read 6 numbers s1, e1, s2, e2, s3, e3 (s < e)
// ○ These 6 numbers are for 3 interval
// ○ Each Interval is a range [start, end]
// ○ Number X in a range if start <= X <= end
// ○ E.g 7 in range [5, 12] but not in range [10, 20]
// ● Print how many intervals that
// X is part of
// ● Inputs
// ○ 7 1 10 5 6 4 40 ⇒ 2
// ■ Number 7 exists in 2 intervals [1, 10] and [4, 40]
// ○ 10 5 15 6 100 3 30 ⇒ 3
// ■ 10 exists in the 3 intervals [5 15], [6 100], [3 30]
// ○ 10 100 200 100 101 120 170 ⇒ 0 [doesn’t exist in any interval]

#include <iostream>
using namespace std;

// int main () {
//   int num, s1, e1, s2, e2, s3, e3, result = 0;
//   cin >> num >> s1 >> e1 >> s2 >> e2 >> s3 >> e3;
//   if (num >= s1 && num <= e1) result++;
//   if (num >= s2 && num <= e2) result++;
//   if (num >= s3 && num <= e3) result++;
//   cout << result;
// }



//with only 4 variables.
int main () {
  int num, start, end, result = 0;
  cin >> num >> start >> end;
  result += (num >= start && num <= end);
  cin >> start >> end;
  result += (num >= start && num <= end);
  cin >> start >> end;
  result += (num >= start && num <= end);
  cout << result;
}
