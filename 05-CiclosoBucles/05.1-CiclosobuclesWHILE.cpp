/*Conjunto de instrucciones que se va a seguir
repitiendo simepre que se cumpla una determina
condicion*/

/*La sentencia While:
 while (expresion logica){
    Conjunto de instrucciones
    }

Primero piensa luego actua*/

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int i;

    i = 1;

    while (i <= 10)
    {
        cout << i << endl;
        i++;
    }

    getch(); // ---> impide que el programa se cierre
    return 0;
}