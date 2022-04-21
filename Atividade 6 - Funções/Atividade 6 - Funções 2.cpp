#include <iostream>
using namespace std;

void funcao(int& a, int& b, int& temp)
{
    temp = a;
    for (int i = 1; i < b; i++)
    {
    
        a = temp * a;   
    }
}
int main()
{
    setlocale(LC_ALL, "portuguese");
    int a = 0, b = 0, temp = 0;
    cout << "Digite o valor de A: ";
    cin >> a;
    cout << "Digite o valor de B: ";
    cin >> b;
    funcao(a, b, temp);
    cout << temp << " elevado à " << b << " é igual à: " << a << endl;
}
