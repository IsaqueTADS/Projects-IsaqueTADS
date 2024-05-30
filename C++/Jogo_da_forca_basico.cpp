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

            forca[indice] = '-';

         }
         
         while((vidas > 0) && (acertos < tamanho)){
            cout<<"Vidas restante: "<<vidas<<endl;
            cout<<"Forca: ";
            for(indice = 0; indice < tamanho; indice ++){
                
            cout<<forca[indice];

            }  
            cout<<"\n"<<endl;
            cout<<"Chute uma letra: "<<endl;
            cin>>chute[0];

            for(indice = 0; indice < tamanho; indice ++){

                if (palavra[indice] == chute[0]){
                    acerto = true;
                    forca[indice] = palavra[indice];
                    acertos ++;

                }

                system("cls");


            }
            if(!acerto)

                vidas --;
        
         }

         if(acertos == tamanho){

                cout<<"Parabens você acertou!! "<<endl;
                cout<<"       ___________      \n";
                cout<<"      '._==_==_=_.'     \n";
                cout<<"      .-\\:      /-.    \n";
                cout<<"     | |:.     | |    \n";
                cout<<"      '-|:.     |-'     \n";
                cout<<"        \\::.    /      \n";
                cout<<"         '::. .'        \n";
                cout<<"                      \n";
                cout<<"         _.' '._        \n";
                cout<<"        '-------'       \n\n";
         }else
         {

                cout<<"Poxa você perdeu e foi enfocardo ;-;-; ";
                cout<<"A palavra era: "<<palavra<<endl;
            
                cout<<"    _______________         \n";
                cout<<"   /               \\       \n"; 
                cout<<"  /                 \\      \n";
                cout<<"//                   \\/\\  \n";
                cout<<"\\|   XXXX     XXXX   | /   \n";
                cout<<" |   XXXX     XXXX   |/     \n";
                cout<<" |   XXX       XXX   |      \n";
                cout<<" |                   |      \n";
                cout<<" \\__      XXX      __/     \n";
                cout<<"   |\\     XXX     /|       \n";
                cout<<"   | |           | |        \n";
                cout<<"   | I I I I I I I |        \n";
                cout<<"   |  I I I I I I  |        \n";
                cout<<"   \\_             _/       \n";
                cout<<"     \\_         _/         \n";
                cout<<"       \\_______/           \n\n";


                cout<<"Jogar novamente? "<<endl;
                cout<<"[1] Sim "<<endl;
                cout<<"[2] Não "<<endl;
                cin>>opc;
            

         }

        
    
    }

    while(opc == 2){
        system("cls");
        break;
    }




    return 0;
}