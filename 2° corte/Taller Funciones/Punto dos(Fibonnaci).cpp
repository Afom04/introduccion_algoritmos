/*2. Realice un programa que genere la siguiente serie. El tope de la serie lo debe pone r el
usuario.
0,1,1,2,3,5,8,13,21….n
*/

/*Análisis
La serie de Fibonacci se puede calcular  sumando el término actual por el anterior, cosa que es posible pero muy extensa para calcular
un número especifico de la serie, la otra manera es por el modelo matematico de la serie el cual consta de una suma conformada por 2 restas del numero especifico
para llegar a este valor de la serie, usando los valores anteriores*
ax=(ax-1)+(ax-2)
Siendo ax el valor de la serie de fibonnaci al que se quiere llegar 
Ejemplo:
a9=(a9-1)+(a9-2)]
  =(a8)+(a7)  (a8 es el valor de la serie cuando se repite por octava vez)(a9 es el valor de la serie cuando se repite por novena vez)
a9=8+13=21
*/
#include <iostream>
#include <conio.h>
using namespace std;
	int main(){
	
	int X=0,Y=0;
	bool validartiro=false;
	while(validartiro=false) {
		cout<<"Por favor ingrese la coordenada X"<<endl;
		cin>>X;
		cout<<"Por favor ingrese la coordenada Y"<<endl;
		cin>>Y;
		if(X>=0 && X<=7 && Y>=0 && Y<=7) {
			validartiro=true;
		} else {
			validartiro=false;
		}
	}
}
