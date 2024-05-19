#include<iostream>
#include<locale.h>
#include<math.h>
using namespace std;
int main (){
    setlocale(LC_ALL,"portuguese");
    float a,b,c,delta,rd,r1,r2;

    cout<<"CALCULADORA DE EQUAÇÃO DE SEGUNDO GRAU "<<endl;
    cout<<"A fórmula de Bhaskara"<<endl;
    cout<<"copyright © Isaque Rodrigues Alves"<<endl;

    system("pause");

    cout<<"Digite um numero para a "<<endl;
    cin>>a;
    cout<<"Digite um numero para b "<<endl;
    cin>>b;
    cout<<"Digite um numero para c "<<endl;
    cin>>c;
    
    if (a != 0) {

        delta=(b * b)-4*a*c;
        cout<<"o valor de delta: "<<delta<<endl;

       if (delta<0)
      {

        cout<<"A equação não possui raízes reais "<<endl; 
        
      }
       else if(delta==0)
      {

        r1=-b/(2*a);
        cout<<"A raiz de delta: "<<sqrt(delta)<<endl;
        cout<<"Possui apenas uma raiz real:"<<r1<<endl;
       
       }else
      
       {

        r1=(-b+sqrt(delta))/(2*a);
        r2=(-b-sqrt(delta))/(2*a);
        cout<<"Raiz 1: "<<r1<<endl;
        cout<<"Raiz 2: "<<r2<<endl;

       }

   }else 
   {

    cout<<"Isso não é uma equação do segundo grau ;-;"<<endl;

   }
          


 return 0;
    //retorna valor 0 para o int, ou seja encerra o programa
}
