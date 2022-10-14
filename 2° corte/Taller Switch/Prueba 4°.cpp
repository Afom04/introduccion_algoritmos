#include <iostream>
#include <conio.h>
#include <cstring>
#include <time.h>
#include <stdlib.h>
using namespace std;
/*4. Determine si una palabra ingresada por el usuario es pal�ndrome. Recuerde que una palabra
pal�ndrome es aquella que se lee igual de derecha a izquierda y de izquierda a derecha ejemplo
Reconocer, ana, oso.*/

/*An�lisis
La forma de rectificar una palabra palindroma es escribirla desde la letra final hac�a el principio, o leerlo con ayuda de un espejo
Por lo cual si se lee/escribe igual es una palabra palindroma
*/
//Pre definici�n de las funciones a usar
bool validar(string palabra);
bool palindromo(string palabra);
void punto4();

//Funci�n Booleana que verifica si lo ingresado es una palabra o tiene caracteres diferentes por medio del c�digo ascii
bool validar(string palabra) {
	//Definici�n de variables a usar en la funci�n
	int t=palabra.length();//t toma el valor de la cantidad de letras que tiene la palabra
	int i;
//Ciclo For para recorrer letra por letra la palabra y ver que no tenga caracteres especiales
	for(i=0; i<t; i=i+1) {
		//Condicional para evaluar por medio del c�digo ascii que la palabra ingresada solo sea letras
		if(palabra[i]<65 || palabra[i]>=91 && palabra[i]<=96 || palabra[i]>=122) {
			cout<<"No es una palabra tiene numeros,caracteres especiales o espacios\n";
			return false;//Retorno booleano para usar m�s adelante
			break;
		}
	}
	return true;
}

//Funci�n Booleana para ver si la palabra es palindroma
bool palindromo(string palabra) {
	//Declaraci�n de variables a usar en la funci�n
	int inicio=0;
	int a= palabra.length()-1;
	//Ciclo for para poder recorrer caracter por caracter para ver si es palindroma
	for (int i=0; i<palabra.length(); i++) {
		//Condicional que evalua si la primer letra de la palabra y la ultima son iguales
		if(tolower(palabra[inicio])==tolower(palabra[a])) {
			inicio++;
			a--;
		} else {
			return false;//Retorno de un valor booleano para validar si cumple o no
			break;
		}
		return true;
	}
}
//Funcion de tipo void para mostrar la funcionalidad y conectar con las dem�s
void punto4() {
	string palabra;
	//Ciclo Do-While para validar que lo ingresado sea letras
	do {
		cout<<"Por favor ingrese la palabra a evaluar" <<endl;
		cin>>palabra;
	} while(validar(palabra)==false);
	//Condicional para validar si la palabra es palindroma por medio de la funci�n anterior
	if(palindromo(palabra)==true) {
		cout<<"La palabra ingresada es palindroma";
	} else {
		cout<<"La palabra ingresada no es palindroma";
	}
}

int main() {
	srand (time(0));
int orientacion = rand() % 2;
					cout<<"ORIENTACION "<<orientacion<<endl;
	getch();
	return 0;
}
