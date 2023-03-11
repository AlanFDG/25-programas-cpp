#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    int i, random;

    //Iniciando la generando numero aleatorios
    srand(time(NULL));

    //Realizando los tiros
    for(i = 1; i <= 100; i++){
        //Generar numero aleatorio
        random = rand() % 2;

        //Comparando el resultado
        if(random == 0){
            cout<<"Cara"<<endl;
        }
        else{
            cout<<"Cruz"<<endl;
        }
    }
}