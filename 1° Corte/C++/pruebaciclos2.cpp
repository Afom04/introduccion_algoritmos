#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;
int main() {
	int a,b,c,d,e,f,valor,mayor,menor1,menor2,i,mcm,operacion,resultado;
	bool validar=false;
	/*Ciclo DO-WHILE para validar la entrada de números positivos*/
	do {
		cout<<"Introduce un tres fracciones enteras positivas"<<endl;
		cin>>d>> a;
		cout<<endl;
		cin>>e>> b;
		cout<<endl;
		cin>>f>>c;
		cout<<endl;
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
		mcm=mayor;
		/*Condicional para evaluar si es segundo valor que no divide */
	} else if(mayor%menor1==0 && mayor%menor2!=0) {
		/*Ciclo FOR para calcular los multiplos de el valor mayor */
		for(i=2; i<=menor2; i++) {
			valor=mayor*i;
			/*Condicional para evaluar si el multiplo obtenido es divisible entre el segundo valor(menor2) */
			if(valor%menor2==0) {
				mcm=valor;
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
				mcm=valor;
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
				mcm=valor;
				break;
			}
		}
	}
	cout<<"Ingrese 1 si quiere realizar una resta"<<endl;
	cout<<"2 para realizar una suma,"<<endl;
	cout<<"3 para sumar las dos primeras fracciones y restar la ultima"<<endl;
	cout<<"4 para restar las dos primera fracciones y sumar la ultima o cualquier otro para no operar"<<endl;
	cin>>operacion;
	if(operacion==1) {
		resultado=(mcm/a)*d+(mcm/b)*e+(mcm/c)*f;
	} else if(operacion==2) {
		resultado=(mcm/a)*d-(mcm/b)*e-(mcm/c)*f;
	} else if(operacion==3) {
		resultado=((mcm/a)*d+(mcm/b)*e)-(mcm/c)*f;
	} else if(operacion==4) {
		resultado=((mcm/a)*d-(mcm/b)*e)+(mcm/c)*f;
	} else {
		cout<<"Gracias por usar la calculadora";
	}

	cout<<"Este es el numerador luego de restar y sumar" <<resultado;
	cout<<mcm <<endl <<endl;

	cout<<"Este es el numerador luego de sumar y restar"<<resultado;
	cout<<mcm <<endl <<endl;

	//bool simplificar=false;
	for(int j=2; j<=7;) {
		while(resultado%j==0 && mcm%j==0) {
			resultado=resultado/j;
			mcm=mcm/j;
		}
		j++;
	}
	
	cout<<resultado<<endl;
	cout<<mcm;
	return 0;
}

