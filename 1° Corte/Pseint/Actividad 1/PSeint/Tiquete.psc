//Análisis 
//Definir variables como reales y caracter
//Pedir el precio del de trabajador
//Condicinal de si x es estudiante(30% de descuento), trabajador(tiquete normal) o aulto mayor(mitad de precio) para definir precios
//Mostrar el precio del pasaje y su categoría 
Algoritmo tiquete
	Definir tiquete_1,t_estudiante,t_trabajador,t_adultoM Como Real;
	Definir x Como Caracter;
	escribir"escribir el precio del tiquete de trabajador";
	leer tiquete_1;
	escribir "ingrese si es trabajador, estudiante o adulto mayor";
	leer x;
	si x="estudiante" Entonces;
		t_estudiante<-tiquete_1*0.30;
		escribir"usted debe pagar por pasaje: ",t_estudiante;
	sino 
		si x="trabajador" entonces 
			t_trabajador<-tiquete_1;
			escribir"usted debe pagar por pasaje: ",t_trabajador;
		sino
			si x="adulto mayor" entonces
				t_adultoM<-tiquete_1/2;
				escribir"usted debe pagar por pasaje: ",t_adultoM;
			SiNo
				escribir"no aplica para descuento usted pagara precio normal el cual es: ",tiquete_1;
			fin si
		fin si
		
	FinSi
	escribir "tenga un buen dia:D"
FinAlgoritmo
