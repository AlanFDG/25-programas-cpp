#include <iostream>

using namespace std;

int main(){
    int decimal, residuo, octal = 0, mul = 1;
    
    cout << "Ingrese un número en base 10: ";
    cin >> decimal;

    //Convertir a base 8
    while (decimal != 0) {
        //Se divide asta que quede un reciduo menor a 8
        residuo = decimal % 8;
        //Se suman los reciduos
        octal += residuo * mul;
        mul = mul * 10;
        decimal = decimal / 8;
    }

    //Imprimir el resultado
    cout << "El número equivalente en base 8 es: " << octal << endl;
}