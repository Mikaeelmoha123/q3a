#include <iostream>

using namespace std;

int checkEven(int);
int checkEven(int num) { return num % 2 == 0; }
int main()
{
    int num;
    cout << "Enter your num ";
    cin >> num;
    if (num % 2 == 0)
    {
        cout << num << " is even";
    }
    else
    {
        cout << num << " is odd";
    }
    return 0;
}