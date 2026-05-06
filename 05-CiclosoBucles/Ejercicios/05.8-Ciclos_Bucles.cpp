/* Escriba un programa que calcule el valor de: 1+2+3...+2n-1
 */

#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int n, suma = 0;

    cout << "Ingrese un numero: ";
    cin >> n;

    for (int i = 1; i <= 2 * n - 1; i++)
    {
        suma += i;
    }

    cout << "La suma de " << (2 * n - 1) << "es: " << suma << endl;

    system("pause");
    return 0;
}
