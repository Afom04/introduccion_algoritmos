#include <iostream>
#include <conio.h>
#include <math.h>


/*Mostrar los divisores de un número ingresado por el usuario. Tenga en cuenta que el numero
ingresado no puede ser primo.
*/
using namespace std;
int main(){

int numEstudiantes,puntaje1,puntaje2,puntuacion,mayor;
string nombreganador;
		bool invalido;
		invalido=true;
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
	int puntaje1[numEstudiantes];
	int	puntaje2[numEstudiantes];
		for (int p=0 ; p < numEstudiantes; p++){
		cout<<"Ingrese el resultado de los dados  del estudiante "+nombres[p] <<endl;
		cin>>puntaje1[p]; 
		cin>>puntaje2[p];
	            if(puntaje1[p]>0 && puntaje2[p]>0 && puntaje1[p]<7 && puntaje2[p]<7){
					invalido=false;
			} 
	else{
		 	cout<<"Puntaje invalido"<<endl;
		 	/*cout<<"Ingrese un valor de dado correcto" <<endl;
		 	cin>>puntaje1[p]; 
			cout<<endl;
			cin>>puntaje2[p];
			while(invalido=true);{
				}*/
			 }
}
int puntuacion[numEstudiantes];
for(int j=0; j<numEstudiantes;j++){
	if(puntaje1[j]==puntaje2[j]){
		puntuacion[j]=puntaje1[j];
	}
}
for (int o=0; o<numEstudiantes;o++){
	if(puntuacion[o]>mayor){
		mayor=puntuacion[o];
		nombreganador=nombres[o];
	} 
}
cout<<"El ganador es "<<nombreganador<<endl;
cout<<mayor;
}
return 0; }	
