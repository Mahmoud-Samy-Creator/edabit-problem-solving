#include "main.h"
/*
Emmy has written a function that returns a greeting to users.
However, she's in love with Mubashir,
and would like to greet him slightly differently.
She added a special case in her function.
*/

string greeting(std::string name) 
{
  if(name == "Mubashir")
  {
    return "Hello, my Love!";
  }
  else
    return ("Hello, " + name + "!");
}

int main()
{
    string greet;

    greet = greeting("Matt"); //"Hello, Matt!"
    cout << greet << endl;

    greet = greeting("Helen");  //"Hello, Helen!"
    cout << greet << endl;

    greet = greeting("Mubashir"); //"Hello, my Love!"
    cout << greet << endl;
}