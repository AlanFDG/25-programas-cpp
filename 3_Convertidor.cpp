#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    int opcion;
    float yarda = 0.0277778, res, p, n;
    bool repetir = true;

    do{
        //system("cls");

        // Menu de opciones
        cout<<"Menu de Opciones"<<endl;
        cout<<"0- Salir"<<endl;
        cout<<"1- Pulgadas a Yardas"<<endl;
        cout<<"2- Pies a Pulgadas"<<endl;

        //Ingresar valores
        cout<<"\nEscoja una opcion: "<<endl;
        cin>>opcion;

        switch (opcion){
            case 0:
                repetir = false;
            break;

            case 1:
                cout<<"Ingrese el valor a convertir: ";
                cin>>n;
                p = n;
                res = p * yarda;
                cout<<"La convercion a yarda es: "<<res<<"\n"<<endl;
            break;

            case 2:
                cout<<"Ingrese el valor a convertir: ";
                cin>>n;
                p = n;
                res = p * 12;
                cout<<"La convercion a pulgadas es: "<<res<<"\n"<<endl;
            break;
        }
    }while(repetir);
}