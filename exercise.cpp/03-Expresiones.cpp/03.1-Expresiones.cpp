/* Escribe la siguiente expresion matematica en C++: a+b/c+d*/

#include <iostream>

using namespace std;

int main()
{
    float num1, num2, num3, num4, resultado;

    cout << "Digite un valor: ";
    cin >> num1;
    cout << "Digite otro valor: ";
    cin >> num2;
    cout << "Digite otro valor: ";
    cin >> num3;
    cout << "Digite un ultimo valor: ";
    cin >> num4;

    resultado = (num1 + num2) / (num3 + num4);

    cout.precision(3);
    cout << "El resultado es: " << resultado;

    return 0;
}