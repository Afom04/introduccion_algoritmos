//Enunciado
//Una l�nea de colectivos presta los siguientes servicios: Com�n, Estudiante y Trabajador. Los
//estudiantes tienen un descuento del 50 %, y los trabajadores un descuento del 30 % del costo
//de un boleto com�n. Se desea obtener cantidad de boletos vendidos, teniendo en cuenta el
//dinero final recolectado por cada l�nea (Com�n, Estudiante y Trabajador). Para resolver el
//ejercicio se debe solicitar solamente el valor del boleto para los trabajadores.
//An�lisis
//Pedir el valor del boleto de trabajador 
//Usar condicional de si el valor de trabajador es <= 0 la boleta sera gratuita, sino 
//definir comun=(trabajador*100)/30,estudiante=comun/2, despues pedir el numero de boletas que se vendieron en cada linea definir segun variable,
//multiplicar cada variable por el correspondiente precio del boleto definir a estos valores como el dinero final de cada linea segun corresponda
//Mostrar el valor del dinero final de cada linea.
Algoritmo Colectivo
	escribir"Por favor escribir el precio del boleto de trabajador.";
	leer trabajador;
	si trabajador<=0 Entonces
		escribir "Los boletos son gratuitos."
	sino 
		comun<-(trabajador*100)/30;
		estudiante<-comun/2;
		escribir "�Cual fue el total de boletos vendidos en la linea com�n.";
		leer total_comun;
		Dinfincomun<-total_comun*comun;
		escribir "�Cual fue el total de boletos vendidos en la linea estudiantes.";
		leer total_est;
		Dinfinest<-total_est*estudiante;
		escribir "�Cual fue el total de boletos vendidos en la linea trabajador.";
		leer total_trab;
		Dinfintrab<-total_trab*trabajador;
		Escribir "El dinero recolectado en las diferentes lineas fueron: Com�n $",comun,", estudiantes $",estudiante," y trabajador $",trabajador,".";
	FinSi
FinAlgoritmo
