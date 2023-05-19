#include "main.h"

/*
 * power_calculation - A function to calculate the circuit power
 * @V: Terminal voltage
 * @I: Wire currunt
 * Return: power calculated in watt
 */

double power_calculation(double  I, double V)
{
    return (I * V);
}

/*
 * main - test file
 * Returns: 0 if succeed
*/

int main()
{
    double Current, Voltage, power;

    cout << "=== Enter the current in Ampare ===\n";
    cin >> Current;
    cout << "=== Enter the Voltage in Volt ===\n";
    cin >> Voltage;

    power =  power_calculation(Current , Voltage);

    cout << "The circuit power is " << power << " Watt" << endl;

    return 0;
}