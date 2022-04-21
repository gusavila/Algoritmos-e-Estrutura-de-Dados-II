#include <iostream>
#include <locale>

using namespace std;

struct Cliente
{
    string Nome, CPF;
    char Sexo;
    int Idade = 0;
    float Creditos = 0;
};
int main()
{
    setlocale(LC_ALL,"portuguese");
   int Op = 0, cont = 0;
   float Filtro = 0;
   char Filtro2;
   Cliente Vetor[50];
    do
    {
        cout << "1 - Adicionar Cliente " << endl;
        cout << "2 - Filtrar Clientes por créditos  " << endl;
        cout << "3 - Filtrar Clientes por gênero  " << endl;
        cout << "4 - Sair " << endl;
        cout << endl;
        cout << "Digite a opção escolhida : " ;
        cin >> Op;
        cout << endl;
        switch(Op)
        {
        case 1:
            cout << "Nome : ";
            cin.ignore();
            getline(cin,Vetor[cont].Nome);
            cout << "CPF : ";
            getline(cin,Vetor[cont].CPF);
            cout << "Idade : ";
            cin >> Vetor[cont].Idade;
            cout << "Crédito : ";
            cin >> Vetor[cont].Creditos;
            cout << "Gênero : ";
            cin >> Vetor[cont].Sexo;
            cont++;
            cout << endl;
            cout << "---------------------------------------" << endl;
            cout << endl;
            break;
        case 2:
            cout << "Possuem crédito maior ou igual a : ";
            cin >> Filtro;
            cout << endl;
            for (int i = 0; i < cont; i++)
            if (Vetor[i].Creditos >= Filtro)
            {
                cout << "Nome : " << Vetor[i].Nome << endl;
            }
            cout << endl;
            cout << "---------------------------------------" << endl;
            cout << endl;
            break;
        case 3:
            cout << "Digite o gênero a ser filtrado (M/F) : ";
            cin >> Filtro2;
            cout << endl;
            for (int i = 0; i < cont; i++)
            if (Vetor[i].Sexo == Filtro2)
            {
                cout << "Nome : " << Vetor[i].Nome << endl;
            }
            cout << endl;
            cout << "---------------------------------------" << endl;
            cout << endl;
            break;
        case 4:
            cout << "Saindo...";
            break;
        default:
                cout << "    Opção Inválida!" << endl;
                cout << endl;
            break;
        }
    }
    while (Op != 4);
    return 0;
}
