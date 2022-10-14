#include <iostream>
#include <conio.h>
#include <sstream>
#include <math.h>
#include <ctime>
#include <cstdlib>

/*Mostrar los divisores de un número ingresado por el usuario. Tenga en cuenta que el numero
ingresado no puede ser primo.
*/
using namespace std;
int tirarDado(){
	int dado = (rand() % 6 + 1);
	cout<<"-------";
	cout<<"\n";
	cout<<"!--"<<dado<<"--!";
	cout<<"\n";
	cout<<"-------";
	cout<<"\n";
	srand (time(0));
	return dado;
}

int main()
{
	int numEstudiantes;
	cout<<"Por favor ingrese el numero de estudiantes  ";
	cin>>numEstudiantes;
	if(numEstudiantes<1 || numEstudiantes>10){
	cout<<"Número de estudiantes invalido";
	}
	else{
	
	string nombres[numEstudiantes];
	int valores[numEstudiantes];
	for (int i=0 ; i<numEstudiantes; i++){
		cout<<"Por favor ingrese el nombre del estudiante numero ";
		cout<<i+1;
		cout<<"  ";
		cin>>nombres[i];
	}
	for (int p=0 ; p < numEstudiantes; p++){
		cout<<"Presione una tecla para lanzar los dados del estudiante  "+nombres[p];
		getch();
		cout << "\n";
		int dado1 = tirarDado();
		int dado2 = tirarDado();
		if(dado1 == dado2){
			cout<<"Bien! sumaste "<<dado1<<" Puntos";
			valores[p] = dado1;
		}else{
			cout<<"Mal! no sumaste puntos";
			valores[p] = 0;	
		}
		cout << "\n";
	}
	cout<<"El resultado del juego es";
	for(int t=0; t < numEstudiantes; t++){
		cout << "\n";
		cout<<"El estudiante "<<nombres[t]<<" Obtuvo "<< valores[t];
		cout << "\n";
	}
}
return 0;
}
