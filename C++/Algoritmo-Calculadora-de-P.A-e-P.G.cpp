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

    cout<<"[1] Progressão Aritimética\n";
    cout<<"[2] Progressão Geométrica\n";
    cout<<"[3] Sair\n";
    cout<<"Escolha uma das opções\n";
    cin>>opcao;
    
    switch(opcao){
        case 1:
        cout<<"Progressão Aritimética "<<endl;

        cout<<"Digite o Primeiro termo\n";
        cin>>a1;
        cout<<"Digite o valor da razão\n";
        do{ cin>>r;

          if(r==0){
            
            cout<<"Quando a razão for igual a zero e\n os termos da PA são iguais\nPor favor digite outro valor\n ";
          }

        }while(r==0);

        cout<<"Qual o numero do termo que você quer achar? "<<endl;
        do{ cin>>n;
         
         if(n<=0){

            cout<<"Se o número de termos (n) em uma progressão Arietimética (PA)\nfor zero, isso significa que não há nenhum termo na progressão.\nDigite outro valor!! "<<endl;

         }
        
        }while(n<=0);
        
        an = (a1 + (n-1) * r);
        Sn = ((a1 + an) * n)/2; 
        am = (a1 + an)/2;

        cout<<" O enesimo termo(an) é: "<<an<<endl;
        cout<<" A soma da Progressão Aritimética(P.A) é: "<<Sn<<endl; 
        cout<<" O termo médio da P.A é: "<<am<<endl;

        break;

        case 2:
        cout<<"Digite o primeiro termo "<<endl;
        cin>>a1;
        cout<<"Digite o valor da razão "<<endl;
        do{cin>>q;

         if(q==0){

            cout<<"Se a razão de uma P.G for 0 todos os termos seráo igual ao primeiro\nPor favor digite outro valor "<<endl;

         }


        }while(q==0);

        cout<<"Qual o numero do termo que você quer econtrar? "<<endl;
        do{ cin>>n;

        if(n<=0){
            cout<<"Se o número de termos (n) em uma progressão Geométrica (PG)\nfor zero, isso significa que não há nenhum termo na progressão.\nDigite outro valor!! "<<endl;
        }


        }while(n<=0);

        an=(a1 * pow(q,n-1));
        Sn=(a1 * pow(q,n-1))/(q-1);
        am=sqrt(a1*an);

        cout<<" O enesimo termo(an) é: "<<an<<endl;
        cout<<" A soma da Progressão Geométrica P.G) é: "<<Sn<<endl; 
        cout<<" O termo médio da P.G é: "<<am<<endl;

        break;
        
        
    }

    while(opcao != 3){

       break;
    }

    return 0;
}