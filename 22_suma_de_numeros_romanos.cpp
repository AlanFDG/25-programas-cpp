#include <iostream>
#include <map>
#include <string>

using namespace std;

//Subprograma para el tipo de letra con su valor
int ValorRomano(char c){
    switch (c) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return 0;
    }
}

//Subprograma para la convercion de letra a numero
int RomanoDecimal(string s){
    int decimal = 0, i, curr, siguiente;

    //Ciclo para recorrer el arreglo
    for (i = 0; i < s.length(); i++) {
        curr = ValorRomano(s[i]);
        siguiente = (i + 1 < s.length()) ? ValorRomano(s[i + 1]) : 0;
        if (siguiente > curr) {
            decimal += siguiente - curr;
            i++;
        } else {
            decimal += curr;
        }
    }
    //return decimal;
}

//SubPrograma que convierte de decimal a romano
string DecimalRomano(int n){
    string roman = "";
    int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    string simbolo[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    
    //Funcion para recorrer los arrglos y poner sus valores
    for (int i = 0; i < 13; i++) {
        while (n >= values[i]) {
            roman = roman + simbolo[i];
            n -= values[i];
        }
    }

    return roman;
}

//Programa principal
int main(){
    int decimal1, decimal2, suma;
    string rom1, rom2, romsuma;

    cout<<"Ingresa el primer numero romano: ";
    cin>>rom1;
    cout<<"Ingresa el segundo numero romano: ";
    cin>>rom2;

    decimal1 = RomanoDecimal(rom1);
    decimal2 = RomanoDecimal(rom2);

    //Realizar la suma
    suma = decimal1 + decimal2;

    //Convercion de la los decimal
    romsuma = DecimalRomano(suma);

    //Imprimir los valores
    cout<< rom1 <<" + "<< rom2 << " = " << romsuma << endl;
}