#include<iostream>
#include<math.h>
using namespace std;

int main(void){
    float coeficientes[3],delta,x1,x2;
    int i;

    for(i=0;i<3;i++){
        cout<<"Digite os coeficientes: ";
        cin>>coeficientes[i];
    }

    cout<<"\n";

    delta = (pow(coeficientes[1],2)) - (4*coeficientes[0]*coeficientes[2]);
    
    if(coeficientes[0] != 0 && delta >= 0){
        x1 = (-coeficientes[1] + (sqrt(delta)) ) / (2*coeficientes[0]);
        x2 = (-coeficientes[1] - (sqrt(delta)) ) / (2*coeficientes[0]);
        
        cout<<"X1: "<<x1;
        cout<<"\n";
        cout<<"X2: "<<x2;
    }else{
        cout<<"Impossivel calcular";
    }

}