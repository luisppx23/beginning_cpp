// Projetinho 1
// 2023-11-17
// Elaborado por Luís Peixoto

#include <iostream>
using namespace std;

int arrayX[10] = { -2, -4, 0, 7, 5, 8, 10, 55, 66, 99 };

void Menu()
{
    //----------------------------------------------Lista das opçoes
    cout << "L - Listar o Array\n";
    cout << "1 - Somar os elementos do Array\n";
    cout << "2 - Encontrar o elemento Maior\n";
    cout << "3 - Numero de Positivos no Array\n";
    cout << "4 - Numero de Pares no Array\n";
    cout << "5 - Alterar um elemento\n";
    cout << "6 - Verificar se ha zeros\n";
    cout << "7 - Trocar duas posicoes do array.\n";
    cout << "T - Terminar\n\n\n";
    
}

void Listar()
{

    cout << "\n\nARRAY X = {";

    for (int i = 0; i <= 8; i++)
    {
        cout << arrayX[i] << ", ";
    }

    cout << arrayX[9] << "}\n\n";
}

int Somar()
{
    int soma = 0;
    
    for (int i = 0; i <= 9; i++)
    {
        soma = soma + arrayX[i];
    }

    return soma;
}

int Maior()
{
    int maior = arrayX[0];

    for (int i = 1; i <= 9; i++)
    {
        if (arrayX[i] > maior)
        {
            maior = arrayX[i];
        }

    }return maior;
}

int Positivos()
{
    int numPositivos = 0;

    for (int i = 0; i <= 9; i++)
    {
        if (arrayX[i] > 0)
        {
            numPositivos++;
        }
    }

    return numPositivos;
}

int Pares()
{
    int pares = 0;

    for (int i = 0; i <= 9; i++)
    {
        if (arrayX[i] % 2 == 0)
        {
            pares++;
        }
    }

    return pares;
}

void Posicao()
{
    int posicao, num;

    cout << "Escolha uma posicao a alterar o valor: ";
    cin >> posicao;

    cout << "Indique um valor: ";
    cin >> num;

    arrayX[posicao - 1] = num;
}

bool Zeros()
{
    int zeros = 0;
    bool temZeros;
    
    for (int i = 0; i <= 9; i++)
    {
        if (arrayX[i] == 0)
        {
            zeros++;
        }
    }

    if (zeros == 0)
    {
        temZeros = false;
    }
    else
    {
        temZeros = true;
    }
    return temZeros;
}

void Trocar()
{
    int temp, pos1, pos2;

    cout << "\nEscolha uma posicao para trocar com a proxima: ";
    cin >> pos1;

    cout << "\nEscolha a outra posicao: ";
    cin >> pos2;

    pos1--;
    pos2--;

    temp = arrayX[pos1];
    arrayX[pos1] = arrayX[pos2];
    arrayX[pos2] = temp;

    cout << "\n\nSe quiser confirmar a operacao, clique em Listar 'L'\n\n";
}

int main()
{
    char opcao;
    do
    {
        Menu();

        cout << "Escolha uma opcao: ";
        cin >> opcao;

        switch (opcao)
        {
        case 'L':
        {
            Listar();

            cout << "\n\n";
                
        break;
        }

        case '1':
        {
            cout << "\nSoma dos numeros : " << Somar();

            cout << "\n\n";

        break;
        }

        case '2':
        {
            Maior();
            cout << "\nMaior dos numeros : " << Maior();

            cout << "\n\n";

        break;
        }

        case '3':
        {
            Positivos();
            cout << "\nQuantidade de numeros positivos: " << Positivos();

            cout << "\n\n";

        break;
        }

        case '4':
        {
            Pares();
            cout << "\nQuantidade de numeros pares: " << Pares();

            cout << "\n\n";

        break;
        }

        case '5':
        {
            Posicao();
            cout << "\nCaso queira confirmar a sua alteracao, liste o array com a tecla 'L'";

            cout << "\n\n";

        break;
        }

        case '6':
        {
            Zeros();
            cout << "\nTem zeros? ";
                if (true)
                {
                    cout << "Tem";
                }
                else
                {
                    cout << "Nao";
                }

            cout << "\n\n";

        break;
        }

        case '7':
        {
            Trocar();
            break;
        }

        case 'T':
        {
            cout << "\n\nParece que se cansou do brinquedo. Ate uma proxima!!\n\n";
        break;
        }

        default:
        {
            cout << "\nEscolha uma das opcoes sugeridas.\n\n";
        }
            break;
        }
        } while (opcao != 'T');
}
