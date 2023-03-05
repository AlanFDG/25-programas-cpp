#include <iostream>
#include <cmath>

using namespace std;

int main(){
    float N, L, pi = 3.1416, ctg, area;

    cout<<"Ingrese el numero de lados que tiene: ";
    cin>>N;
    cout<<"Ingrese la longitud de cada lado: ";
    cin>>L;

    //Calcular el contangente
    ctg = 1 / tan(pi / N);

    //Calcular el area
    area = N*L*L*ctg/4;

    //Imptimir el area
    cout<<"\nEl area del poligono es: "<<area<<endl;
}