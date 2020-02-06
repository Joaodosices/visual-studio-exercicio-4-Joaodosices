
#include <iostream>
using namespace std;
int main()
{
	int escolha{};
	int num1;
	int num2;
	cout << "Para multiplicacao escolha 1 \nPara soma escolha 2\n";
	cin >> escolha;
	cout << "Digite um numero: ";
	cin >> num1;
	cout << "Digite um segundo numero: ";
	cin >> num2;
	
		
		if (escolha == 1) {
			int resultado{ num1 * num2 };
			cout << "O resultado da " << resultado << endl;
	    }
	
		else if (escolha == 2) {
			int resultado{ num1 + num2 };
			cout << "O resultado da " << resultado << endl;
		}
		
}  