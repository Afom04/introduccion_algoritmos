/*Una empresa con N empleados desea realizar en sistema que entregue el
nombre del empleado ganador de un millón de pesos. Para ello tendrá en cuenta
lo siguiente: la cantidad de empleados de la empresa esta representado por un
numero entero, se debe ir separando cada digito del numero y el numero de la
mitad será el que represente al empleado ganador, en caso de no existir numero
de la mitad, porque la cantidad de empleados tiene un numero par de dígitos se
debe escoger el primer número primo después de la mitad de la cantidad de
dígitos que contiene el numero que representa la cantidad de empleados.

Adicionalmente se debe regalar bonos de $100.000 a los empleados que se
encuentren en las posiciones múltiplos de un numero z ingresado por el usuario,
pero que no puede ser divisor de un numero W ingresado por el usuario.

También se dará un bono de $50.000, a los empleados que nacieron en un año
bisiesto y que cumplen en un mes que tenga menos de 31 días. Se debe mostrar
el nombre de los ganadores con su respectivo premio.
*/

#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;
int main() {
	//Variables usadas para definir el ganador de millón de pesos
	bool primo=true;
	bool valido=false;
	int empleados,empleados1,empleados2,digitos=1,digitos2=1,ultimodigito,digito1,digito2,digito3,digito4,digito5,resto;
	//Ingreso de empleados y validación de estos mismos
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
					cout<<"El ganador del premio de un millón de pesos es el empleado con el numero #" <<digito4 <<endl<<endl<<endl;
				} else {
					primo=true;
					for (int i=2; i<digito5; i++) {
						if(digito5 % i==0)primo = false;
					}
					if(primo==true) {
						cout<<"El ganador del premio de un millón de pesos es el empleado con el numero #" <<digito5 <<endl<<endl<<endl;
					} else {
						cout<<"No hay ganador del millon de pesos" <<endl<<endl<<endl;
					}
				}
			}
		}
	} else {
		//Número de digitos impares
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

//Definición de variables para el bono de $100.000
	int z,w,multiplos;
	bool valnum=false;

//Ingreso de datos en un do/while para validar estos mismos
	do {
		cout<<"Ingrese un número z"<<endl;
		cin>>z;
		cout<<"Ingrese un número w"<<endl;
		cin>>w;
		if(w>0 && z>0 && z<=empleados && w>0) {
			valnum=true;
		} else {
			valnum=false;
			cout<<"Valores inválidos" <<endl;
		}
	} while(valnum==false);

//Contador para calcular los múltiplos de Z definiendo como límite
	for(int o=1; o<=empleados/z; o++) {
		multiplos=z*o;
//Condicional que calcula si los múltiplos de Z no sean divisibles en W
		if (multiplos%w!=0) {
			cout<<"El empleado numero #" <<multiplos <<" tiene un bono de $100.000"<<endl;
		}
	}

//Definicion de variables para el bono de $50.000
	int mes,anio;
	bool valfecha=false;

//contador para pedir las fechas de nacimiento de los empleados
	for(int i=1; i<=empleados; ) {
		//Ingreso de datos en un do/while para validar estos mismos
		do {
			cout<<endl <<"Ingrese su mes de nacimiento(en numero) del empleado #"<<i <<endl;
			cin>>mes;
			cout<<"Ingrese su año de nacimiento"<<endl;
			cin>>anio;
			if(mes>0 && mes<13 && anio>1959 && anio<2005) {
				valfecha=true;
			}	else {
				cout<<"Valor invalido" <<endl;
				valfecha=false;
			}
		} while(valfecha==false);

		/*Condicional para definir si el año es bisiesto(Se hace solo el módulo debido a los límites que se establecio)y anidados
		para validar si el mes insertado tiene menos de 31 días*/
		if(anio%4==0) {
			if(mes==2 || mes==4 || mes==6 || mes==9 || mes==11) {
				cout<<"El empleado con el numero " <<i <<" tiene un bono de $50.000" <<endl <<endl;
			} else {
				cout<<"El empleado con el numero " <<i <<" no tiene derecho a bono" <<endl <<endl;
			}
		} else {
			cout<<"El empleado con el numero " <<i <<" no tiene derecho a bono" <<endl <<endl;
		}
		i++;
	}

	return 0;
}
