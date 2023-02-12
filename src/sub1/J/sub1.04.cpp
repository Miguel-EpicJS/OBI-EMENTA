// Conceitos básicos de Aritmética e Geometria

// [J] Distância Euclidiana.

#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    int x1, y1, x2, y2;

    cout << "INSIRA AS COORDENADAS X E Y DO PRIMEIRO PONTO: ";
    cin >> x1 >> y1;

    cout << "\n";

    cout << "INSIRA AS COORDENADAS X E Y DO SEGUNDO PONTO: ";
    cin >> x2 >> y2;

    cout << "\n";

    cout << "DISTÂNCIA EUCLIDIANA: sqrt( (x1 - x2)^2 + (y1 - y2)^2 ) - " << sqrt( pow( x1-x2, 2 ) + pow( y1-y2, 2 ) ) << "\n";

    cout << "DISTÂNCIA EUCLIDIANA(sem raiz quadrada): ( (x1 - x2)^2 + (y1 - y2)^2 ) - " << pow( x1-x2, 2 ) + pow( y1-y2, 2 ) << "\n"; 

    return 0;
}

