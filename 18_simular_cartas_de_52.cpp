#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    int i, nom_cartas_extraidas = 0, carta, valor, palo;
    bool carta_repetida = false;

    //Arreglos
    int cartas[52], mano[5];
    string tipo[4] = {"Picas", "Corazones", "Tréboles", "Diamantes"};
    string valores[13] = {"As", "Dos", "Tres", "Cuatro", "Cinco", "Seis", "Siete", "Ocho", "Nueve", "Diez", "Jota", "Reina", "Rey"};

    //Iniciando los numeros aleatorios
    srand(time(0));

    //Ingresar los valores del arreglo de las cartas
    for(i = 0; i < 52; i++){
        cartas[i] = i;
    }

    //Ingresar los valores al arreglo de la cantida de las manos
    for(i = 0; i < 5; i++){
        mano[i] = -1;
    }

    //Extraer las cinco cartas de cada jugar
    while(nom_cartas_extraidas < 5){
        //Generar numero aleatorio
        carta = rand() % 52;

        //Ciclo si hay una carta repetida
        for(i = 0; i < nom_cartas_extraidas; i++){
            if(carta == mano[i]){
                carta_repetida = true;
                break;
            }
        }

        //En caso de no haber cartas repetidas
        if(!carta_repetida){
            mano[nom_cartas_extraidas] = carta;
            nom_cartas_extraidas++;
        }
    }

    //Imprimir la mano del jugador
    for(i = 0; i < 5; i++){
        valor = mano[i] % 13;
        palo = mano[i] / 13;
        
        cout << valores[valor] << " de " << tipo[palo] << endl;
    }
}