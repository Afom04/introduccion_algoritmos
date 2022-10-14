#include<iostream>
#include <string.h>
using namespace std;

bool palindromo(string palabra) {
	/*funcion para validar si el string a ingresar es palindromo o no,
	se evalua como "bool" con el fin de retonar un valor de verdadero o falso en la validacion*/

	int a=0;
	int b= palabra.length()-1;
	/* "a" se toma como 0 para señalar la pirmera poscion en la palabra
	y "b" se toma como el valor de la longitud de la palabra menos 1, ya que en las posciciones el lenguaje inicia a evaluar en cero
	entonces la magnitud total de la palabra siempre sera su longitud menos 1*/
	for (int i=0; i< palabra.length(); i++) {
		/*ciclo for que incia en 0 y finaliza cuando la pabra sea evaluada en cu totalidad o mientras se cumpla la condicional if*/
		if(tolower(palabra[a])==tolower(palabra[b])) {
			/*condicional que evalua la palabra en cada uno de sus caracteres, "TOLOWER" se usa con el fin de evaluar toda la plabra en letras
			minusculas asi el usuario ingrese mayusculas estas las evaluara e igual forma*/
			a++;
			b--;
//contador para pasar en cada poscion de la palabra
		} else {
			return false;
//de no cumplirse la condicion hasta terminar la palabra se retorna falso
		}
		return true;
//al cumplirse  las condiciones en toda la palbra se retorna falso en la funcion
	}
}
int main(void) {
	char palabra[50];
	bool e;
	do {
		cout<<"ingrese una palabra "<<"\n";
		cin>> palabra;

		int t=strlen(palabra);
		int i;
		// se valida por medio de un for que se solo se puedan ingresar letras
		for(i=0; i<t; i=i+1) {
			if(palabra[i]<65 || palabra[i]>=91 && palabra[i]<=96 || palabra[i]>=122) {
				e=false;
				//si la funcion no retorna "true" pondra un mensaje validando que lan palabra no es palindroma
				cout<<"no es una palabra tiene numeros,caracteres especiales o espacios\n";
				break;
			} else {
				e=true;
				if (e==true) {

					if(palindromo(palabra)==true) {
						cout<<"la palabra ingresada es palindroma"<<"\n";
						break;
//si la funcion retorna "true" pondra un mensaje validando que lan palabra es palindroma
					} else {
						e=false;
						cout<<"la palabra no es palindroma"<<"\n";
						break;
					}
				}
			}
		}


//se repite el ciclo hasta que  se cumpla la condicion
	} while(e==false);


}





