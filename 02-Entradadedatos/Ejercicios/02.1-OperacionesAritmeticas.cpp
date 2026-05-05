/*Escribe un programa que lea de la entrada estandar dos numeros y muestre en la salida
estandar la suma, resta, multiplicacion y division */

#include <iostream>

using namespace std;

int main()
{
    int num1, num2, suma = 0, resta = 0, Multiplicacion = 0, division = 0;

    cout << "Escriba un numero: ";
    cin >> num1;
    cout << "Escriba otro numero: ";
    cin >> num2;

    suma = num1 + num2;
    resta = num1 - num2;
    Multiplicacion = num1 * num2;
    division = num1 / num2;

    cout << "\nLa suma es: " << suma << endl;
    cout << "La resta es: " << resta << endl;
    cout << "La multiplicacion es: " << Multiplicacion << endl;
    cout << "La division es: " << division << endl;

    return 0;
}