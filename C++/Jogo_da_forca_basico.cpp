#include <iostream>
#include <locale.h>
#include <stdbool.h>

using namespace std;

   char palavra[60], chute[60], forca[60], usada1[60], usada2[60];
   int opc, difi, i, i1, tamanho, vidas, acertos,errou;
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
         i1 = 1;
         tamanho = 0;
         acertos = 0;
         acerto = false;
         vidas = 10;

         cout << "Qual a palavra que o jogador vai adivinhar? "<<endl;
         cin>>palavra;
         system("cls");

         while(palavra[i] != '\0' )
         {

            i ++;
            tamanho ++;

         }

         for(i = 0; i < 60; i++)
         {

            forca[i] = '_';
            usada1[i] = '-';

         }
         
         while((vidas > 0) && (acertos < tamanho))
         {
            cout<<"Vidas restante: "<<vidas<<endl;

            cout<<"Palavras usadas: ";

            for(i = 0; i < tamanho; i ++)
            {

                cout<<usada1[i];

            }

            cout<<"\n";

            cout << "  _______       \n";
            cout << " |/      |      \n";
            cout << " |      " << (errou >= 1 ? '(' : ' ') << (errou >= 2 ? '_' : ' ') << (errou >= 3 ? ')' : ' ') << "  \n";
            cout << " |      " << (errou >= 4 ? '\\' : ' ') << (errou >= 5 ? '|' : ' ') << (errou >= 6 ? '/' : ' ') << "  \n";
            cout << " |      " << (errou >= 7 ? '|' : ' ') << "     \n";
            cout << " |      " << (errou >= 8 ? '/' : ' ') << " " << (errou >= 9 ? '\\' : ' ') << "   \n";
            cout << " |              \n";
            cout << "_|___  ";
            for(i = 0; i < tamanho; i ++)
            {
                
            cout<<forca[i];

            } // esse for exibe os chutes se for certo.

            

            cout<<"\n"<<endl;
            cout<<"Chute uma letra: "<<endl;
            for(i = 0; i < tamanho; i++)
            {
                cin>>chute[i];
                break;
            }
            

            for(i = 0; i < tamanho; i ++)
            {
                for(i1 = 0; i1 < tamanho; i1++)

                if (palavra[i] == chute[i1]){
                    acerto = true;
                    forca[i] = palavra[i];
                    acertos ++;

                }
                //esse for verifica se a letra está na palavra secreta, e se estive coloca a letra no lugar certo.

            }
            
          

            if(!acerto){

                vidas --;
                errou ++;

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