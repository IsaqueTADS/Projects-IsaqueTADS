#include <iostream>
#include <locale.h>
#include <stdbool.h>

using namespace std;

   char palavra[60], chute[1], forca[60];
   int opc, difi, i, tamanho, vidas, acertos;
   bool acerto;
    
   void inicio ();
   void dificuldade ();
   void facil();
   

int main(){

    setlocale(LC_ALL,"portuguese_Brazil");

    
    inicio();
    

    switch(opc){
        
        case 1:
       
          dificuldade();

    
    }

    switch(difi){

        case 1:

            facil();

       


    }
    
    


    return 0;
}


void inicio(){

    cout<<"JOGO DA FORCA V2.0 "<<endl;
    cout<<"===================="<<endl;
    cout<<"Criador: IsaqueTADS"<<endl;
    cout<<"Isaque Rodrigues Alves\n "<<endl;

    cout<<"Instragam:\n@isaquetads \n@isaque_rodriguesdev\n\n "<<endl;
    system("pause");
    system("cls");

    dificuldade();

}

void dificuldade(){
    system("cls");

    cout<<"DIFICULDADE DO JOGO !\n "<<endl;

    cout<<"[1] Facil  [3] Dificil"<<endl;
    cout<<"[2] Normal [ ] INSANOO"<<endl;
    cout<<"[5] Sair "<<endl;
    cout<<"Escolha uma das opções acima: "<<endl;
    cin>>difi;

    while(difi == 5){
        system("cls");


       cout<<"DESISTIU NÉ ;-; ;-; ;-; "<<endl;
        break;
    }

}


void facil (){

    loop:

     system("cls");

         i = 0;
         tamanho = 0;
         acertos = 0;
         acerto = false;
         vidas = 10;

         cout << "Qual a palavra que o jogador vai adivinhar? "<<endl;
         cin>>palavra;
         system("cls");

         while(palavra[i] != '\0' ){

            i ++;
            tamanho ++;

         }

         for(i = 0; i < 60; i++){

            forca[i] = '-';

         }
         
         while((vidas > 0) && (acertos < tamanho)){
            cout<<"Vidas restante: "<<vidas<<endl;
            cout<<"Forca: ";
            for(i = 0; i < tamanho; i ++){
                
            cout<<forca[i];

            }  
            cout<<"\n"<<endl;
            cout<<"Chute uma letra: "<<endl;
            cin>>chute[0];

            for(i = 0; i < tamanho; i ++){

                if (palavra[i] == chute[0]){
                    acerto = true;
                    forca[i] = palavra[i];
                    acertos ++;

                }
                //esse for verifica se a letra está na palavra secreta, e se estive coloca a letra no lugar certo.

            }

            if(!acerto){

                vidas --;

            }

             acerto = false;
             system("cls");

            
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

                cout<<"Jogar novamente? "<<endl;
                cout<<"[1] jogar a mesma dificuldade "<<endl;
                cout<<"[2] Escolher outra dificuldade"<<endl;
                cout<<"[3] Sair "<<endl;
                cin>>opc;

                if(opc == 1){

                    goto loop;

                }else if (opc == 2)
                {

                    dificuldade();

                }else
                {
                    system("cls");

                    cout<<"Obrigado por jogar meu jogo v3 "<<endl;
                    
                }
                
         
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
                cout<<"[1] jogar a mesma dificuldade "<<endl;
                cout<<"[2] Escolher outra dificuldade"<<endl;
                cout<<"[3] Sair "<<endl;
                cin>>opc;

                if(opc == 1){

                    goto loop;

                }else if (opc == 2)
                {

                    dificuldade();

                }else
                {
                    system("cls");

                    cout<<"Obrigado por jogar meu jogo v3 "<<endl;
                   
                }
         
                

               

         }   




}