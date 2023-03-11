#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n = 9, m = 10, i;
    double media_algebra = 0, media_ingles = 0, desviacion_algebra = 0;
    double desviacion_ingles = 0, correlacion = 0;
    
    //Calificaciones de Álgebra
    int algebra[] = {750, 770, 740, 700, 680, 710, 750, 720, 680};
    
    //Calificaciones de Inglés
    int ingles[] = {620, 680, 600, 710, 700, 690, 700, 708, 675, 710};
    
    //Calculo de la media de Álgebra
    for (i = 0; i < n; i++) {
        media_algebra += algebra[i];
    }
    media_algebra /= n;
    
    //Calculo de la media de Inglés
    for (i = 0; i < m; i++) {
        media_ingles += ingles[i];
    }
    media_ingles /= m;
    
    //Calculo de la desviación normal de Álgebra
    for (i = 0; i < n; i++) {
        desviacion_algebra += pow(algebra[i] - media_algebra, 2);
    }
    desviacion_algebra /= n;
    desviacion_algebra = sqrt(desviacion_algebra);
    
    //Calculo de la desviación normal de Inglé
    for (i = 0; i < m; i++) {
        desviacion_ingles += pow(ingles[i] - media_ingles, 2);
    }
    desviacion_ingles /= m;
    desviacion_ingles = sqrt(desviacion_ingles);
    
    //Calculo del coeficiente de correlación
    for (int i = 0; i < n; i++) {
        correlacion += (algebra[i] - media_algebra) * (ingles[i] - media_ingles);
    }
    correlacion /= (n * desviacion_algebra * desviacion_ingles);
    
    //Impresión de los resultados
    cout << "Media de Álgebra: " << media_algebra << endl;
    cout << "Media de Inglés: " << media_ingles << endl;
    cout << "Desviación normal de Álgebra: " << desviacion_algebra << endl;
    cout << "Desviación normal de Inglés: " << desviacion_ingles << endl;
    cout << "Coeficiente de correlación: " << correlacion << endl;
    
}