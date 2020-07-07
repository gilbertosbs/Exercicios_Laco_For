#include <iostream>
#include <iomanip> //importando bibliotecas
using namespace std;
int main(void)
{
     setlocale(LC_ALL, "Portuguese");
     int anterior, atual, proximo, i; //definindo variaveis
     anterior = 0;
     atual = 1;
     for( i = 1; i<=15; i++) //criando laço for
     {
          proximo = atual + anterior;
          anterior = atual;
          atual = proximo;
          cout << "O atual é : " << atual <<endl; //apresentando atual
     }
     cin.get(); //pausando a execução
}
