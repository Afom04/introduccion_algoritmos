#include <iostream>
#include <conio.h>
#include <math.h>
#include <cstring>

using namespace std;
//1.Realice un programa que determine por cada piso de un centro comercial de 3 pisos, el total de dinero recolectado por ventas de cada uno de los locales por
//piso,tambien mostrar el total de  dinero recolectado en todo el centro comercial, con funciones*/

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

int main() {
	punto1();
}
