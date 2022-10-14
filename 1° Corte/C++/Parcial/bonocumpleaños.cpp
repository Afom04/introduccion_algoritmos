#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;
int main() {
	int empleados,mes,anio;
	bool valfecha=false;
	cout<<"Ingrese la cantidad de empleados ";
	cin>>empleados;

	for(int i=1; i<=empleados; ) {
		do {
			cout<<"Ingrese su mes de nacimiento"<<endl;
			cin>>mes;
			cout<<"Ingrese su año de nacimiento"<<endl;
			cin>>anio;
			if(mes>0 && mes<13 && anio>1959 && anio<2005) {
				valfecha=true;
			}	else {
				cout<<"Valor invalido" <<endl;
				valfecha=false;
			}
		} while(valfecha==false);
		
		if(anio%4==0) {
			if(mes==2 || mes==4 || mes==6 || mes==9 || mes==11) {
				cout<<"El empleado con el numero " <<i <<" tiene un bono de $50.000" <<endl <<endl;
			} else {
				cout<<"El empleado con el numero " <<i <<" no tiene derecho a bono" <<endl <<endl;
			}
		} else {
			cout<<"El empleado con el numero " <<i <<" no tiene derecho a bono" <<endl <<endl;
		}
		i++;
	}

	return 0;
}
