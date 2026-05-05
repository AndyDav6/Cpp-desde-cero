/* Mostrar los meses del año, pidiendole al
usuario un numero entre 1-12, y mostrar el mes
al que corresponde*/

#include <iostream>

using namespace std;

int main()
{
    int mes;

    cout << "Digite un numero de los doce mes del año: ";
    cin >> mes;

    switch (mes)
    {
    case 1:
        cout << "El mes digitado es Enero";
        break;
    case 2:
        cout << "El mes digitado es Febrero";
        break;
    case 3:
        cout << "El mes digitado es Marzo";
        break;
    case 4:
        cout << "El mes digitado es Abril";
        break;
    case 5:
        cout << "El mes digitado es Mayo";
        break;
    case 6:
        cout << "El mes digitado es Junio";
        break;
    case 7:
        cout << "El mes digitado es Julio";
        break;
    case 8:
        cout << "El mes digitado es Agosto";
        break;
    case 9:
        cout << "El mes digitado es Septiembre";
        break;
    case 10:
        cout << "El mes digitado es Octubre";
        break;
    case 11:
        cout << "El mes digitado es Noviembre";
        break;
    case 12:
        cout << "El mes digitado es Diciembre";
        break;

    default:
        cout << "No leite bien papito eso no es un numero del mes. .__.";
        break;
    }

    return 0;
}