//somatoriode1at�limitedefinidopelousu�rio
#include <iostream> //importando bibliotecas
using namespace std;
int main(void)
{
     int s = 0; //definindo variaveis
     int a;
     cout <<"Insira um valor  inteiro limitante: "; //usuario escolhe o limite da soma
     cin >> a;
     for(int i=1; i<=a; i++) //defini��o la�o for
             s = s + i; //somatorio de cada numero
     cout <<"O valor de S : " << s; //apresenta��o do somatorio total
     cin.get(); //pausar a execu��o
}

