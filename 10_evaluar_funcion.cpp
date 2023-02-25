#include <iostream>

using namespace std;

int main(){
    int x,y;

    //Creacion del ciclo para evaluar la funcion
    for(x = -10; x <= 2; x++){
        //realizando las operaciones
        y = 3 * x * x + 4 * x - 1;
        cout << "Para x = " << x << ", y = " << y << endl;
    }
}