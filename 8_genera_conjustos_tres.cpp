#include <iostream>
#include <random>
#include <numeric>

using namespace std;

int main(){
    int a,b,c,i,mcd;

    //Generar numeros aleatorios
    random_device ran;
    mt19937 gen(ran());
    
    //El distanciamiento del random
    uniform_int_distribution<> dist(1, 80);

    //Creacion de un ciclo para generar valores
    for(i = 0; i < 3; i++){
        a = dist(gen);
        b = dist(gen);
        c = dist(gen);

        //Calcular el maximo comun divisor
        mcd = gcd(gcd(a,b),c);

        cout<<"Conjunto de # "<<i + 1<<": {"<<a<<", "<<b<<", "<<c<<"}"<<endl;
        cout<<"Maximo comun divisor: "<<mcd<<"\n"<<endl;
    }
}