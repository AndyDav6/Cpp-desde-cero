/* La sentencia for
    for(expresion 1; expresion logica; expresion 2){
    Conjunto de instrucciones;
    }
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    for (int i = 1; i <= 10; i++) // ---> Permite crear la variable fuera o dentro del bucle
    {
        cout << i << endl;
    }

    getch();
    return 0;
}