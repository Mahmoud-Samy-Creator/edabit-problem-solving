#include <iostream>
using namespace std;

/*
 * addition - A function retruns addition of 2 numbers
 * @a: first operand
 * @b: secont operand
 * Return: int
*/
int addition(int a , int b)
{
    return (a + b);
}

/*
 * main - test file
 * Return - 0 if succeed
*/

int main()
{
    int number, num1, num2;
    cout << "== Enter 2 numbers ==\n";
    cin >> num1 >> num2;

    number = addition(num1 , num2);
    cout << " The sum is: "<< number;
}