// Paso por referencia
#include <iostream>
using namespace std;

int square1(int n)
{


    n *= n;
    cout << "dir de n1 en square1(): " << &n << "\n";
    return n;
}
void square2(int* n)
{
    // direcciones en la función y en el main son las mismas
    cout << "dir de n2 in square2(): " << n << "\n";

    // De-referenciación
    *n *= *n;
}
// Paso por referencia con argumentos
void square3(int& n)
{
    // direcciones iguales()
    cout << "address of n3 in square3(): " << &n << "\n";

    // De-referenciamiento implicito
    n *= n;
}
void info2()
{
    // llamado por valor
    int n1 = 8;
    cout << "dir n1 en main(): " << &n1 << "\n";
    cout << "Cuadrado de n1: " << square1(n1) << "\n";
    cout << "Sin cambios en n1: " << n1 << "\n";

    // llamado por referencia con punteros
    int n2 = 8;
    cout << "dir de n2 en main(): " << &n2 << "\n";
    square2(&n2);
    cout << "Cuadrado de n2: " << n2 << "\n";
    cout << "Cambios en n2: " << n2 << "\n";

    // llamado por referencia con argumentos
    int n3 = 8;
    cout << "dir de n3 en main(): " << &n3 << "\n";
    square3(n3);
    cout << "Cuadrado de n3: " << n3 << "\n";
    cout << "Cambios en n3: " << n3 << "\n";
}
