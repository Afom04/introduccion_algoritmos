#include <iostream>
#include <conio.h>
#include <math.h>
/*Mostrar los divisores de un número ingresado por el usuario. Tenga en cuenta que el numero
ingresado no puede ser primo.
*/
using namespace std;

int main()
{
	int num,resto;

	cout<<"Por favor ingrese un numero natural ";
	cin>>num;
	bool primo=true;
if(num==1){
  	cout<<"Este número no es considerado primo o compuesto";}else{
if(num>0){
   
	for (int i=2; i<num; i++){
	  if(num % i==0)primo = false; 
	}
		if (primo==false){
	    cout<<"Sus divisores son: ";
	  	for(int n=1; n<num; n++)
	  	{
	  		resto=num%n;
	  		if (resto==0)
	  		{
	  			cout<<"{"<<n <<"} ";
			  }
		}
		}else 
    	cout<<"El numero es primo y solo es divisible por 1 y por si mismo";

}else
cout<<"El número ingresado no es válido";
}
return 0;	    	
}
