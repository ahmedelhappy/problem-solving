#include <iostream>
using namespace std;

int main()
{
  int N;
  cin >> N;

  // int numOfStars, numOfSpaces;
  int line = 1;

  while (line <= N)
  {
    int numOfSpaces = N - line;
    while (numOfSpaces > 0)
    {
      cout << " ";
      numOfSpaces--;
    }

    int numOfStars = (line * 2) - 1;
    while (numOfStars > 0)
    {
      cout << "*";
      numOfStars--;
    }

    cout << "\n";
    line++;
  }
//===============Reverse==================
  line = N;
  while (line >= 1)
  {
    int numOfSpaces = N - line;
    while (numOfSpaces > 0)
    {
      cout << " ";
      numOfSpaces--;
    }

    int numOfStars = (line * 2) - 1;
    while (numOfStars > 0)
    {
      cout << "*";
      numOfStars--;
    }

    cout << "\n";
    line--;
  }
}