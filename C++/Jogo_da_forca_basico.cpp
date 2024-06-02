#include <iostream>
#include <locale.h>
#include <stdbool.h>

using namespace std;

   char palavra[60], chute[60], forca[60], usada1[60], usada2[60], dica[60];
   int opc, difi, i, i1, tamanho, dtamanho, vidas, acertos,errou;
   bool acerto;
    
   void inicio ();
   void dificuldade ();
   void facil();
   void normal();
   void dificil();

   void ganhou();
   void perdeu();

int main(){

    setlocale(LC_ALL,"portuguese_Brazil");

    
    inicio();
    dificuldade();
    


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
    
    switch(difi){

        case 1:

        facil();
        
        case 2:

        normal();

        case 3:

        dificil();

        
    }

}

void facil (){

    setlocale(LC_ALL,"portuguese_Brazil");

     system("cls");

         i = 0;
         i1 = 1;
         tamanho = 0;
         acertos = 0;
         acerto = false;
         vidas = 10;
         errou = 0;

         cout << "Qual a palavra que o jogador vai adivinhar? "<<endl;
         cin>>palavra;
         system("cls");
         cout << "A palavra que você escolheu é? (ex, cidade, animal, frute, etc...) "<<endl;
         cin>>dica;
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
            cout<<"Dica: "<<dica<<endl;
           
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
            cout << " |       " << (errou >= 7 ? '|' : ' ') << "     \n";
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

                ganhou();
         
         }else
         {

               
                perdeu();
         }   




}


void normal(){

    setlocale(LC_ALL,"portuguese_Brazil");

     system("cls");

         i = 0;
         i1 = 1;
         tamanho = 0;
         acertos = 0;
         acerto = false;
         vidas = 6;
         errou = 0;

         cout << "Qual a palavra que o jogador vai adivinhar? "<<endl;
         cin>>palavra;
         system("cls");
         cout << "A palavra que você escolheu é? (ex, cidade, animal, frute, etc...) "<<endl;
         cin>>dica;
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
             cout<<"Dica: "<<dica<<endl;

            cout<<"Vidas restante: "<<vidas<<endl;

            cout<<"Palavras usadas: ";

            for(i = 0; i < tamanho; i ++)
            {

                cout<<usada1[i];

            }

            cout<<"\n";

            cout << "  _______       \n";
            cout << " |/      |      \n";
            cout << " |      " << (errou >= 1 ? '(' : ' ') << (errou >= 1 ? '_' : ' ') << (errou >= 1 ? ')' : ' ') << "  \n";
            cout << " |      " << (errou >= 2 ? '\\' : ' ') << (errou >= 2 ? '|' : ' ') << (errou >= 2 ? '/' : ' ') << "  \n";
            cout << " |       " << (errou >= 3 ? '|' : ' ') << "     \n";
            cout << " |      " << (errou >= 4 ? '/' : ' ') << " " << (errou >= 5 ? '\\' : ' ') << "   \n";
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

                ganhou();
         
         }else
         {

               
                perdeu();
         }   



}

void dificil(){

    setlocale(LC_ALL,"portuguese_Brazil");

     system("cls");

         i = 0;
         i1 = 1;
         tamanho = 0;
         acertos = 0;
         acerto = false;
         vidas = 4;
         errou = 0;

         cout << "Qual a palavra que o jogador vai adivinhar? "<<endl;
         cin>>palavra;
         system("cls");
         cout << "A palavra que você escolheu é? (ex, cidade, animal, frute, etc...) "<<endl;
         cin>>dica;
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
             cout<<"Dica: "<<dica<<endl;

            cout<<"Vidas restante: "<<vidas<<endl;

            cout<<"Palavras usadas: ";

            for(i = 0; i < tamanho; i ++)
            {

                cout<<usada1[i];

            }

            cout<<"\n";

            cout << "  _______       \n";
            cout << " |/      |      \n";
            cout << " |      " << (errou >= 1 ? '(' : ' ') << (errou >= 1 ? '_' : ' ') << (errou >= 1 ? ')' : ' ') << "  \n";
            cout << " |      " << (errou >= 2 ? '\\' : ' ') << (errou >= 2 ? '|' : ' ') << (errou >= 2 ? '/' : ' ') << "  \n";
            cout << " |       " << (errou >= 3 ? '|' : ' ') << "     \n";
            cout << " |      " << (errou >= 3? '/' : ' ') << " " << (errou >= 3 ? '\\' : ' ') << "   \n";
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

            ganhou();
         
         }else
         {
  
            perdeu();

         }   
 
}
void ganhou (){

    setlocale(LC_ALL,"portuguese_Brazil");

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
         cout<<"[1] jogar novamnete "<<endl;
         cout<<"[2] Sair "<<endl;        
         cin>>opc;

             if (opc == 1)
            {

                    dificuldade();

            }else if( opc == 2) 
            {
                system("cls");

                cout<<"Obrigado por jogar meu jogo v3 "<<endl;
                    
            }
    
}

void perdeu (){

    setlocale(LC_ALL,"portuguese_Brazil");

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
        cout<<"[1] jogar novamente "<<endl;
        cout<<"[2] Sair "<<endl;
        cin>>opc;

         if (opc == 1)
         {

            dificuldade();

         }else if( opc == 2)
         {

           system("cls");

           cout<<"Obrigado por jogar meu jogo v3 "<<endl;
                   
         }
         
                


}