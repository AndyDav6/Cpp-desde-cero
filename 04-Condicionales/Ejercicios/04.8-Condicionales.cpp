/* Escribe un programa que lea de la entrada
estandar tres numeros. Despues debe leer un cuarto
numero e indicar si el numero coincide con alguno
de los introducidos con anterioridad*/

#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d_igual;

    cout << "ingrese tres numeros: ";
    cin >> a >> b >> c;

    cout << "Ingrese otro valor: ";
    cin >> d_igual;

    if (a == d_igual)
    {
        cout << "\nEl cuarto numero coinside con el primero.";
    }
    else if (b == d_igual)
    {
        cout << "\nEl cuarto numero coinside con el segundo.";
    }
    else if (c == d_igual)
    {
        cout << "El cuarto numero coinside con el tercero.";
    }
    else
    {
        cout << "El cuarto numero no coincide con ninguno de los anteriores.";
    }
}