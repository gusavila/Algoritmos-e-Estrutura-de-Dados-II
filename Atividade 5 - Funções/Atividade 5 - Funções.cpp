#include <iostream>

using namespace std;

void triangulo(float Y, float X = 0, float Z = 0) {
	do {
		cout << "Digite o comprimento de X : ";
		cin >> X;
		cout << "Digite o comprimento de Y : ";
		cin >> Y;
		cout << "Digite o comprimento de Z : ";
		cin >> Z;
		if ((X >= Y + Z) || (Y >= X + Z) || (Z >= X + Y))
		{
			cout << endl;
			cout << "Nao possui propriedades de um triangulo!" << endl;
			cout << endl;
		}
	} while ((X >= Y + Z) || (Y >= X + Z) || (Z >= X + Y));
	string triangulo1, triangulo2, triangulo3;
	triangulo1 = "Triangulo Equilatero";
	triangulo2 = "Triangulo Isosceles";
	triangulo3 = "Triangulo Escaleno";
	if ((X == Y) && (X == Z)) {
		cout << endl;
		cout << triangulo1;
		cout << endl;
	}
	if ((X == Y) && (Y != Z) || (X == Z) && (Z != Y) || (Y == Z) && (Z != X)) {
		cout << endl;
		cout << triangulo2;
		cout << endl;
	}
	if ((X != Y) && (X != Z) && (Y != Z)) {
		cout << endl;
		cout << triangulo3;
		cout << endl;
	}
}
int main()
{
	triangulo(0);
	
	return 0;
}
