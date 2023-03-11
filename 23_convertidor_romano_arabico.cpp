#include <iostream>
#include <string>

using namespace std;
//Problemas a resolver el 6 y 7

//Subprograma para la convercion de numero romano a decimal
int RomanoDecimal(char s){
    switch(s){
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

//Subprograma para la convercion de decimla a romano
string ArabeRomano(string a){
    if(a == "واحد"){
        return "I";
    }
    else if(a == "خمسة"){
        return "V";
    }
    else if(a == "عشرة"){
        return "X";
    }
    else if(a == "خمسون"){
        return "V";
    }
    else{
        cout<<"No exite ningun resultado";
    }
}

//Subprograma para la convercion de romano a arabico
string RomanoArabico(string s){
    if(s == "I"){
        return "واحد";
    }
    else if(s == "V"){
        return "خمسة";
    }
    else if(s == "X"){
        return "عشرة";
    }
    else if(s == "L"){
        return "خمسون";
    }
    else{
        return "El numero romano que ingreso no se encuentra asociado a ninguna opcion";
    }
}

int main(){
    int opcion;
    char valorC, resultado;
    string valorS, resul;

    cout<<"1- Romano a Decimal \n2- Romano a Arabico \n3- Arabico s Romano\n\n";
    cout<<"Escoja una obcion: ";
    cin>>opcion;

    //Elegir las obciones
    switch(opcion){
        case 1:
            cout<<"Ingrese el nuemro romano a convertir: ";
            cin>>valorC;
            resultado = RomanoDecimal(valorC);
            cout<<valorC<<" romano a numero decimal es: "<<resultado<<endl;
        break;

        case 2:
            cout<<"Ingrese el nuemro decimal a convertir: ";
            cin>>valorS;
            resul = ArabeRomano(valorS);
            cout<<valorS<<" de decimal a numero romano es: "<<resul<<endl;
        break;

        case 3:
            cout<<"Ingrese el nuemro romano a convertir: ";
            cin>>valorS;
            resul = RomanoArabico(valorS);
            cout<<"La convercion de "<<valorS<<" a numero arabico es: "<<resul<<endl;
        break;
    }
}