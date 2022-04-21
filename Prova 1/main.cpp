#include <iostream>
#include <locale.h>

using namespace std;

struct Data
{
    int Dia = 0, Ano = 0;
    string Mes;
};

struct Funcionario
{
  string Nome, CPF, Cargo, Salario;
  int Idade = 0, Setor = 0;
  char Sexo;
};

int main()
{
    Data Datas[50];
    Funcionario Funcionarios[50];
    int Op = 0, cont =0, Op3 = 0;
    char Op2;
    setlocale(LC_ALL,"portuguese");
    do{
    cout << endl;
    cout << "            Menu" << endl;
    cout << " 1 - Cadastrar funcionários" << endl;
    cout << " 2 - Listar todos funcionários" << endl;
    cout << " 3 - Listar funcionários filtrando por sexo" << endl;
    cout << " 4 - Listar funcionários filtrando por setor" << endl;
    cout << " 5 - Sair" << endl;
    cout << endl;
    cout << " Digite o número da opção escolhida: ";
    cin >> Op;
    cout << endl;
     switch(Op)
     {
         case 1:
             cout << " Nome: ";
              cin.ignore();
              getline(cin,Funcionarios[cont].Nome);
             cout << " Idade: ";
              cin >> Funcionarios[cont].Idade;
             cout << " Sexo (M/F): ";
              cin >> Funcionarios[cont].Sexo;
             cout << " CPF: ";
              cin.ignore();
              getline(cin,Funcionarios[cont].CPF);
             cout << " Cargo ocupado: ";
              getline(cin,Funcionarios[cont].Cargo);
             cout << " Salário: ";
              cin >> Funcionarios[cont].Salario;
             cout << " Data de Nascimeto " << endl;
             cout << "   Dia: ";
              cin >> Datas[cont].Dia;
             cout << "   Mês: ";
              cin >> Datas[cont].Mes;
             cout << "   Ano: ";
              cin >> Datas[cont].Ano;
             cout << " Codigo do Setor onde trabalha(0-99): ";
              cin >> Funcionarios[cont].Setor;
              cont++;
         break;
         case 2:
            for (int i = 0;i <cont; i++)
            {
                cout << "Funcionário " << i+1 << endl;
                cout << " Nome: " << Funcionarios[i].Nome << endl;
                cout << " Idade: " << Funcionarios[i].Idade << endl;
                cout << " Sexo: " << Funcionarios[i].Sexo << endl;
                cout << " CPF: " << Funcionarios[i].CPF << endl;
                cout << " Cargo: " << Funcionarios[i].Cargo << endl;
                cout << " Salário: " << Funcionarios[i].Salario << endl;
                cout << " Data: " << Datas[i].Dia << " de " << Datas[i].Mes << " de " << Datas[i].Ano << endl;
                cout << " Setor:" << Funcionarios[i].Setor << endl;
                cout << "--------------------------------" << endl;
            }
         break;
         case 3:
            cout << " Digite o Sexo a ser filtrado (M/F): ";
            cin >> Op2;
            cout << endl;
            for (int i = 0;i <cont; i++)
            {
                if(Funcionarios[i].Sexo == Op2)
                {
                cout << " Nome: " << Funcionarios[i].Nome << endl;
                cout << " Idade: " << Funcionarios[i].Idade << endl;
                cout << " Sexo: " << Funcionarios[i].Sexo << endl;
                cout << " CPF: " << Funcionarios[i].CPF << endl;
                cout << " Cargo: " << Funcionarios[i].Cargo << endl;
                cout << " Salário: " << Funcionarios[i].Salario << endl;
                cout << " Data: " << Datas[i].Dia << " de " << Datas[i].Mes << " de " << Datas[i].Ano << endl;
                cout << " Setor:" << Funcionarios[i].Setor << endl;
                cout << "--------------------------------" << endl;
                }
            }
         break;
         case 4:
            cout << " Digite o setor a ser filtrado: ";
            cin >> Op3;
            cout << endl;
            for (int i = 0;i <cont; i++)
            {
                if(Funcionarios[i].Setor == Op3)
                {
                cout << " Nome: " << Funcionarios[i].Nome << endl;
                cout << " Idade: " << Funcionarios[i].Idade << endl;
                cout << " Sexo: " << Funcionarios[i].Sexo << endl;
                cout << " CPF: " << Funcionarios[i].CPF << endl;
                cout << " Cargo: " << Funcionarios[i].Cargo << endl;
                cout << " Salário: " << Funcionarios[i].Salario << endl;
                cout << " Data: " << Datas[i].Dia << " de " << Datas[i].Mes << " de " << Datas[i].Ano << endl;
                cout << " Setor:" << Funcionarios[i].Setor << endl;
                cout << "--------------------------------" << endl;
                }
            }
         break;
         case 5:
            cout << "Saindo..." << endl;
         break;
         default:
                cout << " Opção Inválida!" << endl;
         break;
     }
}while (Op != 5);
    return 0;
}
