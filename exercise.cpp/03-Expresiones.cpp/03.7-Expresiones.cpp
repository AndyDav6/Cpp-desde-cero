/* Escribe un programa que escriba las soluciones de una ecuacion de
segundo grado de la forma ax^2 + bx + c = 0 teniendo en cuenta que
 x = (-b +-√(b² - 4ac))/2a */

#include <iostream>
#include <math.h>

using namespace std;

int main()
{

    float a, b, c;
    float resul_1 = 0, resul_2 = 0;

    cout << "Resuelve la siguiente ecuacion de segundo grado ax^2 + bx + c";
    cout << "\nIngrese el valor de a:" << endl;
    cin >> a;
    cout << "Ingrese el valor de b:" << endl;
    cin >> b;
    cout << "Ingrese el valor de c:" << endl;
    cin >> c;

    resul_1 = (-b + sqrt(pow(b, 2)) - 4 * a * c) / (2 * a);
    resul_2 = (-b - sqrt(pow(b, 2)) - 4 * a * c) / (2 * a);

    cout << "\nEl resultado uno es: " << resul_1 << endl;
    cout << "El resultado dos es: " << resul_2 << endl;

    return 0;
}