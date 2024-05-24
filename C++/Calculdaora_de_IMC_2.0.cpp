#include<iostream>
#include<locale.h>
#include<stdbool.h>
using namespace std;
int main (){
    setlocale(LC_ALL,"portuguese");
    float altura, peso,imc;
    int opc,opc2;


    cout<<"CALCULADORA DE IMC 2.0\n"<<endl;
    
    cout<<"project by Isaque Rodrigues Alves\n"<<endl;


    cout<<" [1] Calcular IMC\n [2] Sair\n Escolha uma das opções! "<<endl;
    cin>>opc;

    loop:


    switch(opc){

        case 1:
              system("cls");
              cout<<"Qual a sua altura? "<<endl;
              cin>>altura;
              cout<<"Qual o seu peso? "<<endl;
              cin>>peso;

              imc=peso/(altura*altura);
              cout<<"Seu IMC é: "<<imc<<endl;

              if(imc <= 18.5)
              {

                cout<<"Abaixo do peso!\n "<<endl;

              }else if(imc == 18.6  || imc <= 24.9)
              {

                cout<<"Peso ideal (parabéns)!\n "<<endl;

              }else if(imc == 25 || imc <=29.9 )
              {

                cout<<"levemente acima do peso!\n "<<endl;

              }else if(imc ==30 || imc <=34.9)
              {

                cout<<"Obesidade 1° grau\n "<<endl;

              }else if(imc == 35 || imc <= 39.9)
              {

                cout<<"Obesidade 2° grau (severa)\n "<<endl;

              }else
              {

                cout<<"Obesidade 3° grau (mórbia(doença) )!\n "<<endl;

              }



              cout<<"O que você quer fazer?\n [1] Sair\n [2] Fazer outro calculo\n Escolha uma da opções! "<<endl;
              cin>>opc2;

              if(opc2 == 2)
              {

                goto loop;

              }else
              {
                break;
              }

              
            
              break;
    }

    while(opc != 2 )
    {

        break;

    }










    return 0;
}

