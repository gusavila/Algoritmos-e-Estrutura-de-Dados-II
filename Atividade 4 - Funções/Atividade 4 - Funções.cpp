#include <iostream>

using namespace std;

void Somar() {
    float n1 = 0, n2 = 0;
    cout << "Digite o primeiro numero: ";
    cin >> n1;
    cout << "Digite o segundo numero: ";
    cin >> n2;
    cout << "Resultado = " << n1 + n2 << endl;
}
float Subtrair() {
    float n1 = 0, n2 = 0;
    cout << "Digite o primeiro numero: ";
    cin >> n1;
    cout << "Digite o segundo numero: ";
    cin >> n2;
    return n1 - n2;
}
void Multiplicar(float n1 = 0, float n2 = 0) {
    cout << "Digite o primeiro numero: ";
    cin >> n1;
    cout << "Digite o segundo numero: ";
    cin >> n2;
    cout << "Resultado = " << n1 * n2 << endl;
}
float Dividir(float n1 = 0, float n2 = 0) {
    cout << "Digite o primeiro numero: ";
    cin >> n1;
    cout << "Digite o segundo numero: ";
    cin >> n2;
    return n1/n2;
}

int main()
{
    int Op = 0;
    do {
        cout << "          Menu" << endl;
        cout << "1 - Somar " << endl;
        cout << "2 - Subtrair " << endl;
        cout << "3 - Multiplicar " << endl;
        cout << "4 - Dividir " << endl;
        cout << "5 - Sair "  << endl;
        cout << endl;
        cout << "Digite a opcao escolhida: ";
        cin >> Op;
        cout << endl;
        switch (Op)
        {
        case 1:
            Somar();
            cout << endl;
            break;
        case 2:
            cout << "Resultado = " << Subtrair() << endl;
            cout << endl;
            break;
        case 3:
            Multiplicar();
            cout << endl;
            break;
        case 4:
            cout << "Resultado = " << Dividir() << endl;
            cout << endl;
            break;
        case 5:
            cout << "Saindo...";
            break;
        default:
            cout << "Opcao invalida!" << endl;
            cout << endl;
            break;
        }
    } while (Op != 5);
        return 0;
}

