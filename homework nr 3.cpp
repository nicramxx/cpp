#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <cmath>

int reverse(int);

int main()
{
    int i;

    cout << "Enter integer: ";
    cin >> i;
    cout << "Reversed digits: " << reverse(i);

    return 0;
}


int reverse (int i)
{
    int digitsCount = 0;

    for(int digits = 1; digits <= i; digits *= 10)
    {
        digitsCount++;
    }
    int x = 0;
    int a = digitsCount;

    for(int j = 1; j <= digitsCount; j++)
    {
        a--;
        x += (i % 10) * pow(10, a);
        i = i / 10;

    }
    return x;
}
"/Users/marcinoscilowski/CLionProjects/homework nr 3/cmake-build-debug/homework_nr_3"
Enter integer: 7631
Reversed digits: 1367
Process finished with exit code 0
