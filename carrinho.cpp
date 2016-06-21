// Meu primeiro códico em c++
#include <iostream>
#include <string>
#include <ctime>
using namespace std;
void imprimir_espacos(int total);
int main()
{
	int total_espacos = 50;
	
	for (int rodada = 0; rodada < total_espacos; rodada++)
	{

		imprimir_espacos(rodada);
		cout << "   _  " << endl;
		imprimir_espacos(rodada);
		cout << "-o - o>" << endl;

		system("cls");
	}
		return 0;

}

void imprimir_espacos(int total)
{
	for (int quantidade_espacos = 0; quantidade_espacos < total; quantidade_espacos++)
	
	{
		cout << " ";
		
	}
