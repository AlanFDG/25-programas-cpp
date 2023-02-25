#include <iostream>
#include <cmath>

using namespace std;

//Este programa se resuelve la actividad 21 y 22
int main(){
    //float a,b,c,fgd,p,q;
    //Valores para los trinomios
    float a=3,b=4,c=-48,fgd,p,q;

    cout<<"Ingrese los coeficientes del trinomio (en orden de x^2, x, constante): ";
    cin>>a>>b>>c;

    //Utilizand la formula general
    fgd = b * b -4 * a * c;

    //Realizando la formula general
    p = (-b + sqrt(fgd)) / (2 * a);
    q = (-b - sqrt(fgd)) / (2 * a);

    cout << "El trinomio " << a << "x^2 + " << b << "x + " << c << " se factoriza como: " << endl;
    cout << a << "(x + " << p << ")(x + " << q << ")" << endl;
}