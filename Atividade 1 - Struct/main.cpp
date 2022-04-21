#include <iostream>
#include <locale>

using namespace std;

struct Person
    {
       string Name, BD, St, C, Est;
       int Num = 0;
    };

int main()
{
    setlocale(LC_ALL,"portuguese");
    Person P;
    cout << "Nome : ";
    getline(cin,P.Name);
    cout << "Data de Nascimento : ";
    getline(cin,P.BD);
    cout << "Rua : ";
    getline(cin,P.St);
    cout << "Número : ";
    cin >> P.Num;
    cin.ignore();
    cout << "Cidade : ";
    getline(cin,P.C);
    cout << "Estado : ";
    getline(cin,P.Est);


    cout << endl;
    cout << "Nome : " << P.Name << endl;
    cout << "Data de Nascimento : " << P.BD << endl;
    cout << "Rua : " << P.St;
    cout << ", " << P.Num << endl;
    cout << "Cidade : " << P.C << endl;
    cout << "Estado : " << P.Est << endl;

    return 0;
}
