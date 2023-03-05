#include <iostream>
#include <cmath>

using namespace std;

//Problema 27
int main(){
    //float a,b,c,C;
    float a = 95, b = 122, c, C = 47.5;

    /*Ingresando los valores en las variables
    cout<<"Ingresar la longitud del primer lado: ";
    cin>>a;
    cout<<"Ingresar la longitud del segundo lado: ";
    cin>>b;
    cout << "Ingrese el valor del ángulo opuesto (en grados): ";
    cin >> C;*/

    //Realizando el calculo de la longitud
    c = sqrt(a*a + b*b - 2*a*b*cos(C*M_PI/180));

    cout<<"La longitud del tercer lado es: "<<c<<endl;
}