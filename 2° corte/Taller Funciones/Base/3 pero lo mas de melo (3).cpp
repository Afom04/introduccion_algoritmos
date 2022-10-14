
#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <conio.h>

using namespace std;
/*
  Analisis:
  Lo primero que hacemos es crear las funciones que vamos a utilizar dentro de el programa las cuales son factorial, en la cual reibe un valor
  y si este valor es cero returna 0 y si es mayor que uno llama nuevamente a la funcion pero con n-1 y esto lo multiplicamos por n  y esto
  se repetira hasta n llegue a tomar el valor de 1. Luego la funcion de potencia la cual consiste en multiplicar la base cuantas bases se haya 
  indicado en el exponente, con un contador hasta que el resultado sea igual al resultado por la base.
  luego creamos la ecuacion base con la que haremos toda la serie, con esta base aumentamos los numeros dependiendo de cuantas veces se
  llame la serie luego creamos dos for 1 para hacer los numeros de la serie que sean pares los cuales son los negativos y otro para hacer la 
  serie que serian impares, luego sumamos estos dos y esto seria el resultado
*/

int factorial(int x);
int potencia(int base ,int exponente );

int main(){
	//Se valida que el numero ingresado por el usuario sea un entero positivo
	int n,j=2,k=3,p,m=1,epa,nega,i=1;
	bool valido;
	float ecua1,ecua2,ecua3;
	double long suma,resta,resultado;
	//Se valida que el numero ingresado por el usuario sea un entero positivo
	do{
	cout<<"ingrese el numero de veces que quiere que se solucione la ecuacion: ";
	cin>>p;
	cout<<"ingrese el numero que tomara n: ";
	cin>>n;
	if(n>1 && p>1){
		valido=true;
	}else{
		valido=false;
	}
	}while(false);
	//hacemos una ecuacion base para despues ir aumentando en serie los numero, como es una escuencia, lo hacemos con un do while
	// ,con unos contadores y con un acomulador, para poder aumentar los valores dentro de la serie y luego sumarlos y restarlos
	do{
	ecua1=factorial(j)/potencia(k,n);
	ecua2=potencia(ecua1,n+1);
	for(int ecua2=0;i<p;i++){
		j++;
		k=k+2;
		suma=suma+i;
	}
	for(int ecua2=1;k<p;k++){
		j++;
		k=k+2;
		nega=k*(-1);
		resta=resta+nega;
	}
	m++;
	}while(m<=p);
	resultado=suma+resta;
	cout<<resultado<<endl;
	return 0;
}
//La funcion factorial sera quien realice toda la operacion del entero X a multiplicar siempre y cuando X sea un entero positivo mayor a 1 
//la funcion regresa como dato el valor la operacion factorial del valor de X
int factorial(int x) {
   if(x < 0) return 0;
   else if(x > 1) return x*factorial(x-1);
   return 1;
}
   // La funcion potencia maneja dos variables enteras, base y exponente
  // la base tiene como propocito multiplicarse al cuadrado, siempre y cuando exponente que es N, sea mayor a 1 en caso contrario el resultado siempre regresa a cero
  // La funcion regresa el dato de resultado, el cual es la operación correspondiente de la potencia
int potencia(int base,int exponente){
    int resultado=0;
	int x=1;
	while (x<exponente){
		if (resultado<base){
			resultado=base*base;
		}else{
			resultado=resultado*base;
		}
		x++;
		}
	return resultado;
}

