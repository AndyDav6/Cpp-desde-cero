/* Realice un programa que solicite de la entrada
estandar un numero entero del 1 al 10 y muestre en
la salida su tabla de multiplicaca0r
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int num_mul;

    do
    {
        cout << "Digite un numero ";
        cin >> num_mul;
    } while ((num_mul < 1) || (num_mul > 10));

    for (int i = 1; i <= 20; i++)
    {
        cout << num_mul << " * " << i << " = " << num_mul * i << endl;
    }

    system("pause");
    return 0;
}