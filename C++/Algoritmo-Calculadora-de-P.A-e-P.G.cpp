#include<iostream>
#include<locale.h>
#include<math.h>

using namespace std;

int main(){
    
    setlocale(LC_ALL,"portuguese_Brazil");
    float a1,r,q,an,Sn,am;
    int opcao,n;
   
   


    cout<<"CALCULADORA DE P.A E P.G\b"<<endl;
    cout<<"Criador: Isaque Rodrigues Alves "<<endl;

    cout<<"[1] Progress�o Aritim�tica\n";
    cout<<"[2] Progress�o Geom�trica\n";
    cout<<"[3] Sair\n";
    cout<<"Escolha uma das op��es\n";
    cin>>opcao;
    
    switch(opcao){
        case 1:
        cout<<"Progress�o Aritim�tica "<<endl;

        cout<<"Digite o Primeiro termo\n";
        cin>>a1;
        cout<<"Digite o valor da raz�o\n";
        do{ cin>>r;

          if(r==0){
            
            cout<<"Quando a raz�o for igual a zero e\n os termos da PA s�o iguais\nPor favor digite outro valor\n ";
          }

        }while(r==0);

        cout<<"Qual o numero do termo que voc� quer achar? "<<endl;
        do{ cin>>n;
         
         if(n<=0){

            cout<<"Se o n�mero de termos (n) em uma progress�o Arietim�tica (PA)\nfor zero, isso significa que n�o h� nenhum termo na progress�o.\nDigite outro valor!! "<<endl;

         }
        
        }while(n<=0);
        
        an = (a1 + (n-1) * r);
        Sn = ((a1 + an) * n)/2; 
        am = (a1 + an)/2;

        cout<<" O enesimo termo(an) �: "<<an<<endl;
        cout<<" A soma da Progress�o Aritim�tica(P.A) �: "<<Sn<<endl; 
        cout<<" O termo m�dio da P.A �: "<<am<<endl;

        break;

        case 2:
        cout<<"Digite o primeiro termo "<<endl;
        cin>>a1;
        cout<<"Digite o valor da raz�o "<<endl;
        do{cin>>q;

         if(q==0){

            cout<<"Se a raz�o de uma P.G for 0 todos os termos ser�o igual ao primeiro\nPor favor digite outro valor "<<endl;

         }


        }while(q==0);

        cout<<"Qual o numero do termo que voc� quer econtrar? "<<endl;
        do{ cin>>n;

        if(n<=0){
            cout<<"Se o n�mero de termos (n) em uma progress�o Geom�trica (PG)\nfor zero, isso significa que n�o h� nenhum termo na progress�o.\nDigite outro valor!! "<<endl;
        }


        }while(n<=0);

        an=(a1 * pow(q,n-1));
        Sn=(a1 * pow(q,n-1))/(q-1);
        am=sqrt(a1*an);

        cout<<" O enesimo termo(an) �: "<<an<<endl;
        cout<<" A soma da Progress�o Geom�trica P.G) �: "<<Sn<<endl; 
        cout<<" O termo m�dio da P.G �: "<<am<<endl;

        break;
        
        
    }

    while(opcao != 3){

       break;
    }

    return 0;
}