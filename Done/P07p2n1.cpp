#include <iostream>
using namespace std;

void printSpaces(int N, int line)
{
  int numOfSpaces = N - line + 1;
  while (numOfSpaces > 0)
  {
    cout << " ";
    numOfSpaces--;
  }
}
void printStars(int line)
{
  int numOfStars = (line * 2) - 1;
  while (numOfStars > 0)
  {
    cout << "*";
    numOfStars--;
  }
}





int main()
{
  int N;
  cin >> N;
  //==============Upper Triangle============
  int line = 1;
  while (line <= N)
  {
    printSpaces(N, line);
    printStars(line);
    cout << "\n";
    line++;
  }
  //===============Middle Row=================
  printStars(N + 1);
  cout << "\n";
  //============Lower Triangle==============
  line = N;
  while (line >= 1)
  {
    printSpaces(N, line);
    printStars(line);
    cout << "\n";
    line--;
  }
}