#include <iostream>
#include <iomanip>
using namespace std;

// F = (9 / 5.0) * C +32; read c from user input.

int main()
{
    double C;
    double F;

    // TODO: [Step 1] Input a Celcius degree as a "double" type value
    cout << "Input Celsius degree" << endl;
    cin >> C;

    // TODO: [Step 2] Convert it to a Fahrenheit degree using the Formula F = (9 / 5.0)* C + 32
    F = (9 / 5.0)* C + 32;

    cout << setprecision(2) << fixed;
    // TODO: [Step 3] Print the converted Fahrenheit
    cout << "Your conversion is " << F << " degrees Fahrenheit.\n";
    return 0;
}
