#include <iostream>
#include <conio.h>
#include <math.h>
/*Mostrar los números múltiplos de n desde T hasta k teniendo en cuenta que se debe empezar
en el siguiente múltiplo de n, al número ingresado como t y debe terminar en el anterior múltiplo
de n, del número ingresado como k.
 Ejemplo: si n vale 5, T vale 10 y K vale 26 el resultado es: 15,20,25
*/
using namespace std;

int main()
{
	int n,t,k;
	
	cout<<"Ingrese el numero a multiplicar ";
	cin>>n;
	cout<<"Ingrese el numero desde que quiere que haya multiplos ";
	cin>>t;
	t=t+1;
	cout<<"Ingrese el numero al que quiere que lleguen los multiplos ";
	cin>>k;
	while(t<k){
		if(t%n==0){
			cout<<" ";cout<<t;
		}
		
		t++;
	}
	return 0;
}
