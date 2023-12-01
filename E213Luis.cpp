// Exercicio prático de avaliação n2 
// 2023-11-13
// Elaborado por Luís Peixoto n13

#include <iostream>
using namespace std;

int main()
{
//--------------------------- 1) Inicializar o array, a posição 0 é ignorada.

	int arrayn1[6] = { 0, 236, 8, 134, 81, 176 };

	cout << "1) Inicializar o array, ignorando a posicao 0: arrayn1[6] = { 0, 236, 8, 134, 81, 176 }\n\n\n";

//--------------------------- 2) Listar o array, ignorando a posição 0.

	cout << "2) Listar o array, ignorando a posicao 0.\n   arrayn1 = { ";

	//---processamento (estrutura ciclica) para listar o array

for (int i = 1; i <= 4; i++)
{
	cout << arrayn1[i] << ", ";
}
	cout << arrayn1[5] << " }\n\n\n";  //---so para o output ficar organizado

//---------------------------3) Quantos numeros impares há no array?

	cout << "3) Quantos numeros impares ha no array?\n   A quantidade de numeros impares no array e ";

	int contador1 = 0;

	for (int i = 1; i <= 5; i++)
	{
		if (arrayn1[i] % 2 == 1)
		{
			contador1 = contador1 + 1;
		}
	}

	cout << contador1 << " .\n\n\n";

//----------------------------6) Qual é o maior numero?

	cout << "6) Qual e o maior numero?\n   O maior numero e ";

	int maior1 = arrayn1[0];

	for (int i = 1; i <= 5; i++)
	{
			if (arrayn1[i] > maior1)
			{
				maior1 = arrayn1[i];
			}
	}

	cout << maior1 << ".\n\n\n";

//---------------------------10) ler n1; ler n2; caso n1 exista no array, trocá-lo por n2. Listar o novo array.

	cout << "10) Ler n1, ler n2. Caso exista n1 no array, troca-lo por n2.\n   ";

		int num1, num2,  temp;

		cout << "Indique um numero: ";
		cin >> num1;
		cout << "Indique outro numero: ";
		cin >> num2;
        
		cout << "\n\n   Caso o seu primeiro numero ja esteja contido na lista, foi trocado pelo segundo.";
		cout << "\n   Os novos elementos do array sao: ";

		for (int i = 1; i <= 5; i++)
		{
			if (num1 == arrayn1[i])
			{
				arrayn1[i] = num2;
			}

			cout << arrayn1[i] << " ";
		}

		cout << "\n\n\n\n";

		cout << "Elaborado por Luis Peixoto n13\n\n\n";
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
