/* Escriba un programa que lea tres numeros
y determine cual de ellos es mayor  */

#include <iostream>

using namespace std;

int main()
{
    int nu1, nu2, nu3;

    cout << "Digite tres numeros: ";
    cin >> nu1 >> nu2 >> nu3;

    if (nu1 > nu2 && nu1 > nu3)
    {
        cout << "El numero mayor es: " << nu1;
    }
    else if (nu2 > nu1 && nu2 > nu3)
    {
        cout << "El numero mayor es: " << nu2;
    }
    else
    {
        cout << "EL numero mayor es: " << nu3;
    }

    return 0;
}