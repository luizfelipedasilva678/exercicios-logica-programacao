#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;

int main(void){
    const float pi = 3.14159 ;
    float raio,area;

    cout<<"DIGITE O VALOR DO RAIO DO CIRCULO: ";
    cin>>raio;

    cout<<"\n";

    area = pi*(pow(raio,2));
    
    cout<<fixed<<setprecision(4);
    cout<<"AREA: "<<area;
}