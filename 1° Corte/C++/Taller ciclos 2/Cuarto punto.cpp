#include <iostream>
#include <math.h>

/*Realice un programa que muestre la suma de los d�gitos de un n�mero que se encuentre entre
100896321 y 900987432, y que muestre la suma de los d�gitos de cada n�mero de la siguiente
manera por ejemplo en el caso del n�mero sea 100896321 se mostrar�a:
30- 29- 27- 24- 18- 9-1- 1- 1- 0 
Se debe ir mostrando la suma de los d�gitos e ir quitando el numero correspondiente el digito
que se encuentra m�s a la derecha.*/

int main() {

	using namespace std;
	/*Vaiables a usar */
	long int ultimodigito,numero,numero2,suma,resta;
	bool validar=false;

	/*Do-while para v�lidar que la entrada de datos sea correcta*/
	do {
		cout<<"Por favor ingrese un numero que se encuentre entre 100896321 y 900987432"<<endl;
		cin>>numero;
		numero2=numero;
		if(numero>100896320 && numero<900987433) {
			validar=true;
		} else {
			cout<<"Numero invalido" <<endl;
			validar=false;
		}
	} while(validar==false);

	/*While para separar las cifras del numero y sumarlas*/
	while(numero>=10) {
		ultimodigito= numero%10;
		numero=numero/10;
		suma=suma+ultimodigito;
	}

	/*Impresi�n del valor de la suma de los d�gitos.*/
	cout<<suma<<"-";

	/*While para restar los valores del numero a la suma*/
	while(numero2>=1) {
		ultimodigito= numero2%10;
		numero2=numero2/10;
		suma=suma-ultimodigito;
		cout<<suma <<"-";
	}
	return 0;
}
