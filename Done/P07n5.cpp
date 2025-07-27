#include <iostream>
using namespace std;

int main()
{
  int N;
  cin >> N;

  int evenIndexedSum = 0, evenCounter = 0;
  int oddIndexedSum = 0, oddCounter = 0;

  int counter = 0;  

  while (counter < N)
  {
    int n;
    cin >> n;

    if (counter % 2 == 0) evenIndexedSum += n, evenCounter++;
    else oddIndexedSum += n, oddCounter++;

    counter++;
  }


  float evenAve = evenIndexedSum / float(evenCounter);
  float oddAve = oddIndexedSum / float(oddCounter);
  
  cout << evenAve << endl;
  cout << oddAve << endl;
}