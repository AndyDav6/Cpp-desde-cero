/*Hacer un menu que considere las siguientes
opciones:
Caso 1: Cubo de un numero
Caso 2: Numero par o impar
Caso 3: Salir */

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int opcion;
    float numero, resultado;

    cout << "\tMenu de opciones";
    cout << "\n1. Cubo de un numero \n2. Numero par o impar \n3. Salir";
    cout << "\nSelecciona una opcion: ";
    cin >> opcion;

    switch (opcion)
    {
    case 1:
        cout << "Ingrese un numero: ";
        cin >> numero;

        resultado = pow(numero, 3);

        cout << "El cubo de " << numero << " es " << resultado;
        break;

    case 2:
        cout << "Ingrese un numero ";
        cin >> numero;

        if ((int)numero % 2 == 0)
        {
            cout << numero << " es un numero par";
        }
        else
        {
            cout << numero << " es un numero impar";
        }
        break;

    case 3:
        cout << "Gracias por usar la aplicacion, ¡hasta luego!";
        break;

    default:
        cout << "Opcion no valida. Por favor, seleccione una opcion del menu.";
        break;
    }

    return 0;
}