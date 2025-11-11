#include <iostream>
#include <string>
using namespace std;

const int N = 100;
typedef double tNotas[N];

string aprobadooNo(double nota);

double media(tNotas nota, int y);

int main(){
    tNotas nota;
    double n = 0.0;
    int contador = 0;


    cout << "Ingresa la nota de los 10 estudiantes: " << endl;

    for (int i = 0; i < 100; i++) {
        nota[i] = 0;
    }

    while (contador < N && n >= 0) {
        cout << (contador + 1) << ". ";
        cin >> n;;
        if (n >= 0) {
            nota[contador] = n;
            contador += 1;
        }
    }

    for (int i = 0; i < contador; i++) {
        cout << "Nota " << (i + 1) << ": " <<  nota[i] <<  ", " << aprobadooNo(nota[i]) << endl;
    }

    cout << "La nota media del curso es: " << media(nota, contador) << endl;




}

string aprobadooNo(double nota) {
    string resultado = "";
    if (nota >= 5) {
        resultado = "aprobado.";
    }
    else {
        resultado = "suspenso.";
    }

    return resultado;
}

double media(tNotas nota, int y) {
    double media = 0.0;
    for (int i = 0; i < y; i++) {
        media += nota[i];
        cout << endl << media << endl;
    }
    media = media / y;
    
    return media;
}
