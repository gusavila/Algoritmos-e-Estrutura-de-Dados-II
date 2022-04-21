#include <iostream>

using namespace std;

struct jogador {
	string nome;
	int idade;
};

string menormedia(jogador time1[], jogador time2[]) {
	float soma1 = 0, soma2 = 0;
	for (int i = 0; i < 3; i++) {
		soma1 += time1[i].idade;
	}
	soma1 /= 3;
	for (int i = 0; i < 3; i++) {
		soma2 += time2[i].idade;
	}
	soma2 /= 3;
	if (soma1 < soma2) {
		for (int i = 0; i < 3; i++) {
			return time1[i].nome;
		}
	}
	else if (soma1 > soma2) {
		for (int i = 0; i < 3; i++) {
			return time2[i].nome;
		}

		int main() {
			jogador time1[3];
			jogador time2[3];
			int cont = 0, cont2 = 0;
			cout << "Time 1" << "\n \n";
			for (int i = 0; i < 3; i++) {
				cout << "Nome: ";
				cin >> time1[cont].nome;
				cout << "Idade: ";
				cin >> time1[cont].idade;
				cont++;
			}
			cout << endl << endl;
			cout << "Time 2" << "\n \n";
			for (int i = 0; i < 3; i++) {
				cout << "Nome: ";
				cin >> time2[cont2].nome;
				cout << "Idade: ";
				cin >> time2[cont2].idade;
				cont2++;
			}
			cout << menormedia(time1, time2);

			return 0;
		}