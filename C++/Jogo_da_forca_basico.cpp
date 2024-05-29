#include <iostream>
#include <locale.h>
#include <stdbool.h>

using namespace std;

int main(){

    setlocale(LC_ALL,"portuguese_Brazil");

    char palavra[60], chute[1], forca[60];
    int opc, indice, tamanho, vidas, acertos;
    bool acerto;



    cout<<"JOGO DA FORCA V1.0 "<<endl;
    cout<<"project by Isaque Rodrigues Alves\n"<<endl;
    system("pause");
    system("cls");

    cout<<"[1] Jogar\n";
    cout<<"[2] Sair\n";
    cout<<"Escolha uma das opções acima! "<<endl;
    cin>>opc;

    switch(opc){
        
        case 1:
        system("cls");

         indice = 0;
         tamanho = 0;
         acertos = 0;
         acerto = false;

         cout << "Escolha quantas vida o jogador vai ter! " <<endl;
         cin >> vidas;
         system("cls");
         
         cout << "Qual a palavra que o jogador vai adivinhar? "<<endl;
         cin>>palavra;
         system("cls");

         while(palavra[indice] != '\0' ){

            indice ++;
            tamanho ++;

         }

         for(indice = 0; indice < 60; indice++){

            forca[indice] = '_';

         }
         
         while(vidas > 0 && acertos < tamanho){
            cout<<"Vidas restante: "<<vidas<<endl;
            cout<<"Forca: ";
            for(indice = 0; indice < tamanho; indice ++){

                cout<<forca[indice];

            }


            break;



         }


    
    }

    while(opc == 2){
        system("cls");
        break;
    }




    return 0;
}