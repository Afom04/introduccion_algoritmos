#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;
int main() {
	//Definición de variables para el bono de $100.000
	int empleados,z,w,multiplos;
	bool valnum=false;

	cout<<"Ingrese la cantidad de empleados ";
	cin>>empleados;

//Ingreso de datos en un do/while para validar estos mismos
	do {
		cout<<"Ingrese un número z"<<endl;
		cin>>z;
		cout<<"Ingrese un número w"<<endl;
		cin>>w;
		if(w>0 && z>0 && z<=empleados && w>0) {
			valnum=true;
		} else {
			valnum=false;
			cout<<"Valores inválidos" <<endl;
		}
	} while(valnum==false);

//Contador para calcular los múltiplos de Z definiendo como límite 
	for(int o=1; o<=empleados/z; o++) {
		multiplos=z*o;
//Condicional que calcula si los múltiplos de Z no sean divisibles en W
		if (multiplos%w!=0) {
			cout<<"El empleado numero #" <<multiplos <<" tiene un bono de $100.000"<<endl;
		}
	}

	return 0;
}
