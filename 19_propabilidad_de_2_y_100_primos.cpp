#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

//Usando una clase de tipo booliano para saber si es primo o no
bool esprimo(int n){
    if(n < 2){
        return false;
    }

    //Ciclo para calcular numeros primos
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            return false;
        }
    }

    //Regesar el valor si se cumple
    return true;
}

int main(){
    int contador = 0;

    //Inicializando los numeros primos
    srand(time(0));

    //Comprobacion delos numeros aleatorios
    for(int i = 2; i <= 100; i++) {
        if(esprimo(i)) {
            contador++;
        }
    }
    
    //Calcular la probabilidad
    double probabilidad = (double)contador / 99.0;

    //Imprimiendo el resultado
    cout << "La probabilidad de que un número aleatorio entre 2 y 100 sea primo es: " << probabilidad << endl;
}