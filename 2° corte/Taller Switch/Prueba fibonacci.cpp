/*2. Realice un programa que genere la siguiente serie. El tope de la serie lo debe pone r el
usuario.
0,1,1,2,3,5,8,13,21�.n
*/

/*An�lisis
La serie de Fibonacci se puede calcular  sumando el t�rmino actual por el anterior teniendo como base el 0,1 (los dos primeros de la serie)
*/
#include <iostream>
#include <conio.h>
using namespace std;

void fibonacci();
void fibonacci() {
	//Definici�n de variables usadas (definidas como unsigned para que sean >0 y longlong para que pueda mostrar mayor cantidad de n�meros de la serie) 
	long long unsigned aux = 1, fib = 0, serie;
	//Ciclo Do-While para validar hasta que valor quiere que vaya la serie
	do {
		cout << "Ingrese un numero para la sucesion de fibonacci: ";
		cin >> serie;
	} while(serie<1 || serie>500);
	//Ciclo For en el cual se calcula la serie de Fibonacci 
	for(int i = 1; i <= serie; i++) {
		//Salida del valor de fibonacci en este momento
		cout << "[" << fib << "] ";
		//Sumatoria de una variable adicional para calcular el siguiente valor de fibonacci 
		aux += fib;
		//Resta en la variable de fibonacci sobre el valor que ten�a antes, debido a que auxiliar va a estar +fib de lo que deber�a
		//Ej:aux=1, fib=0, aux+fib=0+1, pero el primer valor de la serie es cero, por lo cual se le resta el valor de fib 
		fib = aux - fib;
	}

}

int main() {
	//llamado de la funci�n fibonacci
	fibonacci();
	getch();
	return 0;

}

