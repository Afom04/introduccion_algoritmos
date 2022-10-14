#include <iostream>
#include <conio.h>
#include <math.h>
#include <cstring>

using namespace std;
/*1.Realice un progranma que determine por cada piso de un centro comercial de 3 pisos, el total de dinero recolectado por ventas de cada uno de los locales por piso
tambien mostrar el total de  dinero recolectado en todo el centro comercial, con funciones*/

/*Análisis
Se podría ir de local en local de cada piso registrando el dinero recolectado por cada uno de los locales y luego sumar lo obtenido por cada piso para saber cuanto
genero el centro comercial.
O por medio de un formato previamente creado, que entreguen en el la información del local y piso que correspone, así sumar los correspondientes a cada piso y luego
sumar ese valor obtenido, o sumar todos los valores de los formatos
*/

//Definición de prototipo de funciones que se van a usar en la solución del punto 1°
int validarpisos(int piso);
int ventas(int piso,int locales);
void punto1();

//Función entera encargada de hacer la pedida de locales, estableciendo un límite y una base
int validarpisos(int piso) {
	int local;
	cout << "Ingrese el numero total de locales en el piso " << piso << ":\n";
	cin >> local;
	//If que valida que los locales ingresados por piso sean coherentes
	if (local >= 1 && local<50) {
		//Retorno de el total de locales
		return local;
	} else {
		cout << "El numero ingresado para el piso " << piso <<" no es coherente\n";
		//Este return hace la función de un Do-While para válidar y volver a pedir la cantidad de pisos
		return validarpisos (piso);
	}
}

//Función entera para hacer pedida de dinero por cada local de cada piso
int ventas(int piso,int locales) {
	//Definición de variables usadas en la función
	int ventas, acumulado=0;
	//Ciclo For para hacer la pedida de valores conociendo previamente el total de locales por piso
	for(int i=1; i <=locales; i++) {
		//Variable Booleana para hacer una validación
		bool validar=false;
		//Ciclo Do-While para validar que el valor ingresado no sea negativo o exagerado
		do {
			cout<<"Ingrese el total vendido por el local #" <<i <<" del piso #" <<piso <<endl;
			cin>>ventas;
			//If que se encarga de validar si el valor ingresado no es negativo o exagerado
			if (ventas>=500000 && ventas<=10000000) {
				acumulado+=ventas;//Variable que se encarga de sumar lo obtenido de cada almacen por piso
				validar=true;
			} else {
				cout<<"Monto ingresado no es coherente"<<endl;
				validar=false;
			}
		} while(validar==false);
	}
	//Retorno de variable que tiene el valor sumado de los locales por piso
	return acumulado;
}
//Función de tipo Void que se encarga de llamar a las demás funciones para ejecutar el código pedido
void punto1() {
	//Definición de variables usadas para la suma de por local
	int ventaspiso1,ventaspiso2,ventaspiso3;
	//Variables que toman el valor retornado por las funciones para luego operar
	int	localesprimerpiso=validarpisos(1);
	int	localessegundopiso=validarpisos(2);
	int	localestercerpiso=validarpisos(3);
	//Variables en que se guardan el valor retornado por las funciones de la suma de los locales por piso
	ventaspiso1=ventas(1,localesprimerpiso);
	ventaspiso2=ventas(2,localessegundopiso);
	ventaspiso3=ventas(3,localestercerpiso);
	//Variable en que se suma el monto obtenido por piso para obtener el total del centro comercial
	int sumarventas=ventaspiso1+ventaspiso2+ventaspiso3;
	cout<<"Las ventas obtenidas por el centro comercial fueron de $"<<sumarventas;;
	getch();
}
//-------------------------------------------------------------------------------------------------------------------------------------------------------------//

/*2. Realice un programa que genere la siguiente serie. El tope de la serie lo debe pone r el
usuario.
0,1,1,2,3,5,8,13,21….n
*/
/*Análisis
La serie de Fibonacci se puede calcular sumando el término actual por el anterior teniendo como base el 0,1 (los dos primeros de la serie)
*/
void punto2();
void punto2() {
	//Definición de variables usadas (definidas como unsigned para que sean >0 y longlong para que pueda mostrar mayor cantidad de números de la serie)
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
		//Resta en la variable de fibonacci sobre el valor que tenía antes, debido a que auxiliar va a estar +fib de lo que debería
		//Ej:aux=1, fib=0, aux+fib=0+1, pero el primer valor de la serie es cero, por lo cual se le resta el valor de fib
		fib = aux - fib;
	}
	getch();
}
//---------------------------------------------------------------------------------------------------------------------------------------------------------------

/*3. Realice un programa que resuelva la siguiente serie.
{[(2!)/(3ˆn)]ˆ(n+1)} - {[(3!)/(5ˆn)]ˆ(n+1)} + {[(4!)/(7ˆn)]ˆ(n+1)}…nveces
Donde ! significa el factorial de un número. ˆ significa elevado.
cada una de las expresiones a resolver esta separada por { }.
*/

/*Análisis
Pasa solucionar la serie primero debemos de saber cuantas veces queremos que se soluciones una vez que sepamos este dato podemos empezar solucionando
la primera serie, en la cual primero solucionamos la fracción y luego ese resultado lo vamos sumando o restando ya sea el caso con el resto de los
resultados de la serie*/

//Definicion de funciones a usar en el programa
int factorial (int x);
int potencia (int base, int exponente);
void punto3();
void
punto3 () {
	//Definición de variables a usar
	int n, j = 2, k = 3, p, m = 1, solu, i = 1;
	//N=Número a tomar; J=valor del primer factorial; K=Valor segundo factorial
	bool valido;
	float ecua1, ecua2, ecua3;
	double long suma, resta, resultado;
	//Se valida que el numero ingresado por el usuario sea un entero positivo
	do {
		cout <<"Por favor ingrese el numero de veces que quiere que se solucione la ecuacion( ê significa portencia y ! factorial ):"<<endl;
		cout<<" { {[(2!)/(3ˆn)]ˆ(n+1)} - {[(3!)/(5ˆn)]ˆ(n+1)} + {[(4!)/(7ˆn)]ˆ(n+1)} }  :"<<endl;
		cin >> p;
		cout << "Por favor ingrese el numero que tomara {N}: "<<endl;
		cin >> n;
		//If que válida que los valores ingresados no sean menores a 1
		if (n > 1 && p > 1 ) {
			valido = true;
		} else {
			cout<<"Valores invalidos o incoherentes" <<endl;
			valido = false;
		}
	} while (false);

	//Se realiza en una variable donde se llaman funciones para calcular la división(Compuesta por el factorial como numerador y denominador la potencia)
	//Igualmente para calcular la potencia externa que tiene la división
	//Todo esto dentro de un ciclo While para que aumente porque es una secuencia
	//Y dentro de este unos ciclos For para hacer la repetición de las ecuaciones de la serie, para luego operarlos entre si
	do {
		//Llamado de funciones para operar luego(el numerador y denominador)
		ecua1 = factorial (j) / potencia (k, n);//Numerador y denominador obtenido por los cálculos
		ecua2 = potencia (ecua1, n + 1); //Potencia de la división/fracción
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
	//Variable que guarda el resultado de toda la operación de la serie (Da NAN debido a que el software y la memoria no da suficiente espacio para guardar
	//el valor por lo que es un decimal muy largo)
	resultado = suma + resta;
	cout << resultado << endl;
}

//Esta función hace que el valor X tome el J=2(que aumenta en el ciclo while de la función anterior) para calcular el valor siempre y cuando no sea entero positivo
//mayor a 1 y regresa el dato de la operación del valo que tomo X
int
factorial (int x) {
	if (x < 0)
		return 0;
	else if (x > 1)
		return x * factorial (x - 1);
	return 1;
}

//Esta función se maneja con 2 parametros de entrada enteros(base y exponente)
//La base se multiplica al cuadrado, siempre y cuando su exponente que es N, sea mayor a 1 de lo contrario el resultado regresa a 0, volviendo a operar
//Regresa un dato "resultado" el cual corresponde a la potencia que se tenía que realizar
int
potencia (int base, int exponente) {
	//Definición de variables usadas en la función
	int resultado = 0;
	int x = 1;
	//Ciclo while para que se calcule el  valor de la potencia hasta que llegue al resultado
	while (x < exponente) {
		//If para validar si la repetición de la base sea menor al exponente
		if (resultado < base) {
			resultado = base * base;//Multiplicación del número por si mismo hasta que sea -1 a el exponente
		} else {
			resultado = resultado * base;//Aquí se multiplica el acumulado que se encontraba en exponente-1 para hallar la ultima repetición
		}
		x++;
	}
	return resultado;
}
//---------------------------------------------------------------------------------------------------------------------------------------------------------------


/*4. Determine si una palabra ingresada por el usuario es palíndrome. Recuerde que una palabra
palíndrome es aquella que se lee igual de derecha a izquierda y de izquierda a derecha ejemplo
Reconocer, ana, oso.*/

/*Análisis
La forma de rectificar una palabra palindroma es escribirla desde la letra final hacía el principio, o leerlo con ayuda de un espejo
Por lo cual si se lee/escribe igual es una palabra palindroma
*/
//Pre definición de las funciones a usar
bool validar(string palabra);
bool palindromo(string palabra);
void punto4();

//Función Booleana que verifica si lo ingresado es una palabra o tiene caracteres diferentes por medio del código ascii
bool validar(string palabra) {
	//Definición de variables a usar en la función
	int t=palabra.length();//t toma el valor de la cantidad de letras que tiene la palabra
	int i;
//Ciclo For para recorrer letra por letra la palabra y ver que no tenga caracteres especiales
	for(i=0; i<t; i=i+1) {
		//Condicional para evaluar por medio del código ascii que la palabra ingresada solo sea letras
		if(palabra[i]<65 || palabra[i]>=91 && palabra[i]<=96 || palabra[i]>=122) {
			cout<<"No es una palabra tiene numeros,caracteres especiales o espacios\n";
			return false;//Retorno booleano para usar más adelante
			break;
		}
	}
	return true;
}

//Función Booleana para ver si la palabra es palindroma
bool palindromo(string palabra) {
	//Declaración de variables a usar en la función
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
//Funcion de tipo void para mostrar la funcionalidad y conectar con las demás
void punto4() {
	string palabra;
	//Ciclo Do-While para validar que lo ingresado sea letras
	do {
		cout<<"Por favor ingrese la palabra a evaluar" <<endl;
		cin>>palabra;
	} while(validar(palabra)==false);
	//Condicional para validar si la palabra es palindroma por medio de la función anterior
	if(palindromo(palabra)==true) {
		cout<<"La palabra ingresada es palindroma";
	} else {
		cout<<"La palabra ingresada no es palindroma";
	}
}

//--------------------------------------------------------------------------------------------------------------------------------------------------------------

//Funcion
int mostrarmenu();
//Función de tipo entera para mostrar el menú y evaluar si da error o es inválido la opción ingresada
	int mostrarmenu () {
		int opcion;
		cout << "-------------------------Taller Funciones y Switch----------------------------\n";
		cout <<"Por favor seleccione una opcion y presione enter\n";
		cout <<"1. Ejercicio sobre ventas por piso,local y total de un centro comercial\n";
		cout << "2. Ejercio sobre la serie fibonacci\n";
		cout << "3. Ejercicio sobre N operaciones con potencias y factoriales(serie)\n";
		cout << "4. Ejercicio sobre validacion de palabras palindromas\n";
		cin >> opcion;
		//Switch para seleccionar los diferentes puntos llamando su función
		switch(opcion) {
			case 1:
				punto1();//Al seleccionar el #1 carga la opción del punto de el centro comercial
				break;
			case 2:
				punto2();////Al seleccionar el #2 carga la opción del punto de la serie de fibonacci
				break;
			case 3:
				punto3();////Al seleccionar el #3 carga la opción del punto de la serie de operaciones
				break;
			case 4:
				punto4();////Al seleccionar el #4 carga la opción del punto para verificar si son palindromos
				break;
			default:
				cout<<"Opcion invalida"<<endl<<endl<<endl<<endl<<endl; //Opción Default donde si hay algún valor que no este en el Switch vuelve a llamar la función
				mostrarmenu();
		}
	}

int main() {
	mostrarmenu();
	
	getch();
	return 0;
}
