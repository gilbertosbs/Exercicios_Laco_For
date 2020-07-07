//programapediaousuarioaentradadedeoisvaloreseapresentaasomadeles
#include <iostream>
#include <iomanip> //importando biblioteca
using namespace std;
int main(void)
{
     setlocale(LC_ALL, "Portuguese");
     int a, b, r; //definindo variáveis
     cout << "\nDigite o valor de a: ";
     cin>> a; //lendo variavel a
     cout << "\nDigite o valor de b:";
     cin >> b; // lendo variavel b
     r = a + b; //somando as variaveis lidas
     cout << "\nO resultado da soma dos dois valores é : " << r << endl;
     cin.get();
}
