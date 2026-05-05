/* La sentencia do while
 do{
    conjunto de instrucciones;
    }while(expresion logica);
La funcion se puede definir mas o menos asi, primero actuara y luego piensa*/

#include <iostream>
#include <stdlib.h> // ---> libreria para "pausar" el programa

using namespace std;

int main()
{

    int i;

    i = 10;

    do
    {
        cout << i << endl;
        i--;
    } while (i >= 1);

    system("pause");
    return 0;
}