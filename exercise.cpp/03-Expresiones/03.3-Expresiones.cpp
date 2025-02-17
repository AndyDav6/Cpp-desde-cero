// Escribe la siguiente expresion en c++ a + (b/(c-d))

#include <iostream>

using namespace std;

int main()
{

    float a, b, c, d, resultado;

    cout << "Digite un numero: ";
    cin >> a;
    cout << "Digite un numero: ";
    cin >> b;
    cout << "Digite un numero: ";
    cin >> c;
    cout << "Digite un numero: ";
    cin >> d;

    resultado = a + (b / (c - d));

    cout << "El resultado es: " << resultado;

    return 0;
}