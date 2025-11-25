#include <iostream>
using namespace std;
#include <cmath>

void fhorizontal(int i);

void lecturaConLimites(int a, int b);

int main() {

	/*int num, i;
	cout << "Dime el número que quieras transformar: " << endl;
	cin >> num;
	for (int i = 1; i <= num; i++) {

		fhorizontal(i);

	}*/

	//int sum = 0, modulo, x;


	//for (int i = 100; i < 1000; i++) {
	//	modulo = i;
	//	for (int j = 1; j <= 3; j++) {

	//		x = modulo % 10;
	//		modulo = modulo / 10;

	//		/*cout << x << ", " << modulo << endl;*/


	//		sum += x * x * x;


	//		
	//		if (sum == i) {
	//			cout << i << " " << "cumple la condicion" << endl;
	//		}
	//	}

	//	sum = 0;
	//}

	/*int x = 0;
	lecturaConLimites(10, 20);*/

	double x = 0.0;

	cout << "Da un numero decimal: " << endl;
	cin >> x;

	x = x * 100;
	x = round(x);
	x = x / 100;

	cout << "El numero redondeado a las centesimas es " << x;


}

void lecturaConLimites(int a, int b) {

	bool c = false;

	int x = 0;
	cout << "Da un valor cualquiera que este dentro del intervalo: " << endl;
	cin >> x;

	while (!c) {


		if (a <= x && x <= b) {
			cout << "Esta dentro del intervalo" << endl;
			c = true;
		}
		else {
			if (x < a) {
				cout << "Es un numero mayor" << endl;
			}
			else if (x > b){
				cout << "Es un numero menor" << endl;
			}
			cout << "Intenalo de nuevo: " << endl;
			cin >> x;
		}

		
	}


}

void fhorizontal(int i) {

	int suma = 0;

	for (int j = 1; j <= 5; j++) {

		if (j == 5) {
			cout << suma << endl;
		}
		
		else {
			cout << i *  j << " ";
			suma += i*j ;
		}
	}

}

 