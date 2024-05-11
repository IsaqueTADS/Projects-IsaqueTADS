#include<iostream>
#include<locale.h>
using namespace std;
int main ()
{
    setlocale(LC_ALL,"portuguese_Brazil");
    float peso,altura,imc;
    string nome;
    cout<<"CALCULADORA DE IMC "<<endl
    <<"copyright © Isaque rodrigues Alves"<<endl;
    system("pause");
    cout<<"Digite seu primeiro nome "<<endl;
    cin>>nome;
    cout<<"Qual a sua altura? "<<endl;
    cin>>altura;
    cout<<"Qual o seu peso? "<<endl;
    cin>>peso;
    cout<<"Prezado(a)"<<nome<<": Esses são o seus resultados: "<<endl;
    imc=peso/(altura*altura);
    cout<<"IMC:"<<imc<<endl;
    cout<<"classificação: "<<endl;
    if(imc<16.9||imc==16.9)
    {
        cout<<"Muito abaixo do peso "<<endl;

     } else if(imc==17||imc<18.4||imc==18.4)
     {
        cout<<"Abaixo do peso "<<endl;

     } else if (imc==18.5||imc<24.9||imc==24.9)
     {
        cout<<"Peso normal "<<endl;

     }else if(imc==25||imc<29.9||imc==29.9)
     {
        cout<<"Acima do peso "<<endl;

     }else if (imc==30||imc<34.9||imc==34.9)
     {
        cout<<"Obesidade 1°grau "<<endl;

     }else if (imc==35||imc<40||imc==40)
     {
        cout<<"Obesidade 2°grau "<<endl;

     }else 
     {
        cout<<"Obesidade 3° grau "<<endl;
    }




    return 0;
}
