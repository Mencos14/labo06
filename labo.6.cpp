#include <iostream>
using namespace std;
int main()
{
    int cantidad;
    int num1 = 0;
    int num2 = 1;
    int resultado;

    cout << "ingrese la cantidad de elementos de la secuencia fibobonacci que quieres imprimir: ";
    cin >> cantidad;

    for(int i = 0; i < cantidad; i++)
    {
        resultado = num1 + num2;
        num1 = num2;
        num2 = resultado
        
        cout << " resultado: " << resultado << "\n";

        
    }
   return 0;
}

