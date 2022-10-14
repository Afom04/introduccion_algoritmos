//Enunciado
//Un estacionamiento desea determinar el cobro que debe realizar a un cliente teniendo en cuenta lo siguiente: Si, el tiempo de estadia
//fue de 3-5 horas tiene una tarifa basica de 20000, de 5-12 horas una tarifa de 50000, de lo contrario se cobrara el minuto a 120 pesos, 
//si el cliente es preferencial tiene un descuento del 20%, si el cliente es estrella tiene un descuento del 40%. Determine de cuanto fue 
//el descuento realizado en caso de tenerlo.
//Análisis
//definir valores reales y caracteres 
//pedir el timepo de estadia en minutos, pedir el tipo de membresia
//condicional, si el tiempo <= 0 entonces el tiempo de estadia no sera posible, si no 
//tiempo>0 y tt>=180 & t<300 Entonces el cobro se definira como $20000, sino 
//t>=300 y t<= 720 Entonces el cobro se definita como $50000, sino
//el cobro sera definido como t*120
//condicional para variable de caracter, si cat=Preferencial o cat=preferencial entonces descuento=cobro*0.2, SiNo
//cat="Estrella" o cat="estrella" Entonces descuento=cobro*0.4, SiNo
//cat="Ninguno" o cat="ninguno" o cat="No" o cat="no" Entonces descuento=0
//Definir total como cobro-descuento, mostrar el total.
Algoritmo Parqueadero
	Definir t,cobro,des,total Como Real
	Definir cat Como Caracter;
	Escribir "Bienvenido, por favor ingrese el tiempo de estadia en minutos";
	Leer t;
	Escribir "Por favor,ingrese el tipo de membresía;";
	Leer cat;
	
	si t<=0 Entonces
		Escribir "El tiempo de estadia no es posible";
	SiNo
		si t>0 & t>=180 & t<300 Entonces
			cobro=20000;
			
		SiNo
			si t>=300 & t<= 720 Entonces
				cobro=50000;
				
			SiNo
				cobro=t*120;
			FinSi;
		FinSi;
	FinSi;
	
	Si cat="Preferencial" o cat="preferencial" Entonces
		des=cobro*0.2;
	SiNo
		si cat="Estrella" o cat="estrella" Entonces
			des=cobro*0.4;
		SiNo
			si cat="Ninguno" o cat="ninguno" o cat="No" o cat="no" Entonces
				des=0;
			FinSi
		FinSi
	FinSi
	
	total=cobro-des
	Escribir "El valor de su estadia es de $",total ;
FinAlgoritmo
