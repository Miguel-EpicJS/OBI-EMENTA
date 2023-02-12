// Conceitos básicos de Aritmética e Geometria

// [J] Números Primos.

#include <iostream>

using namespace std;

bool isPrime(long long x)
{
    for (int i = 2; i * i < x; i++)
    {
	if (x % i == 0)
	    return false;
    }
    return true;
}

int main()
{

    cout << isPrime(100) << "\n";
    cout << isPrime(23) << "\n";

    return 0;
}
