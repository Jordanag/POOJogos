#include <iostream>
#include <string>
#include <ctime>
using namespace std;
int main()
{
 
bool sair = false;
string jog1, jog2;
int vida1 = 20, vida2 = 20;
int Ataque = 4, Defesa = 2;
 
cout << "Digite o nome do jogador 1:" << endl;
cin >> jog1;
 
cout << "Digite o nome do jogador 2:" << endl;
cin >> jog2;
 
while (sair == false) 
{
 
cout << " o               o" << endl;
cout << ".T./           \\.T." << endl;
cout << " ^               ^ " << endl;
cout << jog1 << "          " << jog2 << endl;
cout << "Vida: " << vida1 << "      " << "Vida: " << vida2 << endl;
 
system("pause");
int dado6;
 
srand( (int) time(0) );
 
dado6 = rand() % 6 + 1;
if (dado6 > 4)
{
 
vida1 = vida1 - dado6;
cout << jog1 << “Voce acertoou!!” << endl;
cout << jog2 << “Dano:” << - dado6 << endl;
cout << “próxima jogada (digita enter):” << endl;
cin.get();
}
If else (dado6 <=4)
{
 
cout << jog1 << “Voce errou!” << endl;
cout << “proxima jogada (digita enter):” << endl;
cin.get();
}
 
dado6 = rand() % 6 + 1;
if (dado6 > 4)
{
 
Vida2 = vida2 - dado6;
cout << jog1 << “Dano:” << endl;
cout << jog2 << “Voce acertoou!!” << - dado6 << endl;
cout << “próxima jogada (digita enter):” << endl;
cin.get();
}
If else (dado6 <=4)
{
 
cout << jog2 << “Voce errou!” << endl;
cout << “proxima jogada (digita enter):” << endl;
cin.get();
}
 
 
//cout << "Vida: " << vida1 << "      " << "Vida: " << vida2 << endl;
 
system("cls");
if (vida1 <= 0 || vida2 <= 0)
{
sair = true;
}
else system(“cls”);
}
 
cout << "Fim de Jogo!" << endl;
if (vida1 > 0) cout << jog1 << “Venceeeeu!” << endl;
else if (vida2 > 0) << jog2 << “Venceeeeu!” << endl;
else cout << “Que peninha, os dois perderam!” << endl;
 
return 0;
 
 
}
