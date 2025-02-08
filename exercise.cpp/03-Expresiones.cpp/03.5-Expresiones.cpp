/* Escriba un programa que lea la nota de cuatro alumnos y
calcule la nota media de los cautroa alumnos */

#include <iostream>

using namespace std;

int main()
{

    double a, b, c, d, media;

    cout << "Nota final del primer alumno: ";
    cin >> a;
    cout << "Nota final del segundo alumno: ";
    cin >> b;
    cout << "Nota final del tercer alumno: ";
    cin >> c;
    cout << "Nota final del cuarto alumno: ";
    cin >> d;

    media = (a + b + c + d) / 4.0;
    cout.precision(3);

    cout << "\nLa nota media de los alumnos es: " << media << endl;

    return 0;
}