#include <iostream>
#include <locale.h>
#include <string>

using namespace std;

// int main() {
//     setlocale(LC_ALL, ""); 
//     double real;
//     int entero;
//     short int corto;
//     char caracter;
//     // Conversiones "hacia arriba" (seguras)
//     cout << "Introduce un carácter: ";
//     cin >> caracter;
//     corto = caracter;
//     cout << "Entero corto: " << corto << endl;
//     entero = corto;
//     cout << "Entero: " << entero << endl;
//     real = entero;
//     cout << "Real: " << real << endl;

//     // Conversiones "hacia abajo" (inseguras)
//     cout << "Introduce un real muy grande: ";
//     cin >> real;
//     entero = real;
//     cout << "Entero: " << entero << endl;
//     corto = entero;
//     cout << "Entero corto: " << corto << endl;
//     caracter = corto;   
//     cout << "Carácter: " << caracter << endl;
//     return 0;
// }

typedef enum { noPresentado, suspenso, aprobado, notable, sobresaliente, matriculaDeHonor } tCalificacion;

tCalificacion obtenerCalificacion(double nota);
string obtenerString(tCalificacion calif);

int main(){
    
    tCalificacion calif1, calif2;
    double nota1, nota2;

    cout << "Cual fue tu nota para la evaluacion 1: ";
    cin >> nota1;

    cout << "Cual fue tu nota para la evaluacion 2: ";
    cin >> nota2;

    if((nota1 <= 10 && nota1 > 0) && (nota2 <= 10 && nota2 > 0)){
        calif1 = obtenerCalificacion(nota1);
        calif2 = obtenerCalificacion(nota2);

        cout << "Tu primera nota es de una calificacion: " << obtenerString(calif1);
        cout << "Tu segunda nota es de una calificacion: " << obtenerString(calif2);

    }

    
    
    
    
    
    return 0;
}

tCalificacion obtenerCalificacion(double nota){

tCalificacion calif;

    if((nota < 5 && nota > 0)){
        calif = suspenso;
    } 
    else if(nota >= 5 && nota <= 6){
        calif = aprobado;
    }
    else if(nota > 6 && nota <= 8){
        calif = notable;
    }
    else if(nota > 8 && nota <= 9){
        calif = notable;
    }
    else if(nota == 10){
        calif = sobresaliente;
    }

    return calif;
}

string obtenerString(tCalificacion calif){
    switch(calif){
        case noPresentado: {
            return "No presentado";
        }
        break;
        case suspenso: {
            return "Suspenso";
        }
        break;
        case aprobado: {
            return "Aprobado";
        }
        break;
        case notable: {
            return "Notable";
        }
        break;
        case sobresaliente: {
            return "Sobresaliente";
        }
        break;
        case matriculaDeHonor: {
            return "Matricula de honor";
        }
        break;
    }
}