/* Escribe un programa que lea de la entrada de estandar el precio de un producto
y muestre en la salida estandar el precio del producto al aplicarle el IVA */

#include <iostream>

using namespace std;

int main()
{
    int producto, Preciofinal;
    double IVA = 1.15;

    cout << "El precio del producto es: ";
    cin >> producto;

    Preciofinal = producto * IVA;

    cout << "\nEl precio con el IVA incluido es: " << Preciofinal;

    return 0;
}