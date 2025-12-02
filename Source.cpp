#include <iostream>
#include <string>
#include <cmath>

using namespace std;

const int N = 3;
typedef int tVector[N];

typedef struct {
	tVector vector;
	int contador;
} tV;

typedef enum {suma, resta, modulo, producto, normalizacion, obtencion} tOperaciones;

void fInitArrays(tV vector);

void fOperacion(tV v1, tV v2, tV vR);

void fEx(int op, tV v1, tV v2, tV vR);

int main() {

	int dim = 0;

	tV vector1;
	tV vector2;
	tV vectorR;

	cout << "Dimension de los dos vectores (1 al 3): ";
	cin >> dim;

	vector1.contador = dim;
	vector2.contador = vector1.contador;


	fInitArrays(vector1);
	fInitArrays(vector2);

	fOperacion(vector1, vector2, vectorR);


	return 0;

}

void fInitArrays(tV vector) {
	int dim = vector.contador;
	cout << "Agrega los valores para el vector";

	for (int i = 0; i < (dim - 1); i++) {
		cin >> vector.vector[i];
	}
}

void fOperacion(tV v1, tV tv2, tV tvR) {
	cout << "1. Suma de vectores" << endl;
	cout << "2. Resta de vectores" << endl;
	cout << "3. Modulo de vectores" << endl;
	cout << "4. Producto de vectores de vectores" << endl;
	cout << "5. Normalizacion de vectores" << endl;
	cout << "6. Obtencion del valor maximo de los vectores" << endl;


	int op = 0;

	cin >> op;

}

void fEx(int op, tV v1, tV v2, tV vR) {

	int suma = 0;
	int modulo = 0;
	int n_mayor = 0;

	switch (op) {
		case 1:
			for (int i = 0; i < v1.contador; i++) {
				vR.vector[i] = v1.vector[i] + v2.vector[i];
			}
		break;
		case 2:
			for (int i = 0; i < v1.contador; i++) {
				vR.vector[i] = v1.vector[i] - v2.vector[i];
			}
		break;
		case 3:
			for (int i = 0; i < v1.contador; i++) {
				vR.vector[i] = v1.vector[i] - v2.vector[i];
				vR.vector[i] = pow(vR.vector[i], 2);
			}

			for (int i = 0; i < v1.contador; i++) {
					suma += vR.vector[i];
			}

			modulo = sqrt(suma);

			break;
		case 4:
			for (int i = 0; i < v1.contador; i++) {
				vR.vector[i] = v1.vector[i] - v2.vector[i];
				vR.vector[i] = pow(vR.vector[i], 2);
			}

				for (int i = 0; i < v1.contador; i++) {
					vR.vector[i] = v1.vector[i] * v2.vector[i];
					suma += vR.vector[i];
				}

				modulo = sqrt(suma);

			break;
		case 5:
			for (int i = 0; i < v1.contador; i++) {
				vR.vector[i] = pow(v1.vector[i], 2);
			}

				for (int i = 0; i < v1.contador; i++) {
					suma += vR.vector[i];
				}

				modulo = sqrt(suma);

				for (int i = 0; i < v1.contador; i++) {
					v1.vector[i] = v1.vector[i] / modulo;
				}
				break;
			case 6:
				for (int i = 0; i < v1.contador; i++) {
					if (v1.vector[i] > n_mayor) {
						n_mayor = v1.vector[i];
					}
				}
			break;

	}

}