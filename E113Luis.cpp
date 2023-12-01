// Exercício prático 1
// 2023-10-24
// Elaborado por Luís Peixoto n13

#include <iostream>
using namespace std;

int main()
{
//Ler 4 números e contar os positivos e escrever no ecrâ

//------------------------------------------atribuição
	int soma = 0;

//------------------------------------------processamento (estrutura cíclica, com introdução da variável n)
	cout << "1)";
	
	for (int i = 1; i <= 4; i++)
	{
		int n;

		cout << "Indique um numero: ";
		cin >> n;

		soma = soma + n;
	}

//------------------------------------------informar

	cout << "\n" << "A soma dos seus numeros e: " << soma << "\n" << "\n" << "\n";



//Ler 4 numeros e contar os positivos e escrever no ecrâ

//-------------------------------------------variáveis
	int n1, n2, n3, n4, contador = 0;

//-------------------------------------------aquisição
	cout << "2)";

	cout << "Indique o primeiro numero: ";
	cin >> n1;

	cout << "Indique o segundo numero: ";
	cin >> n2;

	cout << "Indique o terceiro numero: ";
	cin >> n3;

	cout << "Indique o quarto numero: ";
	cin >> n4;

//--------------------------------------------processamento (condição)
	if (n1>0)
	{
		contador = contador + 1;
	}
	if (n2 > 0)
	{
		contador = contador + 1;
	}
	if (n3 > 0)
	{
		contador = contador + 1;
	}
	if (n4 > 0)
	{
		contador = contador + 1;
	}

//----------------------------------------------informar
	cout << "\n" << "Esta amostra contem " << contador << " numeros positivos." << "\n" << "\n";


//Ler 4 numeros e encontrar o maior e escrever no ecrâ

//----------------------------------------------variáveis
	int maior;

//----------------------------------------------aquisição
	cout << "3)";

	cout << "Diga um numero: ";
	cin >> n1;

	cout << "Diga outro numero: ";
	cin >> n2;

	cout << "Diga outro numero: ";
	cin >> n3;

	cout << "Diga outro numero: ";
	cin >> n4;

	maior = n1;


//---------------------------------------------processamento(condição)
	if (n2>maior)
	{
		maior = n2;
	}
	if (n3 > maior)
	{
		maior = n3;
	}
	if (n4 > maior)
	{
		maior = n4;
	}

//----------------------------------------------afirmação
	cout << "O maior numero e: " << maior << "\n";


//-------------------------------------------fim
	cout << "\n" << "\n" << "Elaborado por Luis Peixoto n13" << "\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
