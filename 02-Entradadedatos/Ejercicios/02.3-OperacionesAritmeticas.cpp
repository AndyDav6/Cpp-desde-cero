/* Realice un programa que lea de la entrada los siguientes datos de una persona:
    - Edad: Tipo de dato entero
    - Sexo: Tipo de dato caracter
    - Altura: Tipo de dato float
Tras leer los datos el programa debe mostrarlos en la salida estandar. */

#include <iostream>

using namespace std;

int main()
{
    int edad;
    char sexo[10];
    float altura;

    cout << "Edad: ";
    cin >> edad;
    cout << "Sexo: ";
    cin >> sexo;
    cout << "Altura: ";
    cin >> altura;

    cout << "\nHola usuario" << endl;
    cout << "Su edad es de: " << edad << endl;
    cout << "Su sexo es: " << sexo << endl;
    cout << "Su altura en mestros es: " << altura << endl;

    return 0;
}