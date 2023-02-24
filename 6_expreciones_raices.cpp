#include <iostream>
#include <cmath>

using namespace std;

int main(){
    float a = 5, b = 12, res1, res2, total;
    float ex1 = 2, ex2 = 3, exp1 ,exp2, exp3;

    //calculando los exponentes
    exp1 = pow(a,ex1);
    exp2 = pow(b,ex1);
    exp3 =  pow(b,ex2);

    //Realizando las operaciones devidas de la ecuacion
    res1 = (2*a*b + 3*exp2 + b);
    res2 = (exp1 * exp3 - 368);
    //Resultado final
    total = res1 / res2;

    cout<<"Resultado en fraccion: "<<res1<<"/"<<res2<<endl;
    cout<<"El resaultado de la exprecion en decimal es: "<<total<<endl;
}