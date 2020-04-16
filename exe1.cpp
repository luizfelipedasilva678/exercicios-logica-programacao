#include<iostream>
using namespace std;

int main(void){
    float valoresPeca1[3],valoresPeca2[3],valorAPagar;
    int i,j;

    for(i=0;i<3;i++){
        cout<<"Digite os valores para a peca 1: ";
        cin>>valoresPeca1[i]; 
    }

    cout<<"\n";

    for(j=0;j<3;j++){
        cout<<"Digite os valores para a peca 2: ";
        cin>>valoresPeca2[j]; 
    }

    valorAPagar = (valoresPeca1[1]*valoresPeca1[2]) + (valoresPeca2[1]*valoresPeca2[2]);

    cout<<"VALOR A PAGAR: "<<valorAPagar;
       
}