//Enunciado
//Sandra se va para la peluqueria. Se arregla las uñas y el cabello, se sabe que el arreglo de uñas tiene un 40% menos que el de cabello. Adicionalmente 
//como es cliente preferencial le dan un descuento del 10% del total a pagar. Determine cuanto debe pagar por los servicios prestados y cual fue el
//descuento total que recibio.
//Análisis
//definir valores reales y caracteres 
//pedir precio del arreglo del cabello y si el cliente es preferencial, definir pagouñas=preciocabello*0.6
//Condicional si cat="Si" o cat="si" Entonces definir descuento=(pagouñas+preciocabello)*0.1, sino descuento=0
//Definir total=(pagouñas+preciocabello)-descuento, mostrar total y descuento.
//
//
Algoritmo SandraPeluqueria
	Definir pu,pc,t,des Como Real;
	Definir cat Como Caracter;
	
	Escribir "Ingrese el precio del arreglo de cabello";
	Leer pc;
	Escribir "El cliente es preferencial";
	Leer cat;
	
	pu=pc*0.6;
	si cat="Si" o cat="si" Entonces
		des=(pu+pc)*0.1;
	SiNo
		des=0;
	FinSi
	t=(pu+pc)-des;
	Escribir "El pago es de $", t ," y tiene un descuento de $",des;
FinAlgoritmo
