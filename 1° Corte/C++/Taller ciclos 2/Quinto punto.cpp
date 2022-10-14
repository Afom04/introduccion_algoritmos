#include <iostream>
#include <conio.h>
#include <math.h>

/*5) realice un programa que muestre un rombo de numero de altura n, para el ejemplo la altura
es de 5, pero esta puede ser de cualquier tamaño siempre y cuando se pueda formar el rombo
adecuadamente.*/

using namespace std;
int main() {
	{
		/*Definicion de valriables a usar*/
		int cont = 0, n;
		bool validar=false;

		/*Do-While para válidar el número de entrada*/
		do {
			cout << "Ingresa un numero : ";
			cin >> n;
			if(n>1 && n<11) {
				validar=true;
			} else {
				cout<<"Numero invalido" <<endl;
				validar=false;
			}
		} while (validar==false);

		/*Contador de la parte superior del rombo*/
		for (int fila1 = 1; fila1 <= n; fila1++) {
			/*Contador para generar los espacios en blanco antes de los números*/
			for (int o = 1; o <= n - fila1; o++) {
				cout << " ";
			}
			/*Contador que aumenta los números hasta la parte central*/
			for (int col = 1; col <= (cont + 1); col++) {

				cout << col;
			}
			/*Contador que disminuye para la parte izquierda del rombo*/
			for (int col2 = fila1 - 1; col2 > 0; col2--) {

				cout << col2;
			}
			cont++;
			cout << endl;
		}
		/*Contador para la parte inferior del rombo*/
		for (int fila2 = 1; fila2 <= n - 1; fila2++) {
			/*Contador para generar los espacios en blanco antes de los números*/
			for (int p = 1; p <= fila2; p++) {
				cout << " ";
			}
			/*Contador que aumenta los números hasta la parte central*/
			for (int col3 = 1; col3 <= (n - fila2); col3++) {

				cout << col3;

			}
			/*Contador que disminuye para la parte izquierda del rombo*/
			for (int col2 = (n - fila2) - 1; col2 >0; col2--) {
				cout << col2;
			}
			cout << endl;
		}
	}
	return 0;
}
