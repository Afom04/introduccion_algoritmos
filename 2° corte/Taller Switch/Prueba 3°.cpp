#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
/*3. Realice un programa que resuelva la siguiente serie.
{[(2!)/(3�n)]�(n+1)} - {[(3!)/(5�n)]�(n+1)} + {[(4!)/(7�n)]�(n+1)}�nveces
Donde ! significa el factorial de un n�mero. � significa elevado.
cada una de las expresiones a resolver esta separada por { }.
*/

//Definicion de funciones a usar en el programa
int factorial (int x);
int potencia (int base, int exponente);
void punto3();
void
punto3 () {
	//Definici�n de variables a usar
	int n, j = 2, k = 3, p, m = 1, solu, i = 1;
	//N=N�mero a tomar; J=valor del primer factorial; K=Valor segundo factorial
	bool valido;
	float ecua1, ecua2, ecua3;
	double long suma, resta, resultado;
	//Se valida que el numero ingresado por el usuario sea un entero positivo
	do {
		cout <<"Por favor ingrese el numero de veces que quiere que se solucione la ecuacion( � significa portencia y ! factorial ):"<<endl;
		cout<<" { {[(2!)/(3�n)]�(n+1)} - {[(3!)/(5�n)]�(n+1)} + {[(4!)/(7�n)]�(n+1)} }  :"<<endl;
		cin >> p;
		cout << "Por favor ingrese el numero que tomara {N}: "<<endl;
		cin >> n;
		//If que v�lida que los valores ingresados no sean menores a 1
		if (n > 1 && p > 1 ) {
			valido = true;
		} else {
			cout<<"Valores invalidos o incoherentes" <<endl;
			valido = false;
		}
	} while (false);
	
	//Se realiza en una variable donde se llaman funciones para calcular la divisi�n(Compuesta por el factorial como numerador y denominador la potencia)
	//Igualmente para calcular la potencia externa que tiene la divisi�n 
	//Todo esto dentro de un ciclo While para que aumente porque es una secuencia 
	//Y dentro de este unos ciclos For para hacer la repetici�n de las ecuaciones de la serie, para luego operarlos entre si 
	do {
		//Llamado de funciones para operar luego(el numerador y denominador)
		ecua1 = factorial (j) / potencia (k, n);//Numerador y denominador obtenido por los c�lculos
		ecua2 = potencia (ecua1, n + 1); //Potencia de la divisi�n/fracci�n
		//Ciclo For para acumular los valores iguales 
		for (int ecua2 = 0; i < p; i++) {
			j++;
			k = k + 2;
			suma = suma + i;
		}
		for (int ecua2 = 1; k < p; k++) {
			j++;
			k = k + 2;
			solu = k * (-1);
			resta = resta + solu;
		}
		m++;
	} while (m <= p);
	//Variable que guarda el resultado de toda la operaci�n de la serie (Da NAN debido a que el software y la memoria no da suficiente espacio para guardar
	//el valor por lo que es un decimal muy largo)
	resultado = suma + resta;
	cout << resultado << endl;
}

//Esta funci�n hace que el valor X tome el J=2(que aumenta en el ciclo while de la funci�n anterior) para calcular el valor siempre y cuando no sea entero positivo
//mayor a 1 y regresa el dato de la operaci�n del valo que tomo X
int
factorial (int x) {
	if (x < 0)
		return 0;
	else if (x > 1)
		return x * factorial (x - 1);
	return 1;
}

//Esta funci�n se maneja con 2 parametros de entrada enteros(base y exponente)
//La base se multiplica al cuadrado, siempre y cuando su exponente que es N, sea mayor a 1 de lo contrario el resultado regresa a 0, volviendo a operar
//Regresa un dato "resultado" el cual corresponde a la potencia que se ten�a que realizar
int
potencia (int base, int exponente) {
	//Definici�n de variables usadas en la funci�n
	int resultado = 0;
	int x = 1;
	//Ciclo while para que se calcule el  valor de la potencia hasta que llegue al resultado
	while (x < exponente) {
		//If para validar si la repetici�n de la base sea menor al exponente
		if (resultado < base) {
			resultado = base * base;//Multiplicaci�n del n�mero por si mismo hasta que sea -1 a el exponente
		} else {
			resultado = resultado * base;//Aqu� se multiplica el acumulado que se encontraba en exponente-1 para hallar la ultima repetici�n 
		}
		x++;
	}
	return resultado;
}

int main() {
	punto3();
	getch();
	return 0;
}
