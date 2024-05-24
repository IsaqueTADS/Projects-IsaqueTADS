#include<iostream>
#include<locale.h>
using namespace std;
int main (){
    setlocale(LC_ALL,"portuguese");
    float altura, peso,imc,opc;


    cout<<"CALCULADORA DE IMC 2.0\n"<<endl;
    
    cout<<"project by Isaque Rodrigues Alves\n"<<endl;


    cout<<" [1] Calcular IMC\n [2] Sair\n Escolha uma das opções! "<<endl;
    cin>>opc;



    cout<<"Qual a sua altura? "<<endl;
    cin>>altura;
    cout<<"Qual o seu peso? "<<endl;
    cin>>peso;







    return 0;
}

