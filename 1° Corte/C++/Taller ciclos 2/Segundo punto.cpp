#include <iostream>
#include <conio.h>
#include <math.h>

/*2) Programa que calcule el mínimo común múltiplo de 3 valores ingresados por el usuario.*/

using namespace std;
int main() {
	/*Definicion de variables a usar*/
	int valor;
	int a,b,c;
	int i;
	int mayor,menor1,menor2;
	bool validar=false;
	/*Ciclo DO-WHILE para validar la entrada de números positivos*/
	do {
		cout<<"Introduce un tres numeros enteros positivos"<<endl;
		cin>> a ;
		cin>> b;
		cin>>c;
		if (a<=0 || b<=0 || c<=0) {
			cout<<"los números no pueden ser cero o negativos";
		} else {
			validar=true;
		}
	} while(validar==false);

	/*Condicional compuesto para calcular-definir cual es valor más alto*/
	if (b>=a && b>=c) {
		mayor=b;
		menor1=a;
		menor2=c;
	} else if (c>=b && c>=a) {
		mayor=c;
		menor1=b;
		menor2=a;
	} else {
		mayor=a;
		menor1=b;
		menor2=c;
	}

	/*Condicional para definir si el valor mas alto es divisible entre los otros 2 valores*/
	if(mayor%menor1==0 && mayor%menor2==0) {
		cout<<"El minimo comun multiplo "<<a<<"," <<b<<","<<c<<" es:";
		cout<<mayor;
		/*Condicional para evaluar si es segundo valor que no divide */
	} else if(mayor%menor1==0 && mayor%menor2!=0) {
		/*Ciclo FOR para calcular los multiplos de el valor mayor */
		for(i=2; i<=menor2; i++) {
			valor=mayor*i;
			/*Condicional para evaluar si el multiplo obtenido es divisible entre el segundo valor(menor2) */
			if(valor%menor2==0) {
				cout<<"El minimo comun multiplo "<<a<<","<<b<<","<<c<<" es:";
				cout<<valor;
				break;
			}
		}
		/*Condicional para evaluar si es el valor1 no es divisor exacto del valor mayor*/
	} else if(mayor%menor1!=0 && mayor%menor2==0) {
		/*Ciclo FOR para calcular los multiplos de el valor mayor */
		for(i=2; i<=menor1; i++) {
			valor=mayor*i;
			/*Condicional para evaluar si el multiplo obtenido es divisible entre el primer valor*/
			if(valor%menor1==0) {
				cout<<"El minimo comun multiplo"<<a<<","<<b<<","<<c<<" es:";
				cout<<valor;
				break;
			}
		}
		/*Condicional para evaluar si los dos valores no son divisores del número mayor*/
	} else if(mayor%menor1!=0 && mayor%menor2!=0) {
		/*Contador FOR para calcular los múltiplos del valor mayor*/
		for(i=2; i<=menor1*menor2; i++) {
			valor=mayor*i;
			/*Condicional para evaluar si el multiplo obtenido puede ser divisible entre el valor1 y valor2*/
			if(valor%menor1==0 && valor%menor2==0) {
				cout<<"El minimo comun multiplo "<<a<<","<<b<<","<<c<<" es:";
				cout<<valor;
				break;
			}
		}
	}

	return 0;
}
