/* Escriba un programa que calcule x^y, donde x como y sean enteros positivos
sin utilizar la funcion pow
*/

#include <iostream>
using namespace std;

int main()
{
    int x, y, resultado = 1;

    cout << "Ingrese el numero base: ";
    cin >> x;

    cout << "Ingrese el numero potencia: ";
    cin >> y;

    for (int i = 1; i <= y; i++)
    {
        resultado = resultado * x;
    }

    cout << x << "^" << y << " = " << resultado << endl;

    return 0;
}
