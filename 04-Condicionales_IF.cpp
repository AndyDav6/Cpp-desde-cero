/*
if(condicion){
    instruccion 1;
}
else{
    instruccion 2;
} */

#include <iostream>

using namespace std;

int main()
{
    int numero, dato = 5;

    cout << "Ingrese un numero: ";
    cin >> numero;

    if (numero == 5)
    {
        cout << "El numero es 5" << endl;
    }
    else
    {
        cout << "El numero diferente de 5" << endl;
    }

    return 0;
}