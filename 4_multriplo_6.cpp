#include <iostream>

using namespace std;

int main(){
    int valor;

    cout<<"Ingrese un valor: ";
    cin>>valor;

    //Compara si es un multriplo de 6
    if(valor % 6 == 0){
        cout<<"Es un multriplo de 6"<<endl;
    }
    else{
        cout<<"No es un multriplo de 6"<<endl;
    }
}