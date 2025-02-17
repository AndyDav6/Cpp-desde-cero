/*
    switch(expresión) {
    case literal 1:
        conjunto de instrucciones1;
        break;
    case literal2:
        conjunto de intrcucciones2;
        break;
    case literaln:
        conjunto de instrcuccionesn;
        break;
    default:
        conjunto de instrcuciones por defecto;
        break;
    }
*/

#include <iostream>

using namespace std;

int main()
{
    int numero;

    cout << "Digite un numero: ";
    cin >> numero;

    switch (numero)
    {
    case 1:
        cout << "El numero digitado es 1";
        break;
    case 2:
        cout << "El numero digitado es 2";
        break;
    case 3:
        cout << "El numero digitado es 3";
        break;
    case 4:
        cout << "El numero digitado es 4";
        break;
    case 5:
        cout << "El numero digitado es 5";
        break;

    default:
        cout << "El numero digitado no se encuentra en el sistema";
        break;
    }

    return 0;
}