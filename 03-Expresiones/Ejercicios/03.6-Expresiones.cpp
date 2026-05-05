/* Realice un programa que calcule el valor que toma la siguiente funcion
para unos valores dados en  X e Y, f(x, y) = √x / y² - 1 */

#include <iostream>
#include <math.h> // libreria matematica y trigonometrica

using namespace std;

int main()
{

    float x, y, resultado = 0;

    cout << "Digite el valor de X: ";
    cin >> x;
    cout << "Digite el valor de Y: ";
    cin >> y;

    resultado = (sqrt(x)) / (pow(y, 2) - 1);

    cout << "El resultado es: " << resultado << endl;

    return 0;
}

// sqrt es la equivalencia de la raiz cuadrada
/*
pow: es la equivalencia a elevado al cuadrado o cubo
*/