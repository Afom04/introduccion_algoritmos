/*Una empresa con N empleados desea realizar en sistema que entregue el
nombre del empleado ganador de un mill�n de pesos. Para ello tendr� en cuenta
lo siguiente: la cantidad de empleados de la empresa esta representado por un
numero entero, se debe ir separando cada digito del numero y el numero de la
mitad ser� el que represente al empleado ganador, en caso de no existir numero
de la mitad, porque la cantidad de empleados tiene un numero par de d�gitos se
debe escoger el primer n�mero primo despu�s de la mitad de la cantidad de
d�gitos que contiene el numero que representa la cantidad de empleados.

Adicionalmente se debe regalar bonos de $100.000 a los empleados que se
encuentren en las posiciones m�ltiplos de un numero z ingresado por el usuario,
pero que no puede ser divisor de un numero W ingresado por el usuario.

Tambi�n se dar� un bono de $50.000, a los empleados que nacieron en un a�o
bisiesto y que cumplen en un mes que tenga menos de 31 d�as. Se debe mostrar
el nombre de los ganadores con su respectivo premio.
*/

#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;
int main() {
	//Variables usadas para definir el ganador de mill�n de pesos
	bool primo=true;
	bool valido=false;
	int empleados,empleados1,empleados2,digitos=1,digitos2=1,ultimodigito,digito1,digito2,digito3,digito4,digito5,resto;
	//Ingreso de empleados y validaci�n de estos mismos
	do {
		cout<<"Ingrese la cantidad de empleados ";
		cin>>empleados;
		if(empleados >= 100 && empleados <=10000) {
			valido = true;
		} else {
			cout<<"Numero no valido"<<endl;
			valido = false;
		}
	} while(valido == false);

//Igualacion en variables auxiliares para operar y la variable original no sea afectada
	empleados1=empleados;
	empleados2=empleados;

//contar la cantidad de cifras-digitos que componen empleados
	while(empleados1>=10) {
		empleados1=empleados1/10;
		digitos ++;
	}

	//Separacion y guardado de los digitos-cifras que tiene empleados
	while(empleados2>=1) {
		ultimodigito= empleados2%10;
		empleados2=empleados2/10;
		if(digitos2==1) {
			digito5=ultimodigito;
		}
		if(digitos2==2) {
			digito4=ultimodigito;
		}
		if(digitos2==3) {
			digito3=ultimodigito;
		}
		if(digitos2==4) {
			digito2=ultimodigito;
		}
		if(digitos2==5) {
			digito1=ultimodigito;
		}
		digitos2++;
	}

	//Numeros de digitos pares
	if(digitos%2==0) {
		if(digitos==4) {
			if(digito4>0) {
				for (int i=2; i<digito4; i++) {
					if(digito4 % i==0)primo = false;
				}
				if(primo==true) {
					cout<<"El ganador del premio de un mill�n de peses es el empleado con el numero #" <<digito4 <<endl<<endl<<endl;
				} else {
					primo=true;
					for (int i=2; i<digito5; i++) {
						if(digito5 % i==0)primo = false;
					}
					if(primo==true) {
						cout<<"El ganador del premio de un mill�n de peses es el empleado con el numero #" <<digito5 <<endl<<endl<<endl;
					} else {
						cout<<"No hay ganador del millon de pesos" <<endl<<endl<<endl;
					}
				}
			}
		}
	} else {
		//N�mero de digitos impares
		if(digitos==5) {
			if(digito3==0) {
				cout<<"No hay ganador del millon de pesos" <<endl<<endl<<endl;
			} else {
				cout<<"El ganador es el digito el empleado con el numero" <<digito3 <<endl<<endl<<endl;
			}
		}
		if(digitos==3) {
			if(digito4==0) {
				cout<<"No hay ganador del millon de pesos" <<endl<<endl<<endl;
			} else {

				cout<<"El ganador es el digito el empleado con el numero" <<digito4 <<endl<<endl<<endl;
			}
		}
	}

	return 0;
}
