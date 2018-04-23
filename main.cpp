/* programa_23 Imprimir los numeros del 9 al 0
estructura: ciclica
autor: Luis Alberto Garcia Rodriguez
numero de lista 11
fecha 03 de marzo del 2015
*/
#include <iostream>
#include <windows.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int x;
    x=9;
    cout<<"\n Programa que imprime los numeros del 9 al 0";
    cout<<"\n\n Estrucutra de control do while\n\n";
    do
        {
        cout<<"\n "<<x;
        x=x-1;
        }
    while (x>=0);
        cout<<"\n\n Presione enter para salir...\n\n";
        system ("pause");

    return 0;
}
