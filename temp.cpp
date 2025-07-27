#include<iostream>
using namespace std;

void ReadFrequencyTimes(short SingleNum, int Number)
{
    do
    {
        cout << "Enter a positve single number ";
        cin >> SingleNum;
    } while (SingleNum < 0 || SingleNum > 9);
    
    do
    {
        cout << "Enter a positve long number ";
        cin >> Number;
    } while (Number < 0);
    
}
int CalculateFrequencyTimes(short SingleNum, int Number)
{
    int Remainder = 0;
    int Counter = 0;
    while (Number > 0)
    {
        Remainder = Number % 10;
        if (Remainder == SingleNum)
        {
            Counter++;
        }
        Number = Number / 10;
    }
    return Counter;
}
void  PrintFrequencyTimes(short SingleNum, int Number)
{
    cout << "Digit " << SingleNum << " is frequency " << CalculateFrequencyTimes(SingleNum,Number) << " time(s)";
}

int main()
{
    short SingleNum;
    int Number;
    ReadFrequencyTimes(SingleNum, Number);
    PrintFrequencyTimes(SingleNum, Number);
}