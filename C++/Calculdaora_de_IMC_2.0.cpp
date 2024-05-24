#include<iostream>
#include<locale.h>
#include<stdbool.h>
using namespace std;
int main (){
    setlocale(LC_ALL,"portuguese");
    float altura, peso,imc;
    int opc;


    cout<<"CALCULADORA DE IMC 2.0\n"<<endl;
    
    cout<<"project by Isaque Rodrigues Alves\n"<<endl;


    cout<<" [1] Calcular IMC\n [2] Sair\n Escolha uma das opções! "<<endl;
    cin>>opc;

    switch(opc){

        case 1:
              system("cls");
              cout<<"Qual a sua altura? "<<endl;
              cin>>altura;
              cout<<"Qual o seu peso? "<<endl;
              cin>>peso;
              imc=peso/(altura*altura);
              
              break;
    }

    while(opc != 2 )
    {

        break;

    }










    return 0;
}

