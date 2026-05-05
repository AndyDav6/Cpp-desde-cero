// Expresiones intercambio de valores
// Escriba un fragmento de programa que intercambie los valores de dos variables

#include <iostream>

using namespace std;

int main()
{

    int x, y, auxiliar;

    cout << "Digite el valor de x: ";
    cin >> x;
    cout << "Digite el valor de y: ";
    cin >> y;

    /*
    x = 5
    y = 10
    */

    auxiliar = x;
    x = y;
    y = auxiliar;

    /*
    auxiliar => 5
    x => 10
    y => 5
    */

    cout << "\nEl nuevo valor de x es: " << x << endl;
    cout << "El nuevo valor de y es: " << y << endl;

    return 0;
}