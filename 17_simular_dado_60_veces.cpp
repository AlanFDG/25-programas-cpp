#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

//simulacilacion de arrojar un dado 60 veces
int main(){
    //La inicializacion de los numeros aleatorios
    srand(time(0));

    //Arreglo para las veces arrogadas
    int i, random, resultado[6] = {0,0,0,0,0,0};

    //Ciclo para la generacion de numeros y el conteo de los tiros
    for(i = 0; i < 60; i++){
        //Generar numero aleatorio
        random = rand() % 6 + 1;

        //Aumentar el contador
        resultado[random -1]++;
    }

    //Imprimir los resultados de los tiros
    for(i = 0; i < 6; i++){
        cout<<"Numero "<<i + 1<<": "<<resultado[i]<<" veces"<<endl;
    }
}