//Enunciado
//Marcos va a pintar una pared que tiene un area de x*y se sabe que 1 galon de pintura le alcanza para 30mtrs cuadrados. Determine cuantos 
//galones de pintura compra Marcos, cuanto dinero ha de invertir en la compra, sabiendo que un galon de pintura cuesta 20 mil pesos.
//Análisis
//Definir variables como reales
//pedir base y altura de la pared, definir area=x*y, definir galon=30,definir pagogalon=28000
//Condicional si area<=30 entonces mostrar pagogalon, SiNo
//area<=60 Entonces pagogalon=pagogalon*2, mostrar pagogalon, sino 
//area<=90 entonces pagogalon=pagogalon*3, mostrar pagogalon
Algoritmo Pintura
	Definir b,a,area,g,pg,gu,p Como Real;
	Escribir "Ingrese el tamaño de la base de la pared";
	Leer b;
	Escribir "Ingrese el la altura de la pared";
	Leer a;
	
	g=30;
	area=b*a;
	pg=28000;
	gu=area/g;
	
	Si area<=30 Entonces
		Escribir "Su gasto es de un galón y paga $",pg;
	SiNo
		si area<=60 Entonces
			pg=pg*2;
			Escribir "Su gasto es de dos galones y paga $",pg;
		SiNo
			si area<=90
				pg=pg*3;
				Escribir "Su gasto es de tres galones y paga $", pg;
			FinSi
		FinSi
	FinSi
FinAlgoritmo
