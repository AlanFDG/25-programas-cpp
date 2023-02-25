#include <iostream>

using namespace std;

int main(){
    int b,h,res;

    //Introducir los valores para evaluar
    cout<<"Ingrese la base: ";
    cin>>b;
    cout<<"Ingrese la altura: ";
    cin>>h;
    cout<<endl;

    //Calcular el area del rectangulo
    res = b*h;

    //Imprimir el resultado
    cout<<"El area del rectangulo es: "<<res<<endl;
}