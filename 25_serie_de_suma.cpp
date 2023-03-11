#include <iostream>

using namespace std;

int main(){
    float n, resl;

    for(n = 1; n <= 20; n++){
        resl = n * (n + 1) /2;
        cout<<"La serie de "<<n<<" es: "<<resl<<endl;
    }
}