#include <iostream>

using namespace std;

int main(){
    int valor;

    //Ingresar valor
    cout<<"Ingrese un valor: ";
    cin>>valor;

    //Realizar la comparacion
    if(valor % 2 == 0){
        cout<<"Es par"<<endl;
    }
    else{
        cout<<"Es impar"<<endl;
    }
}