#include <iostream>

using namespace std;

int main(){
    int grado;
    cout<<"Ingrese el grado para su clasificacion: ";
    cin>>grado;

    //Angulo agudo
    if(grado < 90){
        cout<<"Angulo agudo"<<endl;
    }
    //Angulo recto
    else if(grado == 90){
        cout<<"Angulo recto"<<endl;
    }
    //Angulo obtuso
    else{
        cout<<"Angulo obtuso"<<endl;
    }
}