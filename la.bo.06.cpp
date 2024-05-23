#include <iostream>
using namespace std;
int main()
{
    int cantidad;
    int num1 = 0;
    int num2 = 1;
    int resultado;
    int contador = 0;

    cout << "ingrese la cantidad de elementos de la secuencia fibobonacci que quieres imprimir: ";
    cin >> cantidad;

   while (contador < cantidad)
    {
        resultado = num1 + num2;
        num1 = num2;
        num2 = resultado;
        
        cout << " resultado; " << resultado << "\n";
        contador ++;

        
    }
   return 0;
}

