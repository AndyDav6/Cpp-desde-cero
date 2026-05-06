/* Escriba un programa que tome cada 4 horas
la temperatura del exterior, leyendola durante
un periodo de 24 horas. Es decir, debe leer
6 temperaturas. Calcule la temperatura media
del dia, la temperatura más alta y la mas baja
 */

#include <iostream>

using namespace std;

int main()
{
    float temperatura, T_media = 0, T_alta, T_baja;
    T_alta = -999;
    T_baja = 999;

    cout << "Lectura de temperaturas cada 4 horas durante 24 horas:\n";
    cout << "=====================================================\n";

    for (int i = 0; i < 24; i += 4)
    {
        cout << "Hora " << i << ":00 | Ingresa la temperatura: ";
        cin >> temperatura;

        T_media += temperatura;

        if (temperatura > T_alta)
        {
            T_alta = temperatura;
        }

        if (temperatura < T_baja)
        {
            T_baja = temperatura;
        }
    }

    T_media /= 6;

    cout << "El resultado de las temperaturas son: " << endl;
    cout << "Temperatura media del dia: " << T_media << "°C\n";
    cout << "Temperatura mas alta: " << T_alta << "°C\n";
    cout << "Temperatura mas baja: " << T_baja << "°C\n";

    return 0;
}