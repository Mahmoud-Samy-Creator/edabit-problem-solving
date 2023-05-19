#include "main.h"

/**
 * convert - A function converts time from minutes to seconds
 * @minutes: minutes time
 * Return: time in seconds
*/

double convert (double minutes)
{
    return (minutes * 60);
}

/**
 * main - test file
 * Return: 0 if succeed
*/

int main()
{
    double minutes, seconds;

    cout << "=== Enter spent time in minutes === \n";
    cin >> minutes;

    seconds = convert (minutes);

    cout << "The time in seconds: " << seconds << " sec\n";

}