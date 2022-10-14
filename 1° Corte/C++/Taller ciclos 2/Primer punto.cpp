#include <iostream>
#include <conio.h>
#include <math.h>

/*El curso de programación saca varias calificaciones en el semestre para cada estudiante, usted
debe crear un programa que permita calcular por estudiante la nota final obtenida, tenga en
cuenta que para cada estudiante se saca n notas de talleres las cuales computadas equivalen a
un % de la nota final del curso equivalente a talleres, este porcentaje es ingresado por el
docente. Dos quices que al computarlos se obtiene la nota correspondiente de quices, la cual
tiene un % de la materia y es dada por el docente, por último un parcial que equivale al 50% de
la materia. Recuerde que el porcentaje más bajo que puede tener un ítem de las notas de la
materia es 10%. Al mostrar la nota obtenida por el estudiante también debe mostrar el nombre
del mismo y el semestre en el cual se encuentra. También debe decir cuantos estudiantes
aprobaron la materia y a que porcentaje equivale.*/

using namespace std;
int main() {
	/*Definición de variables que son utilizadas fuera del bucle y que se necesitan acumular*/
	int estudiantespasaron,porcentajeestudiantes,totalestudiantes;
	float porcentajetaller,porcentajequiz,promediotaller,promedioquiz,porcentajeparcial,notafinal;
	char nombre[50];
	bool validarest=false;

	/*Do-While para validar la entrada de estudiantes*/
	do {
		cout<<"Ingrese la cantidad de estudiantes" <<endl;
		cin>>totalestudiantes;
		if(totalestudiantes>0 && totalestudiantes<31) {
			validarest=true;
		} else {
			cout<<"Total estudiantes invalido" <<endl;
		}
	} while(validarest==false);

	/*Ciclo for para repetir la acción de pedir nombre,semestre,porcentaje de notas, total de notas de taller,el valor de las notas de taller y quiz y, el valor
	de la nota del parcial*/
	for(int i=1; i<=totalestudiantes;) {
		/*Definición de variables usadas en el ciclo y se reinician*/
		int semestre=0,porcentaje1=0,porcentaje2=0,notataller=0,notaquiz=0,notaparcial=0,totaltaller=0,notatotaltaller=0,notatotalquiz=0;
		bool validarsem=false;
		bool validarpor=false;
		bool validarnot=false;
		bool validartall=false;
		bool validarquiz=false;
		bool validarparcial=false;
		cout<<"Ingrese el nombre del estudiante #" <<i <<endl;
		cin>>nombre;

		/*Ciclo While para validar la entrada del valor de semestre*/
		while(validarsem==false) {
			cout<<"Ingrese en que semestre va el estudiante #"<<i <<endl;
			cin>>semestre;
			if(semestre>0 && semestre<16) {
				validarsem=true;
			} else {
				cout<<"Semestre invalida"<<endl;
			}
		}

		/*Ciclo While para validar los porcentajes de talleres y quizes*/
		while(validarpor==false) {
			cout<<"Ingrese el porcentaje equivalente a las notas de talleres "<<endl;
			cin>>porcentaje1;
			cout<<"Ingrese el porcentaje equivalente a las notas de lo quizes"<<endl;
			cin>>porcentaje2;
			if(porcentaje1+porcentaje2==50 && porcentaje1>9 && porcentaje2>9 ) {
				validarpor=true;
			} else {
				cout<<"porcentajes invalidos"<<endl;
			}
		}

		/*Ciclo While para validar el total de notas de talleres*/
		while(validarnot==false) {
			cout<<"Ingrese el total de notas de talleres "<<endl;
			cin>>totaltaller;
			if(totaltaller>0 && totaltaller<10) {
				validarnot=true;
			} else {
				cout<<"Total invalido"<<endl;
			}
		}

		/*Ciclo FOR para pedir las notas de talleres y se vayan acumulando*/
		for(int o=1; o<=totaltaller;) {
			/*Ciclo WHILE para validar las notas de los talleres(que esten entre 1 y 5)*/
			while(validartall==false) {
				cout<<"Por favor ingrese la nota #"<<o <<" de talleres" <<endl;
				cin>>notataller;
				if(notataller<10 || notataller>50) {
					cout<<"Nota invalida"<<endl;
				} else {
					validartall=true;
				}
			}
			/*Cambio en variable booleana para cuando se repita el ciclo FOR evalue en el WHILE*/
			validartall=false;
			notatotaltaller=notatotaltaller+notataller;//Acumulador de las notas referentes a talleres
			o++;
		}
		/*Ciclo FOR para pedir las notas referentes a los 2 quizes*/
		for (int p=1; p<=2;) {
			/*Ciclo WHILE para validar las notas de los quizes(que esten entre 1 y5)*/
			while(validarquiz==false) {
				cout<<"Por favor ingrese la nota #"<<p <<" de quizes" <<endl;
				cin>>notaquiz;
				if(notaquiz<10 || notaquiz>50) {
					cout<<"Nota invalida"<<endl;
				} else {
					validarquiz=true;
				}
			}
			/*Cambio en variable booleana para cuando se repita el ciclo FOR evalue en el WHILE*/
			validarquiz=false;
			notatotalquiz=notatotalquiz+notaquiz;//Acumulador de las notas referentes a Quizes
			p++;
		}
		/*Ciclo WHILE para validar la nota referente al parcial*/
		while(validarparcial==false) {
			cout<<"Por favor ingrese la nota referente al parcial"<<endl;
			cin>>notaparcial;
			if(notaparcial<10 || notaparcial>50) {
				cout<<"Nota invalida" <<endl;
			} else {
				validarparcial=true;
			}
		}
		/*Reinicio de variables para que no operen con valores pasados*/
		promediotaller=0;
		promedioquiz=0;
		porcentajetaller=0;
		porcentajequiz=0;
		porcentajeparcial=0;
		notafinal=0;
		/*Variables de calculo para calcular la nota final*/
		promediotaller=notatotaltaller/totaltaller;
		promedioquiz=notatotalquiz/2;
		porcentajetaller=(promediotaller*porcentaje1)/100;
		porcentajequiz=(promedioquiz*porcentaje2)/100;
		porcentajeparcial=notaparcial*0.5;
		notafinal=porcentajeparcial+porcentajequiz+porcentajetaller;
		/*Condicional para evaluar si pasa la materia y un acumulador para saber cuantos pasaron la materia*/
		if(notafinal>29) {
			cout<<"El estudiante " <<nombre<<" del semestre #"<<semestre <<" paso el curso de programacion"<<endl;
			cout <<"con una nota de "<<notafinal;
			estudiantespasaron++;
		} else {
			cout<<"El estudiante " <<nombre<<" del semestre #"<<semestre <<" no paso el curso de programacion"<<endl;
			cout <<"con una nota de "<<notafinal;
		}
		cout<<endl<<endl<<endl;
		i++;
	}
	/*Variable de calculo para saber el porcentaje de quienes pasaron, e impresión de cuantos pasaron y este porcentaje*/
	porcentajeestudiantes=(estudiantespasaron*100)/totalestudiantes;
	cout<<"El total de estudiantes que aprobaron la materia fue de #"<<estudiantespasaron <<" y esto equivale al "<<porcentajeestudiantes <<"%";
	return 0;
}
