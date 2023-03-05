#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int a, b, c;

    //Ciclo para determinar la tripleta
    for(a = 1; a <= 50; a++){
        for(b = 1; b <= 50; b++){
            c = sqrt(a*a + b*b);

            //Condicion si es menor o igual a 50
            if(c*c == a*a + b*b && c <= 50){
                cout << "(" << a << ", " << b << ", " << c << ")" << endl;
            }
        }
    }
}