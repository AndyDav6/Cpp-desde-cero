// Excribe la siguiente expresion en c++: a+(b/c)/d+(e/f)

#include <iostream>

using namespace std;

int main()
{

    float a, b, c, d, e, f, resultadofinal;

    cout << "ingrese un valor: ";
    cin >> a;
    cout << "ingrese otro valor: ";
    cin >> b;
    cout << "ingrese otro valor: ";
    cin >> c;
    cout << "ingrese otro valor: ";
    cin >> d;
    cout << "ingrese otro valor: ";
    cin >> e;
    cout << "ingrese un ultimo valor: ";
    cin >> f;

    resultadofinal = (a + (b / c)) / (d + (e / f));

    cout.precision(3);
    cout << "El resultado es: " << resultadofinal;

    return 0;
}