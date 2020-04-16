#include<iostream>
using namespace std;

int main(void){
    int n,i,num,in,out;
    i=0;
    in = 0;
    out = 0;

    cout<<"DIGITE A QUANTIDADE VALORES A SEREM LIDOS: ";
    cin>>n;

    cout<<"\n";

    while(i<n){
        cout<<"DIGITE O NUMERO "<<i<<":";
        cin>>num;

        if(num >= 10 && num <= 20 ){
            in++;
        }else{
            out++;
        }

        i++;
    }

    cout<<in<<" in";
    cout<<"\n";
    cout<<out <<" out";
}