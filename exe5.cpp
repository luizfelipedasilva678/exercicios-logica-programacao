#include<iostream>
using namespace std;

int main(void){
    int senhaCorreta,senhaDigitada;
    senhaCorreta = 2002;
    
    while (senhaDigitada != senhaCorreta)
    {
        cout<<"Digite a senha: ";
        cin>>senhaDigitada;

        if(senhaDigitada == senhaCorreta){
            cout<<"Acesso Permitido"<<"\n";
        }else{
            cout<<"Acesso Negado"<<"\n";
        }
    }
    
}