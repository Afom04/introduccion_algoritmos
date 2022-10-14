#include <iostream>
#include <math.h>

using namespace std;
int main(){
	int numempleados;
	cout<<"Por favor ingrese la cantidad de empleados que participaron ";
	cin>>numempleados;
	if (numempleados<1 || numempleados>15){
		cout<<"Cantidad de empleados no valida";
	}
	else{
	string nombres[numempleados];
	for(int i=0; i<numempleados; i++){
		cout<<"Por favor ingrese el nombre del empleado participante ";
		cout<<i+1 <<" ";
		cin>>nombres[i];
	}
	int tiempo[numempleados];
	for (int o=0; o<numempleados; o++){
		cout<<"Ingrese el tiempo que demoro en hacer el ejercicio el empleado "+nombres[o] <<endl;
		cin>>tiempo[o];
		 if(tiempo[o]>1 && tiempo[o]<172800){
		 	}else{
		 		cout<<"tiempo no valido";
			 }
		 }
		 int h,m,s;
		 for(int p=0; p<numempleados; p++){
		 	
		 }
	string nombreganador;
	int menor;
    int tiempoganador[numempleados];
    for (int j=0; j<numempleados; j++){
    	if(tiempo[j]<menor){
			menor=tiempo[j];
		nombreganador=nombres[j];
	}

	}
		cout<<"El ganador es " <<nombreganador <<endl;
	cout<<menor;
	}

	return 0;
}
