#include "main.h"

string changename(string name)
{
    return (name + "Edabit");
}
int main()
{
    string result, name = "Mahmoud";

    result = changename(name);

    cout << result;

    
}