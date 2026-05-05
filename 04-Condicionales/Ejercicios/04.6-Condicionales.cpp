/* Escriba un programa que lea de la entrada
estandar un caracter e indique en la salida
estandar si el caracter es una vocal minuscula,
es una vocal mayuscula o no es vocal. */

#include <iostream>

using namespace std;

int main()
{
    char caracter;

    cout << "Digite un caracter: ";
    cin >> caracter;

    switch (caracter)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        cout << "Es una vocal minuscula";
        break;

    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        cout << "Es una vocal mayuscula";
        break;

    default:
        cout << "No es una vocal";
        break;
    }

    return 0;
}