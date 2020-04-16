#include<iostream>
using namespace std;

int main(void){
    int item, qtd;
    float valorAPagar;

    cout<<"DIGITE O NUMERO DO ITEM: ";
    cin>>item;

    cout<<"\n";

    cout<<"DIGITE A QUANTIDADE: ";
    cin>>qtd;

    switch (item)
    {
        case 1:
            valorAPagar = qtd*4.00;
            break;
        
        case 2:
            valorAPagar = qtd*4.502;
            break;
        
        case 3:
            valorAPagar = qtd*5.00;
            break;
        
        case 4:
            valorAPagar = qtd*2.00;
            break;

        default:
            valorAPagar = qtd*1.50;
            break;
    }

    cout<<"PRECO TOTAL: "<<valorAPagar;
}