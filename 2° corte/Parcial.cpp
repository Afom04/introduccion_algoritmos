#include <iostream>
#include <conio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>


using namespace std;
//Declaraciones de funciones a usar
int generarRandom();
int generarRandomPos();
int cantidadBombas(int numAviones);
int main() {
//Definición de variables a usar
	srand(time(NULL));
	int numAviones=0;
	int numBombas=0;
	int puntuacion=1000;
	int vidas=3;
	int tablero[8][8];
	//CREAR TABLERO VACIO
	for (int o=0; o<=7; o++) {
		for (int p=0; p<=7; p++) {
			tablero[o][p]=0;
		}
	}
	cout<<"------------Bienvenido a War of Planes------------"<<endl<<endl<<endl;
	//VALIDAR NUMERO DE AVIONES
	bool validar=false;
	while(validar==false) {
		cout<<"Ingrese el numero de aviones con el que quiere jugar"<<endl;
		cin>>numAviones;
		if(numAviones >=1 && numAviones <=8) {
			int aviones[numAviones];

			validar=true;
		} else {
			cout<<"Cantidad de aviones invalidos"<<endl<<endl;
			validar=false;
		}
	}
	numBombas=cantidadBombas(numAviones);
	cout<<"La cantidad de bombas en el tablero es de ["<<numBombas<<"]"<<endl<<endl;
	int dano=0;
	int arrTiros[numAviones][numAviones];
	//VALIDAR TAMAÑO DE AVIONES
	int arrAviones[numAviones];
	for(int i=0; i< numAviones; i++) {
		bool nopasa = true;
		while(nopasa == true) {
			cout<<"Ingrese el tamano del avion #"<<i+1<<endl;
			cin>>arrAviones[i];
			if(arrAviones[i] >=2 && arrAviones[i]<=6) {
				nopasa = false;
			} else {
				nopasa = true;
			}
		}
		arrTiros[i+1][dano]=arrAviones[i];
	}
	getch();
	system("cls");

	//POSICIONAR AVIONES
	//RECORRO TODOS LOS AVIONES
	for(int i=0; i< numAviones; i++) {
		//GENERACION UN NUMERO ALEATORIO PARA VER SI SE POSICIONARA VERTICAL(1) U HORIZONTAL (0)
		int orientacion = generarRandom();
		int countAvionPosicionado = 0;
		int posicionX = generarRandomPos();
		//POR CADA AVION GENERO UN NUMERO DE 0 A 7 PARA POSICIONAR EL AVION (posicionX)
		//RECORRO EL ESPACIO(variable espacio) QUE VOY A OCUPAR PARA VER SI ES VALIDO PARA PONER EL AVIÓN
		int espacio = 0;
		bool esposible = false;
		while (esposible == false) {
			int espacio = 0;
			//SI ORIENTACION ES 0 SE POSICIONA DE MANERA HORIZONTAL
			if(orientacion == 0) {
				for(int tab = 0; tab < arrAviones[i]; tab++) {
					if(tablero[posicionX][tab] == 0) {
						espacio = espacio + 1;
					}
				}
				//SI LUEGO DE RECORRER LA FILA EL NUMERO DE ESPACIOS LIBRES ES IGUAL AL TAMAÑO DEL AVIÓN Y SE PONE EN ESE LUGAR
				if(espacio == arrAviones[i]) {
					esposible = true;
					for(int tab2 = 0; tab2 < arrAviones[i]; tab2++) {
						tablero[posicionX][tab2] = i+1;
					}
					//SI NO CABE CAMBIAMOS LA ORIENTACION Y CAMBIA LA POSICIONA INCIAL POR RANDOM DE NUEVO
				} else {
					esposible = false;
					posicionX = generarRandomPos();
					orientacion = 1;
				}
				//SI LA ORIENTACION ES =1 EL AVIÓN ES VERTICAL
			} else {
				//RECORRER VERTICALMENTE Y GUARDANDO LA CANTIDAD DE ESPACIOS VACÍOS DE LA FILA
				for(int tab = 0; tab < arrAviones[i]; tab++) {
					if(tablero[tab][posicionX] == 0) {
						espacio = espacio + 1;
					}
				}//SI LIEGO DE RECORRER EL NUMERO DE ESPACIOS ES IGUAL AL TAMAÑO DEL AVIÓN SE POSICIONA EL AVION POR UN FOR
				if(espacio == arrAviones[i]) {
					esposible = true;
					for(int tab2 = 0; tab2 < arrAviones[i]; tab2++) {
						tablero[tab2][posicionX] = i+1;
					}
					//SI NO CABE SE CAMBIA LA ORIENTACION Y SE GENERA LA POSICION INICIAL RANDOM DE NUEVO
				} else {
					esposible = false;
					posicionX = generarRandomPos();
					orientacion = 0;
				}

			}
		}
	}
	
	int cont=0;
//Asignación de minas en el tablero
	while(cont<numBombas) { //WHILE PARA GENERAR LA CANTIDAD N DE BOMBAS
		for(int l=0; l<1; l++) { //CICLO FOR PARA RECORRER LA MATRIZ
			bool validarMina=false;
			while(validarMina==false) { //WHILE QUE VALIDA SI ES POSIBLE POSICIONAR LA BOMBA
				int posicionMina=generarRandomPos();
				int posicionMinaY=generarRandomPos();
				for (int k=0; k<1; k++) { //CICLO FOR PARA POSICIONAR LOS VALORES RANDOM DE LAS MINAS
					if(tablero[posicionMina][posicionMinaY]==0) {//CONDICIONAL QUE VALIDA SI EN EL TABLERO HAY ESPACIOS LIBRES(0) PARA POSICIONAR LAS MINAS
						tablero[posicionMina][posicionMinaY]=9;
						validarMina=true;
					} else {
						validarMina=false;
					}
				}
			}
		}
		cont++;
	}
//DEFINICIÓN DE VARIABLES PARA VÁLIDAR LOS TIROS
	int acum=0;
	bool ganar=false;
	while(ganar==false) {//CICLO DO-WHILE PARA VALIDAR LOS TIROS Y SI SE ACABA EL JUEGO
		int X=0,Y=0;
		bool validartiro=false;
		do {
			cout<<"Por favor ingrese la coordenada X (0-7)"<<endl;
			cin>>X;
			cout<<"Por favor ingrese la coordenada Y (0-7)"<<endl;
			cin>>Y;
			if(X>=0 && X<=7 && Y>=0 && Y<=7) {
				validartiro=true;
			} else {
				cout<<"Coordenadas invalidas"<<endl;
				validartiro=false;
			}
		} while(validartiro==false);
		for(int m=0; m<1; m++) { //CICLOS FOR ANIDADOS PARA VALIDAR LAS COORDENADAS DADAS POR EL JUGADOR
			for(int n=0; n<1; n++) { 
				if (tablero[X][Y]!=0 && tablero[X][Y]!=9) {//CONDICIONAL QUE VÁLIDA SI LE DA A UN AVIÓN
					cout<<"Le has dado a un avión"<<endl<<endl;
//					arrTiros[tablero[X][Y]][dano];
					tablero[X][Y]=0;
				} else if(tablero[X][Y]==9) {//CONDICIONAL QUE VÁLIDA SI LA POSICIÓN QUE SE DISPARO ES UNA MINA
					cout<<"Mal :(, le diste a una bomba"<<endl<<endl;
					tablero[X][Y]=0;
					vidas-=1;
					puntuacion-=15;
				} else if(tablero[X][Y]==0) { //CONDICIONAL QUE VÁLIDA SI NO LE DIO A NADA
					cout<<"Mal :(, no le diste a nada"<<endl<<endl;
					puntuacion-=15;
				}
			}
		}
		for (int o=0; o<8; o++) {//CICLOS FOR ANIDADOS PARA LLENAR UN ACUMULADOR
			for (int p=0; p<8; p++) {
				if(tablero[o][p]==0 ||tablero[o][p]==9) {//CONDICIONAL PARA VER QUE ESPACIOS NO TIENEN BARCOS 
					acum++;
				}
			}
		}
		if(acum==64){//CONDICIONAL DEL ACUMULADOR QUE VALIDA SI LOS ESPACIOS YA ESTÁN LIBRES O CON MINAS
			ganar=true;
		}else{
			acum=0;
		}
		if(vidas==0) {//CONDICIONAL QUE VÁLIDA SI YA PERDIO EL TOTAL DE VIDAS
			ganar=true;
		}
	}
	system("cls");
	if(vidas==0) {//CONDICIONAL QUE DICE SI PIERDE O GANA SEGÚN CANTIDAD DE VIDAS
		cout<<"GAME OVER"<<endl<<"Perdiste todas tus vidas";
	} else {
		cout<<"Has Ganado"<<endl<<"Tu puntuacion es de "<<puntuacion<<endl<<"Y te quedaron "<<vidas<<" vidas";
	}
	/*	for (int o=0; o<=7; o++) {
			cout<<endl;
			for (int p=0; p<=7; p++) {
				cout<<"["<<tablero[o][p]<<"]";
			}
		}*/
	getch ();
	return 0;
}
//FUNCION QUE SE ENCARGA DE ASIGNAR LA CANTIDAD DE BOMBAS SEGÚN LA CANTIDAD DE AVIONES
int cantidadBombas(int numAviones) {
	int numBombas;
	if(numAviones==8) {
		numBombas=10;
	} else if(numAviones==7) {
		numBombas=12;
	} else if(numAviones==6) {
		numBombas=14;
	} else if (numAviones==5) {
		numBombas=16;
	} else if (numAviones==4) {
		numBombas=18;
	} else if (numAviones==3) {
		numBombas=20;
	}
	return numBombas;
}

int generarRandom() {//FUNCIÓN PARA GENERAR UN RANDOM(0-1) QUE PERMITE DECIDIR LA POSICION DEL AVIÓN
	int random = (rand() % 2);
	return random;
}

int generarRandomPos() { //FUNCIÓN QUE GENERA UN RANDOM (0-7) PARA UBICAR EL AVIÓN
	int random = (rand() % 8);
	return random;
}

