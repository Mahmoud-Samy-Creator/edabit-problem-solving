#include <iostream>
using namespace std;

/*
 * add1 - A function retruns next number of entered one
 * @a: entered number
 * Return: int
*/

int add1(int a)
{
    return (a + 1);
}

/*
 * main - test file
 * Return - 0 if succeed
*/

int main()
{
    int number;
    cout << "== Enter a number ==\n";
    cin >> number;

    number = add1(number);
    cout << " The next number is: "<< number;
}