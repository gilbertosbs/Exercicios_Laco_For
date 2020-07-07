//somatoriode1atélimitedefinidopelousuário
#include <iostream> //importando bibliotecas
using namespace std;
int main(void)
{
     int s = 0; //definindo variaveis
     int a;
     cout <<"Insira um valor  inteiro limitante: "; //usuario escolhe o limite da soma
     cin >> a;
     for(int i=1; i<=a; i++) //definição laço for
             s = s + i; //somatorio de cada numero
     cout <<"O valor de S : " << s; //apresentação do somatorio total
     cin.get(); //pausar a execução
}

