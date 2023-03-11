#include <iostream>

using namespace std;

//Estructuracion para las funciones
struct Complex {
    float real, imaginario;
};

//Funcion para multriplicar
Complex producto(Complex a, Complex b){
    Complex result;

    //Realizando la formula para la multriplicacion
    result.real = (a.real * b.real) - (a.imaginario * b.imaginario);
    result.imaginario = (a.real * b.imaginario) + (a.imaginario * b.real);
    return result;
}

//Funcion para la divicion
Complex divide(Complex a, Complex b) {
    Complex result;

    //Resultado de la denominacion de la divicion
    float denominador = (b.real * b.real) + (b.imaginario * b.imaginario);

    //Realizado la formula de la divicion
    result.real = ((a.real * b.real) + (a.imaginario * b.imaginario)) / denominador;
    result.imaginario = ((a.imaginario * b.real) - (a.real * b.imaginario)) / denominador;
    return result;
}

void Imprimir(Complex i){
    cout<<i.real<<" + "<<i.imaginario<<"i"<<endl;
}

int main(){
    Complex a = {2, 8}, b = {6, -7};

    //Imprimir los numeros complejo
    Imprimir(a);
    Imprimir(b);

    //Calcular las operaciones
    Complex div = divide(a, b);
    Complex mul = producto(a, b);

    //Imprimir los resultados
    cout<<"\nLa multriplicacion de:\na * b"<<endl;
    Imprimir(div);
    cout<<"\nLa divicion de:\na / b"<<endl;
    Imprimir(mul);
}