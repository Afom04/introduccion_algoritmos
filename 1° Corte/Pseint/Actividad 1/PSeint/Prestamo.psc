//Enunciado
//Carlos desea pedir un prestamo bancario para comprar un vehiculo. El cuenta con el 30% del valor del vehiculo, su mamá le va a regalar 2 millones de 
//pesos y el resto lo pide al banco, determine en cuanto le queda la cuota mesual para pagar, teniendo en cuenta que el banco maneja un interes anual
//de 28% y el prestamo lo saca a 60 meses.
//Análisis
//Definir variables como reales
//Pedir el precio del vehiculo, definir prestamo=(vehiculo*0.7)-2000000, definir interes=(prestamo*0.28), 
//definir prestamototal=prestamo+(interes*5), definir cuota mensual=prestamototal/60,
//Condicional si vehiculo<=2000000 entonces mostrar que el pago del vehiculo no ncesita de un prestamo, SiNo
//mostrar la cuotamensual.
Algoritmo Prestamo
	Definir v,p,i,pt,cm Como Real
	
	Escribir "Ingrese el precio del vehículo";
	Leer v;
	p=(v*0.7)-2000000;
	i=(p*0.28);
	pt=p+(i*5);
	cm=pt/60;
	
	si v<=2000000 Entonces
		Escribir "Puede pagar el vehículo sin necesidad de un préstamo"
	SiNo
		Escribir "Paga una cuota mensual de $", cm;
	FinSi
FinAlgoritmo
