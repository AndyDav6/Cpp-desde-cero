/*Hacer un programa que simule un cajero automatico
con un saldo inicial de 1000 dolares*/

#include <iostream>

using namespace std;

int main()
{
    int opcion, saldo_inicial = 1000;
    float deposito, saldo = 0, retiro;

    cout << "\tBienvenido a tu banca virtual" << endl;
    cout << "1. Ingresar dinero a la cuenta" << endl;
    cout << "2. Retirar dinero de la cuenta" << endl;
    cout << "3. Consulta su saldo actual" << endl;
    cout << "4. Salir" << endl;
    cout << "Opcion: ";
    cin >> opcion;

    switch (opcion)
    {
    case 1:
        cout << "Digite la cantidad de dinero que va ingresar: ";
        cin >> deposito;

        if (deposito > 0)
        {
            saldo = saldo_inicial + deposito;
            cout << "Depositivo realizado con exito." << endl;
            cout << "Su saldo actual es: " << saldo << endl;
        }
        else
        {
            cout << "La cantidad a depositar debe ser mayor que cero." << endl;
        }
        break;

    case 2:
        cout << "Digite la cantidad de dinero a retirar: ";
        cin >> retiro;

        if (retiro <= saldo_inicial)
        {
            saldo = saldo_inicial - retiro;
            cout << "Retiro realizado con exito" << endl;
            cout << "Su saldo actual es: " << saldo << endl;
        }
        else
        {
            cout << "No tienes fondos suficientes para hacer el retiro.";
        }
        break;

    case 3:
        cout << "Su saldo actual es: " << saldo_inicial << endl;
        break;

    case 4:
        cout << "Gracias por usar su banca virtual. ¡Hasta luego!";
        break;
    }

    return 0;
}