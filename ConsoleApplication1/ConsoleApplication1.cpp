// ConsoleApplication1.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
using namespace std;
int main()
{
	int num1;
	int num2;
	cout << "Digite um numero: ";
	cin >> num1;
	cout << "Digite um segundo numero: ";
	cin >> num2;

	int resultado{ num1 + num2 };
	cout << "O resultado da " << resultado << endl;
}  