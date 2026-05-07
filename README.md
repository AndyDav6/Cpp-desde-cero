# **Cpp desde cero**

## **00 - Hola Mundo**

El "Hola Mundo" o "Hello World" es el programa mas basico y tradicional utilizado para mostrar el "Hola Mundo" en pantalla. Se uso por primera vez en el libro _"C el lenguaje de programacion"_ de Dennis Ritchie.

```Cpp
#include <iostream>
using namespace std;

int main() {
    cout<<"Hola Mundo" <<endl;

    return 0;
}
```

El encabezado de **C++** funciona de la siguiente manera:

### 1. `#include <iostream>`

**Directiva de preprocesador** que le dice al compilador: "antes de compilar, toma todo el contenido de la biblioteca `iostream` y pégalo aquí".

- `#include`: Es la instrucción para incluir archivos externos
- `iostream`: Input/Output **stream** (es el flujo de entrada/salida)
- Contiene definiciones de: `cout`, `cin`, `cerr`, `endl`, etc.
- Sin esta línea, no podrías usar `cout` para mostrar texto.

### 2. `using namespace std;`

Declaración que permite usar elementos de la biblioteca estándar sin prefijo `std::`.

- `namespace std` : Espacio de nombres donde viven todos los elementos estándar de Cpp.
- Sin esta línea, tendrías que escribir `std::cout` y `std::endl`.

### 3. `int main() { ... }`

Es la **función principal**, punto de entrada obligatorio en todo programa C++.

- `int`: Tipo de retorno (integer - entero)

- `main`: Nombre fijo que el sistema operativo busca al ejecutar

- `()`: Paréntesis de función (pueden contener parámetros)

- `{ ... }`: Cuerpo de la función (código a ejecutar)

> [!IMPORTANT]
> Todo programa en C++ debe tener EXACTAMENTE una función main

### 4. `cout<<"Hola Mundo <<endl;"`

**Instrucción de salida** que muestra texto en la consola:

- `cout` : Character output - objeto que representa la salida estándar (generalmente la pantalla)

- `<<` : Operador de inserción (envía datos hacia cout)

- `"Hola Mundo"` : String literal (cadena de texto fija)

- `endl` : End line - inserta un salto de línea Y vacía el búfer (fuerza el envío inmediato a pantalla)
  - Alternativa: `"\n"` (solo salto de línea, más eficiente)

- `;` : Punto y coma - termina la instrucción (obligatorio en C++)

### 5. `return 0;`

**Valor de retorno** que indica al sistema operativo cómo terminó el programa.

- `return`: Palabra clave para devolver un valor

- `0`: Código de éxito (convención: 0 = todo bien), si sale valores diferentes a 0, indican diferentes tipos de errores

> [!TIP]
> Conceptos claves adicionales:
> | Simbolo | Significado | Uso |
> | ------- | --------------------- | ----------------------------------- |
> | `#` | Preprocesador | Se ejecuta ANTES de la compilación |
> | `//` | Comentario de línea | Ignorado por el compilador |
> | `/* */` | Comentario multilínea | Para explicaciones largas |
> | `<>` | Include de sistema | Busca en directorios del compilador |
> | `""` | Include local | Busca en el directorio actual |

## **01 - Variables y tipos de datos**

### **Variables**

Una variable es un espacio de almacenamiento nombrado en la memoria RAM del ordenador (como una caja etiquetada) que contiene un valor capaz de cambiar durante la ejecución de un programa.

### **Tipos de datos**

Los **tipos de datos** le indican al compilador qué tipo de información va a almacenar una variable (números, letras, decimales, etc.). C++ es un lenguaje de **tipado fuerte** (una vez defines el tipo, no puede cambiar).

1. Enteros **(`int`)**: almacena numeros **enteros** sin decimales

```Cpp
#include <iostream>

int main() {
    int mi_numero_entero = 10;
    int mi_num2 = 935752;

    return 0;
}
```

2. Flotantes **(`float`)**: almacena numeros **decimales** (coma flotante) con precisión simple de 6-7 dígitos decimales.

```cpp
#include <iostream>

int main() {
    float mi_numero_flotante = 11.25;

    return 0;
}
```

3. Doble presicion **(`double`)**: almacena números **decimales** con doble precisión de 15-16 dígitos decimales, es el más usado para decimales.

```cpp
#include <iostream>

int main() {
    double mi_numero_fdouble = 11.255285582;

    return 0;
}
```

4. Caracter **(`char`)**: almacena **UN SOLO** carácter ya sea una letra, número, símbolo usando comillas **SIMPLE** `' '`.

```cpp
#include <iostream>

int main() {
    char mi_caracter = 'A';
    char mi_numero = '7';
    char mi_simbolo = '$';

    return 0;
}
```

4. Booleano **(`bool`)**: almacena valores de **verdadero/falso** (lógica binaria).

```cpp
#include <iostream>

int main() {
    bool mi_booleanoV = true
    bool mi_booleanoF = false

    return 0;
}
```

5. Sin valor **(`void`)**: representa la **ausencia de tipo**; no se usa para variables, solo para funciones.

```cpp
#include <iostream>
using namespace std;

void mostrar_mensaje() {
    cout<<"Hola Mundo" <<endl;
}

int main() {
    mostrar_mensaje();

    return 0;
}
```

## **02 - Entrada de datos**

La **entrada de datos** es cómo el programa recibe información del usuario mientras se ejecuta. Es como cuando alguien te pregunta tu nombre y tú lo escribes.

### El objeto `cin`:

**`cin`** significa **"character input"** (entrada de caracteres) y es el objeto que C++ usa para leer lo que el usuario escribe en el teclado.

- ¿Como funciona?
  1. El programa se detiene y espera a que el usuario escriba algo

  2. El usuario escribe un valor y presiona **ENTER**

  3. `cin` guarda ese valor en la variable

  4. El programa continúa ejecutándose

```cpp
#include <iostream>
#include <string>
using namespace std;

int mmain() {
    string nombre;

    cout<<"Ingresa tu nombre: ";
    cin>>nombre;

    cout<<"Hola, " <<nombre <<endl;
    return 0;
}
```

> El `cin` sirve para ingresar datos en pantalla y `cout` es para mostrar datos en pantalla.

## **03 - Expresiones**

Una **expresión** es una combinación de **[operadores](./Operadores.md)**, **[variables](#variables)** y **valores** que C++ puede calcular para obtener un resultado. Es como una operación matemática que hace la computadora. Imaginemos a una expresion como como una pregunta matematica que le haces al programa:

```cpp
#include <iostream>

int main() {
    int num = 2 + 4 // ¿Cuanto es 2 + 4?
}
```

## **04 - Condicionales**

Los **condicionales** son estructuras de control que permiten que un programa **tome decisiones** basadas en condiciones. Es como cuando tomas decisiones en la vida real, por ejemplo: "**Si** llueve llevare una sombrilla, **si no** llueve lo dejare".

> [!IMPORTANT]
> Sin condicionales, los programas serían **secuenciales y aburridos** (harian siempre lo mismo). Con condicionales, los programas pueden **reaccionar** según la entrada del usuario o el estado del programa.

1. ### Condicional `if/else`:

```cpp
#include <iostream>
using namespace std;

int main() {

    return 0;
}
```

2. ### Condicional: `switch`:

```cpp
#include <iostream>
using namespace std;

int main() {


    return 0;
}
```

## **05 - Ciclos o Bucles**
