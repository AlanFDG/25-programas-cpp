#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double pi = 3.1416;
    int grados = 0;

    //Convertir multriplos de 10 del 0 al 360
    while(grados <= 360){
        double radianes = grados * (pi / 180);
        cout<<grados<<" grados = "<<radianes<<" radianes"<<endl;
        grados += 10;
    }
}