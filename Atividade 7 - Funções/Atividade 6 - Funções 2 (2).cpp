#include <iostream>

using namespace std;

int SomaImpares(int N)
{
    int Soma = 0;
    for (int i = N; i > 0; i--)
    {
        if (i %2 != 0)
        {
            Soma = Soma + i;
        }
    }
    return Soma;
}
int main()
{
    int N;
    cout << "Digite um numero inteiro: ";
    cin >> N;
    if (N > 0)
    {
        cout << "A soma dos numeros impares e: " << SomaImpares(N);
    }
    else
    {
        cout << "Numero nao e positivo.";
    }
}
