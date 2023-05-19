#include <iostream>
using namespace std;

/*
 * reminder - A function retruns reminder of 2 numbers
 * @a: first operand
 * @b: secont operand
 * Return: int
*/
int reminder(int a , int b)
{
    return (a % b);
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

    number = reminder(num1 , num2);
    cout << " The modulus is: "<< number;
}