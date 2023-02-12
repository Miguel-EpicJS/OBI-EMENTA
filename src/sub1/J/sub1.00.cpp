// Conceitos básicos de Aritmética e Geometria

// [J] Inteiros, operações e comparações.

#include <iostream>

using namespace std;


int main()
{

    int n1, n2, n3; // define 3 váriaveis inteiras

    n1 = 100; // atribui um valor
    n2 = 5;
    n3 = 25;

    n2 -= n1; // subtração

    n1 /= n3; // divisão
    
    n3 += n2; // adição

    n2 *= n3; // multiplicação

    n3 *= n2;

    // comparações lógicas
    cout << (n1 > 5 ? "n1 é maior que 5\n");
    cout << (n1 < 5 ? "n1 é menor que 5\n");
    cout << (n1 == 5 ? "n1 é igual que 5\n");

    // > < == != <= >=

    return 0;
}
