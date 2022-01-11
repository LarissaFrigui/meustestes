#include <iostream> /* manipulacao de fluxo de dados padrao do sistema */
#include <cstring>  /* manipulacao de cadeia de caracteres       */
#include <ctime>    /* manipulacao de tempo                      */
#include <cmath>    /* manipulacao de funcoes matematicas        */
#include <cstdlib>  /* blibliotecas para utilizacao do c         */
#include <cstdio>   /* biblioteca padrao de entrada do c         */
#include <cctype>   /* biblioteca de conversao de tipos de dados */
#include <iomanip>  /* formatacao de variaveis na saida          */
#include <locale.h> /* exibir acentos                            */

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std; 
int main(int argc, char** argv) {
setlocale(LC_ALL,"Portuguese"); // comando para mostrar ascentos

cout << "Exercício 4\n";
inicio:
int dia, mes, ano, verifica, numdia=0, i, numdiatotal=0;
char op;

cout << "Informe a data que você deseja saber o dia do ano.\n Exemplo: 01 01 2022\n";
cout << "Dia: "; cin >> dia;
cout << "Mês: "; cin >> mes;
cout << "Ano: "; cin >> ano; 

//Verificação do ano bissexto
if (ano%400 == 0)
{
	verifica =1;
}
else if (ano%4 == 0 && ano%100 != 0)
{
	verifica =1;
}
else if (ano%100 ==0 && ano%400 !=0)
{
	verifica=2;
}
else
{
	verifica=2;
}
if (verifica ==1)
{
	for (i=1;i<mes;i++)
	{
		if (i%2==0)
		{
			numdia=30;
		}
		else
		{
			numdia=31;
		}
		numdiatotal=numdiatotal+numdia;	
	}
	if (mes<3)
	{
		numdiatotal=numdiatotal+dia;
	}
	else
	{
		numdiatotal=numdiatotal+dia-1;
	}
}
if (verifica == 2)
{
	for (i=1;i<mes;i++)
	{
		if (i%2==0)
		{
			numdia=30;
		}
		else
		{
			numdia=31;
		}
		numdiatotal=numdiatotal+numdia;	
	}
	if (mes<3)
	{
		numdiatotal=numdiatotal+dia;
	}
	else
	{
		numdiatotal=numdiatotal+dia-2;
	}	
}
cout << "\nSua data é o dia " << numdiatotal << " do ano";
cout << "\n\nDeseja verificar outra data?(S/N) "; cin >> op; 
if (op == 's' || op == 'S')
{
	goto inicio;
}
else
{
	cout << "Fim do programa.";
}
return 0;
}
