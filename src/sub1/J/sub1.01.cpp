// Conceitos básicos de Aritmética e Geometria

// [J] Propriedades básicas dos inteiros (sinal, paridade, divisibilidade, etc). 

#include <iostream>

using namespace std;

int main()
{

    int n1, n2, n3; // define 3 váriaveis inteiras

    n1 = 100; 
    n2 = 5;
    n3 = 25;

    cout << (n1 > 0 ? "positivo\n");
    cout << (n1 < 0 ? "negativo\n");
    cout << (n1 == 0 ? "nulo\n");

    cout << (n1 % 2 == 0 ? "n1 é par\n" : "n1 é ímpar\n");

    cout << (n3 % 5 == 0 ? "n3 é divisível por 5\n");

    cout << "Resto da divisão n1/6 " << n1 % 6 << "\n";

    return 0;
}
