/* Realice un programa que lea de la entrada estandar numeros
hasta que se introduzca un cero. En ese momento el programa
debe terminar y mostrar en la salida estandar el numero de valores
mayores que cero
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int numero, mayor = 0;

    do
    {
        cout << "Digite un numero: ";
        cin >> numero;
        if (numero > 0)
        {
            mayor++;
        }

    } while ((numero > 0) || (numero < 0));
    cout << "Haz ingresado un numero 0, la cantidad de numero mayores a cero son: " << mayor;
    cout << "\n"
         << "\n";

    system("pause");
    return 0;
}