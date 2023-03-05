#include <iostream>
#include <cmath>

using namespace std;

int main(){
    float pi = 3.1416, seno, coseno, radianes, t_seno, t_coseno;
    int grados ,n;

    //Calcular el seno y coseno
    for(grados = 0; grados <= 90; grados+=5){
        radianes = grados * (pi/180);
        seno = radianes;
        coseno = 1;
        t_seno = radianes;
        t_coseno = 1;
        n = 1;

        //calculoar los primeros 10
        while(n<=20){
            t_seno = (-1) * t_seno * radianes * radianes / ((2 * n) * (2 * n + 1));
            seno += t_seno;
            t_coseno = (-1) * t_coseno * radianes * radianes / ((2 * n - 1) * (2 * n));
            coseno += t_coseno;
            n++;
        }

        //Imprimir los valores
        cout << grados << " grados = " << radianes << " radianes" << endl;
        cout << "Seno: " << seno << endl;
        cout << "Coseno: " << coseno << endl << endl;
    }
}