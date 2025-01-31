// Escribe la siguiente expresion en C++: a/b +1

#include <iostream>

using namespace std;

int main()
{
    float a, b, resultado;

    cout << "Digite un valor: ";
    cin >> a;
    cout << "Digite otro valor: ";
    cin >> b;

    resultado = (a / b) + 1;

    cout.precision(3);
    cout << "El resultado es: " << resultado << endl;

    return 0;
}